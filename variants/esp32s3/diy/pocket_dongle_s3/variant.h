//-----------------------------------------------------------------------------
//Pocket Dongle S3 - ST7735S 0.96" TFT
//-----------------------------------------------------------------------------

#define HAS_SCREEN 1
#define HAS_SPI_TFT 1
#define USE_TFTDISPLAY 1


#define ST7735S 1

#define ST7735_SPI_HOST SPI2_HOST

#define ST7735_SCK     10
#define ST7735_SDA     11
#define ST7735_MISO   -1
#define ST7735_RS      13
#define ST7735_CS      12
#define ST7735_RESET   14
#define ST7735_BUSY   -1

#define TFT_WIDTH      80
#define TFT_HEIGHT     160
#define TFT_OFFSET_X    0
#define TFT_OFFSET_Y    0

// Definitions needed for LovyanGFX
#define SPI_FREQUENCY       40000000
#define SPI_READ_FREQUENCY   4000000