#include <spi.h>

void spi_init(void) {
  // Set SS, MOSI and SCK all others input
  DDRB = (1 << PB0) | (1 << PB2) | (1 << PB1);
  // Enable SPI, Master, set clock rate fck/4, mode 0
  SPCR = (1 << SPE) | (1 << MSTR);

  // Set SS/CS
  DDRA |= (1 << PA2);
  PORTA |= (1 << PA2);
}
