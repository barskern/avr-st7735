#ifndef _SPI_H_
#define _SPI_H_

#include<avr/io.h>

void spi_init(void);

static inline uint8_t spi_write(uint8_t byte) {
	SPDR = byte;
	while(!(SPSR & (1<<SPIF)));
	return SPDR;
}

static inline void spi_set_cs(void) {
	PORTA |= (1 << PA2);
}

static inline void spi_unset_cs(void) {
	PORTA &= ~(1 << PA2);
}


#endif
