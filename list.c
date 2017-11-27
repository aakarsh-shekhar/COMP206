#include <stdio.h>
#include <stdlib.h>

#ifndef LIST_H
#include "list.h"
#endif

struct NODE *head;
	
void newList()
{
	head = NULL;
}

int addNode(int n)
{
	struct NODE *newNODE = malloc(sizeof(struct NODE));
	
	newNODE->next = head;
	head = newNODE;
	newNODE->data = n;

	return 1;
}

void prettyPrint()
{
	struct NODE *temp = head;

	while(temp != NULL)
	{
		printf("%d", temp->data);
		temp = temp->next;
	}
}