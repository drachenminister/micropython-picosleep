// Board and hardware specific configuration
#define MICROPY_HW_BOARD_NAME                   "Raspberry Pi Pico W (sleep)"

// todo: We need something to check our binary size
#define MICROPY_HW_FLASH_STORAGE_BYTES          (848 * 1024)

// Enable networking.
#define MICROPY_PY_NETWORK 1

// CYW43 driver configuration.
#define CYW43_USE_SPI (1)
#define CYW43_LWIP (1)
#define CYW43_GPIO (1)
#define CYW43_SPI_PIO (1)

// For debugging mbedtls - also set
// Debug level (0-4) 1=warning, 2=info, 3=debug, 4=verbose
// #define MODUSSL_MBEDTLS_DEBUG_LEVEL 1

#define MICROPY_HW_PIN_CYW43_COUNT CYW43_WL_GPIO_COUNT
#ifdef CYW43_WL_GPIO_LED_PIN
#define MICROPY_HW_PIN_CYW43_LED_PIN_NUM CYW43_WL_GPIO_LED_PIN
#endif

#define MICROPY_HW_PIN_RESERVED(i) ((i) == CYW43_PIN_WL_HOST_WAKE || (i) == CYW43_PIN_WL_REG_ON)
