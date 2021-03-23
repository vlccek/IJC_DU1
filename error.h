#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#ifndef IJC_DU1_ERROR_H
#define IJC_DU1_ERROR_H

void warning_msg(const char *fmt, ...);
void error_exit(const char *fmt, ...);

#endif //IJC_DU1_ERROR_H
