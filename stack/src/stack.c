#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "debug.h"
#include "stack.h"

#define STACK_DBG(message, ...)	\
 			MSG("%s" message "%s", YELLOW, ##__VA_ARGS__, RESET)
 		
#define STACK_PRT_DBG(message, ...)	\
			MSG("%s" message "%s", CYAN, ##__VA_ARGS__, RESET)

#define STACK_PRT_ERR(message, ...)	\
			MSG("%s" message "%s", LIGHT_RED, ##__VA_ARGS__, RESET)

