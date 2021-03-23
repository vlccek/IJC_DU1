#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "error.h"

void warning_msg(const char *fmt, ...) {
	va_list L;
	va_start(L, fmt);
	fprintf(stderr, "CHYBA: ");
	vfprintf(stderr, fmt, L);
	va_end(L);
}

void error_exit(const char *fmt, ...) {
	va_list L;
	va_start(L, fmt);
	fprintf(stderr, "CHYBA: ");
	vfprintf(stderr, fmt, L);
	va_end(L);
	exit(1);
}
