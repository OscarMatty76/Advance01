#include "myInt.h"
#include <stdlib.h>
#include <stdio.h>

myInt* addItem(myInt* head, myInt* node)
{
	myInt *temp = head;


	if(temp == NULL)
	{
		head = node;
		node->next = NULL;

	}else
		{
		while(temp->next)
			{
				temp = temp->next;
			}

			temp->next = node;
			node->next = NULL;
		}

	return head;

}

void deleteItem(myInt** head, myInt** node)
{
	myInt* temp = *head;

	if(!temp)
	{
		return;
	}
	
	while(temp->next->data != (*node)->data)
	{
		temp = temp->next;
	}
	
	temp->next = (*node)->next;


}

void printList(myInt* head)
{
	myInt* temp = head;

	while(temp != NULL)
	{
		
			printf(" %d, ",temp->data);
			temp = temp->next;
	}
	
}

myInt* createNode(int num)
	{
		myInt* temp;
		temp = (myInt*) malloc(sizeof(myInt));
		temp->data = num;
		temp->next = NULL;
		return temp;
	}

void freeList(myInt** head)
	{
		myInt* temp = (*head)->next, *back = *head;

		while(temp -> next)
			{
				free(back);
				back = temp;
				temp = temp->next;
			}

		free(temp);

	}