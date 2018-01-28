#ifndef __SINGLY_LINKED_LIST__
#define __SINGLY_LINKED_LIST__

#include <stdbool.h>

#define SLIST_MINIMAL_NODE	1
#define SLIST_MAXIMAL_NODE	100

/* caller handle definition */
typedef struct _SLIST_NODE_H_
{
	/* number of the nodes in list */
	unsigned short count;
	
	/* pointer to the first node in list */
	struct slist_node *head;

	/* just pointer to last node we operated */
	struct slist_node *current;
} SLIST_NODE_H, *PSLIST_NODE_H;

/* custom structure */
typedef struct _SLIST_CUSTOM_ {
	int age;
	char name[16];
} SLIST_CUSTOM_DATA, *PSLIST_CUSTOM_DATA;

/* create and destroy */
bool slist_destroy (SLIST_NODE_H *handle);
bool slist_init (SLIST_NODE_H *handle);

/* slist insert function */
bool slist_insert_node_front (SLIST_NODE_H *handle, PSLIST_CUSTOM_DATA data);
bool slist_insert_node_tail (SLIST_NODE_H *handle, PSLIST_CUSTOM_DATA data);
bool slist_insert_node_index (SLIST_NODE_H *handle, PSLIST_CUSTOM_DATA data, int idx);

/* slist remove function */
bool slist_remove_node_front (SLIST_NODE_H *handle);
bool slist_remove_node_tail (SLIST_NODE_H *handle);
bool slist_remove_node_index (SLIST_NODE_H *handle, int idx);

/* search in slist */
bool slist_search_node (SLIST_NODE_H *handle, char *name);

/* get slist length */
int slist_length (SLIST_NODE_H *handle);

/* slist debug method */
void slist_print (SLIST_NODE_H *handle);

#endif	/* __SINGLY_LINKED_LIST__ */
