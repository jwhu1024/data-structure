#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "debug.h"
#include "slist.h"

#define MAIN_DBG(message, ...)	\
 		MSG("%s" message "%s",   LIGHT_GREEN, ##__VA_ARGS__, RESET)

void test_case_insert_front_1(SLIST_NODE_H *handle)
{
	SLIST_CUSTOM_DATA my_data;
	PSLIST_CUSTOM_DATA pdata = &my_data;

	pdata->age = (rand() % 100) + 1;
	strcpy(pdata->name, "Aaron");
	slist_insert_node_front (handle, pdata);
	slist_print(handle);

	pdata->age = (rand() % 100) + 1;
	strcpy(pdata->name, "Eagle");
	slist_insert_node_front (handle, pdata);
	slist_print(handle);
}

void test_case_insert_tail_1(SLIST_NODE_H *handle)
{
	SLIST_CUSTOM_DATA my_data;
	PSLIST_CUSTOM_DATA pdata = &my_data;

	pdata->age = (rand() % 100) + 1;
	strcpy(pdata->name, "Alastair");
	slist_insert_node_tail (handle, pdata);
	slist_print(handle);

	pdata->age = (rand() % 100) + 1;
	strcpy(pdata->name, "Badger");
	slist_insert_node_tail (handle, pdata);
	slist_print(handle);
}

void test_case_insert_index_1(SLIST_NODE_H *handle)
{
	SLIST_CUSTOM_DATA my_data;
	PSLIST_CUSTOM_DATA pdata = &my_data;

	pdata->age = (rand() % 100) + 1;
	strcpy(pdata->name, "Carver");
	slist_insert_node_index (handle, pdata, 2);
	slist_print(handle);

	pdata->age = (rand() % 100) + 1;
	strcpy(pdata->name, "Casey");
	slist_insert_node_index (handle, pdata, 4);
	slist_print(handle);
}

void test_case_remove_front_1(SLIST_NODE_H *handle)
{
	SLIST_CUSTOM_DATA my_data;
	PSLIST_CUSTOM_DATA pdata = &my_data;

	pdata->age = (rand() % 100) + 1;
	strcpy(pdata->name, "Rocky");
	slist_insert_node_front (handle, pdata);
	slist_print(handle);

	pdata->age = (rand() % 100) + 1;
	strcpy(pdata->name, "Farley");
	slist_insert_node_front (handle, pdata);
	slist_print(handle);

	slist_remove_node_front(handle);
	slist_print(handle);
}

void test_case_remove_tail_1(SLIST_NODE_H *handle)
{
	SLIST_CUSTOM_DATA my_data;
	PSLIST_CUSTOM_DATA pdata = &my_data;

	pdata->age = (rand() % 100) + 1;
	strcpy(pdata->name, "Donald");
	slist_insert_node_front (handle, pdata);
	slist_print(handle);
	
	pdata->age = (rand() % 100) + 1;
	strcpy(pdata->name, "Derek");
	slist_insert_node_tail (handle, pdata);
	slist_print(handle);

	pdata->age = (rand() % 100) + 1;
	strcpy(pdata->name, "Egerton");
	slist_insert_node_tail (handle, pdata);
	slist_print(handle);
	
	slist_remove_node_tail(handle);
	slist_print(handle);
}

void test_case_remove_index_1(SLIST_NODE_H *handle)
{
	SLIST_CUSTOM_DATA my_data;
	PSLIST_CUSTOM_DATA pdata = &my_data;

	pdata->age = (rand() % 100) + 1;
	strcpy(pdata->name, "Freeman");
	slist_insert_node_tail (handle, pdata);
	slist_print(handle);
	
	pdata->age = (rand() % 100) + 1;
	strcpy(pdata->name, "Kelvin");
	slist_insert_node_tail (handle, pdata);
	slist_print(handle);

	pdata->age = (rand() % 100) + 1;
	strcpy(pdata->name, "Leonard");
	slist_insert_node_tail (handle, pdata);
	slist_print(handle);
	
	pdata->age = (rand() % 100) + 1;
	strcpy(pdata->name, "Lucas");
	slist_insert_node_tail (handle, pdata);
	slist_print(handle);
	
	slist_remove_node_index(handle, 4);
	slist_print(handle);
}

int main (int argc, char* argv[])
{
	MAIN_DBG("BEGIN\n");
	SLIST_NODE_H my_h;

	srand(time(NULL));

	if (false == slist_init(&my_h))
	{
		return -1;
	}

#if 1 // insert test area
	/* insert front */
	test_case_insert_front_1(&my_h);

	/* insert tail */
	test_case_insert_tail_1(&my_h);

	/* insert by index */
	test_case_insert_index_1(&my_h);
#endif

#if 1 // remove test area
	/* remove front */
	test_case_remove_front_1(&my_h);

	/* remove tail */
	test_case_remove_tail_1(&my_h);

	/* remove by index */
	test_case_remove_index_1(&my_h);
#endif

#if 1 // get slist length test
	/* get slist length */
	MAIN_DBG("slist length : %d\n", slist_length(&my_h));
#endif

	if (false == slist_destroy(&my_h))
	{
		MAIN_DBG("memory destroy has some problems!\n");
		return -1;
	}

	MAIN_DBG("END\n");
	return 0;
}
