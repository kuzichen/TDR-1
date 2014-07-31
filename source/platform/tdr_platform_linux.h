#ifndef _H_TDR_PLATFORM_LINUX
#define _H_TDR_PLATFORM_LINUX

#define TDR_FILE_SEPARATOR '/'

#include <stddef.h>
#include <inttypes.h>
#include <sys/stat.h>
//���������stdlib.h strtoll�����
#include <stdlib.h>

#if __WORDSIZE == 32
#define TDR_WORDSIZE 32
#elif __WORDSIZE == 64
#define TDR_WORDSIZE 64
#else
#error "unknow wordsize"
#endif

#endif