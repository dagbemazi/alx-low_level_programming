#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

#define ABS(x) ({ \
		if (x == NULL) \
		{ \
		  return (0); \
		} \
		else \
		{ \
		  abs((x)); \
		} \
	})

#endif
