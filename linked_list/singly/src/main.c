#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "debug.h"
#include "slist.h"

#define MAIN_DBG(message, ...)	\
 		MSG("%s" message "%s",   LIGHT_GREEN, ##__VA_ARGS__, RESET)

void test_case_insert_front_1(SLIST_NODE_H *handle)
{
	SLIST_CUSTOM_DATA my_data;
	PSLIST_CUSTOM_DATA pdata = &my_data;

	pdata->age = 11;
	strcpy(pdata->name, "Terry");
	slist_insert_node_front (handle, pdata);
	slist_print(handle);

	pdata->age = 13;
	strcpy(pdata->name, "John");
	slist_insert_node_front (handle, pdata);
	slist_print(handle);
}

void test_case_insert_tail_1(SLIST_NODE_H *handle)
{
	SLIST_CUSTOM_DATA my_data;
	PSLIST_CUSTOM_DATA pdata = &my_data;

	pdata->age = 18;
	strcpy(pdata->name, "Mary");
	slist_insert_node_tail (handle, pdata);
	slist_print(handle);

	pdata->age = 24;
	strcpy(pdata->name, "Lester");
	slist_insert_node_tail (handle, pdata);
	slist_print(handle);
}

void test_case_insert_index_1(SLIST_NODE_H *handle)
{
	SLIST_CUSTOM_DATA my_data;
	PSLIST_CUSTOM_DATA pdata = &my_data;

	pdata->age = 33;
	strcpy(pdata->name, "Casar");
	slist_insert_node_index (handle, pdata, 2);
	slist_print(handle);

	pdata->age = 22;
	strcpy(pdata->name, "Shawn");
	slist_insert_node_index (handle, pdata, 4);
	slist_print(handle);
}


void test_case_remove_front_1(SLIST_NODE_H *handle)
{
	SLIST_CUSTOM_DATA my_data;
	PSLIST_CUSTOM_DATA pdata = &my_data;

	pdata->age = 11;
	strcpy(pdata->name, "Terry");
	slist_insert_node_front (handle, pdata);
	slist_print(handle);

	pdata->age = 15;
	strcpy(pdata->name, "Mary");
	slist_insert_node_front (handle, pdata);
	slist_print(handle);

	slist_remove_node_front(handle);
	slist_print(handle);
}

void test_case_remove_tail_1(SLIST_NODE_H *handle)
{
	SLIST_CUSTOM_DATA my_data;
	PSLIST_CUSTOM_DATA pdata = &my_data;

	pdata->age = 18;
	strcpy(pdata->name, "Mary");
	slist_insert_node_front (handle, pdata);
	slist_print(handle);
	
	pdata->age = 14;
	strcpy(pdata->name, "Cathy");
	slist_insert_node_tail (handle, pdata);
	slist_print(handle);

	pdata->age = 54;
	strcpy(pdata->name, "Brian");
	slist_insert_node_tail (handle, pdata);
	slist_print(handle);
	
	slist_remove_node_tail(handle);
	slist_print(handle);
}

void test_case_remove_index_1(SLIST_NODE_H *handle)
{
	SLIST_CUSTOM_DATA my_data;
	PSLIST_CUSTOM_DATA pdata = &my_data;

	pdata->age = 18;
	strcpy(pdata->name, "Mary");
	slist_insert_node_tail (handle, pdata);
	slist_print(handle);
	
	pdata->age = 14;
	strcpy(pdata->name, "Cathy");
	slist_insert_node_tail (handle, pdata);
	slist_print(handle);

	pdata->age = 54;
	strcpy(pdata->name, "Brian");
	slist_insert_node_tail (handle, pdata);
	slist_print(handle);
	
	pdata->age = 32;
	strcpy(pdata->name, "Fred");
	slist_insert_node_tail (handle, pdata);
	slist_print(handle);
	
	slist_remove_node_index(handle, 4);
	slist_print(handle);
}

int main (int argc, char* argv[])
{
	MAIN_DBG("BEGIN\n");
	SLIST_NODE_H my_h;

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

	if (false == slist_destroy(&my_h))
	{
		MAIN_DBG("memory destroy has some problems!\n");
		return -1;
	}

	MAIN_DBG("END\n");
	return 0;
}
