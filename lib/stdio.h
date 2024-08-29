#ifndef LIB_STDIO_H_
#define LIB_STDIO_H_

#include "stdarg.h"

uint32_t putstr(const char* s);
uint32_t debug_printf(const char* format, ...);
uint32_t vaprintf(char* buf, const char* format, va_list arg);

typedef enum utoa_t
{
	utoa_dec = 10,
	utoa_hex = 16,
}utoa_t;

uint32_t utoa(char* buf, uint32_t val, utoa_t base);

#endif /* LIB_STDIO_H_ */
