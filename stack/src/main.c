#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "debug.h"
#include "stack.h"

#define MAIN_DBG(message, ...)	\
 		MSG("%s" message "%s",   LIGHT_GREEN, ##__VA_ARGS__, RESET)

int main (int argc, char* argv[])
{
	MAIN_DBG("BEGIN\n");
#if 0
	CLIST_NODE_H my_h;

	srand(time(NULL));

	if (false == clist_init(&my_h))
	{
		return -1;
	}

#if 1	// insert test area
	/* insert front */
	test_case_insert_front_1(&my_h);

	/* insert tail */
	test_case_insert_tail_1(&my_h);

	/* insert by index */
	test_case_insert_index_1(&my_h);
#endif

#if 1	// remove test area
	/* remove front */
	test_case_remove_front_1(&my_h);

	/* remove tail */
	test_case_remove_tail_1(&my_h);

	/* remove by index */
	test_case_remove_index_1(&my_h);
#endif

#if 1	// get clist length test
	/* get clist length */
	MAIN_DBG("clist length : %d\n", clist_length(&my_h));
#endif

#if 1	// clist search test	
	MAIN_DBG("Eagle is %s the list\n", (clist_search_node(&my_h, "Eagle") == true) ? "in" : "not in");
#endif

	if (false == clist_destroy(&my_h))
	{
		MAIN_DBG("memory destroy has some problems!\n");
		return -1;
	}
#endif
	MAIN_DBG("END\n");
	return 0;
}
