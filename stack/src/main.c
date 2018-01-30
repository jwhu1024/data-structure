#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "debug.h"
#include "clist.h"

#define MAIN_DBG(message, ...)	\
 		MSG("%s" message "%s",   LIGHT_GREEN, ##__VA_ARGS__, RESET)

void test_case_insert_front_1(CLIST_NODE_H *h)
{
	CLIST_CUSTOM_DATA my_data;
	PCLIST_CUSTOM_DATA pdata = &my_data;

	pdata->age = (rand() % 100) + 1;
	strcpy(pdata->name, "Aaron");
	clist_insert_node_front (h, pdata);
	clist_print(h);

	pdata->age = (rand() % 100) + 1;
	strcpy(pdata->name, "Eagle");
	clist_insert_node_front (h, pdata);
	clist_print(h);
}

void test_case_insert_tail_1(CLIST_NODE_H *h)
{
	CLIST_CUSTOM_DATA my_data;
	PCLIST_CUSTOM_DATA pdata = &my_data;

	pdata->age = (rand() % 100) + 1;
	strcpy(pdata->name, "Alastair");
	clist_insert_node_tail (h, pdata);
	clist_print(h);

	pdata->age = (rand() % 100) + 1;
	strcpy(pdata->name, "Badger");
	clist_insert_node_tail (h, pdata);
	clist_print(h);
}

void test_case_insert_index_1(CLIST_NODE_H *h)
{
	CLIST_CUSTOM_DATA my_data;
	PCLIST_CUSTOM_DATA pdata = &my_data;

	pdata->age = (rand() % 100) + 1;
	strcpy(pdata->name, "Carver");
	clist_insert_node_index (h, pdata, 1);
	clist_print(h);

	pdata->age = (rand() % 100) + 1;
	strcpy(pdata->name, "Casey");
	clist_insert_node_index (h, pdata, clist_length(h));
	clist_print(h);
}

void test_case_remove_front_1(CLIST_NODE_H *h)
{
	CLIST_CUSTOM_DATA my_data;
	PCLIST_CUSTOM_DATA pdata = &my_data;

	pdata->age = (rand() % 100) + 1;
	strcpy(pdata->name, "Rocky");
	clist_insert_node_front (h, pdata);
	clist_print(h);

	clist_remove_node_front(h);
	clist_print(h);

	pdata->age = (rand() % 100) + 1;
	strcpy(pdata->name, "Farley");
	clist_insert_node_front (h, pdata);
	clist_print(h);

	pdata->age = (rand() % 100) + 1;
	strcpy(pdata->name, "Rocky");
	clist_insert_node_front (h, pdata);
	clist_print(h);

	clist_remove_node_front(h);
	clist_print(h);
}

void test_case_remove_tail_1(CLIST_NODE_H *h)
{
	CLIST_CUSTOM_DATA my_data;
	PCLIST_CUSTOM_DATA pdata = &my_data;

	pdata->age = (rand() % 100) + 1;
	strcpy(pdata->name, "Donald");
	clist_insert_node_front (h, pdata);
	clist_print(h);

	clist_remove_node_tail(h);
	clist_print(h);
	
	pdata->age = (rand() % 100) + 1;
	strcpy(pdata->name, "Derek");
	clist_insert_node_tail (h, pdata);
	clist_print(h);

	pdata->age = (rand() % 100) + 1;
	strcpy(pdata->name, "Egerton");
	clist_insert_node_tail (h, pdata);
	clist_print(h);
	
	clist_remove_node_tail(h);
	clist_print(h);
}

void test_case_remove_index_1(CLIST_NODE_H *h)
{
	CLIST_CUSTOM_DATA my_data;
	PCLIST_CUSTOM_DATA pdata = &my_data;

	pdata->age = (rand() % 100) + 1;
	strcpy(pdata->name, "Freeman");
	clist_insert_node_tail (h, pdata);
	clist_print(h);

	clist_remove_node_index(h, 1);
	clist_print(h);
	
	pdata->age = (rand() % 100) + 1;
	strcpy(pdata->name, "Kelvin");
	clist_insert_node_tail (h, pdata);
	clist_print(h);

	pdata->age = (rand() % 100) + 1;
	strcpy(pdata->name, "Leonard");
	clist_insert_node_tail (h, pdata);
	clist_print(h);
	
	pdata->age = (rand() % 100) + 1;
	strcpy(pdata->name, "Lucas");
	clist_insert_node_tail (h, pdata);
	clist_print(h);
	
	clist_remove_node_index(h, clist_length(h));
	clist_print(h);
}

int main (int argc, char* argv[])
{
	MAIN_DBG("BEGIN\n");
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

	MAIN_DBG("END\n");
	return 0;
}
