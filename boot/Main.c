#include "stdint.h"
#include "HalUart.h"
#include "stdio.h"
#include "stdbool.h" 
#include "HalInterrupt.h" 

static void Hw_init();
static void Printf_test(void); 

void main()
{
	Hw_init();

	uint32_t i = 100;
	while(i--){
		Hal_uart_put_char('N');
	}
	Hal_uart_put_char('\n');
	putstr("hello world\n");
	Printf_test(); 

	i = 100;
	while(i--){
		uint8_t ch = Hal_uart_get_char();
		Hal_uart_put_char(ch);
	}
}

static void Hw_init()
{
	Hal_interrupt_init();
	Hal_uart_init(); 
} 

static void Printf_test(void)
{
	char* str = "printf"; 
	char* nullptr = 0; 
	uint32_t i = 5; 

	debug_printf("%s\n", "hello"); 
	debug_printf("output string ptr: %s\n", str); 
	debug_printf("%s is null ptr. %u number\n", nullptr, 10);
	debug_printf("%u = 5\n", i); 
	debug_printf("dec=%u he%x\n", 0xff, 0xff); 
	debug_printf("printf zero %u\n", 0);

	while(1);
} 


