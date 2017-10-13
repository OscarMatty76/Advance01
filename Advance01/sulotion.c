#include <stdio.h>
#include <stdlib.h>
#include "myInt.h"


myInt* seperete(myInt* head);

int* powerArray(int n);

void main()
	{
		printf("idk what im doing...");
		printf("Yes I Do!");
	}


myInt* seperete(myInt* head)
	{
		myInt* copy;
		myInt* copyOdd;
		myInt* temp = head;
		myInt* odd = createNode(0);
		odd = odd->next;

		while((temp->next)->next)
			{

				if(((temp->next)->data) %2 == 1)
					{	
						copy = (temp->next)->next;
						odd = addItem(odd,(temp->next));
						temp->next = copy;

					}else
					{
					temp = temp->next;
					}


			}
		
		if((temp->next)->data %2 == 1)
			{
				odd = addItem(odd,(temp->next));
				temp->next = NULL;
			}


		if(head->data %2 == 1)
			{
				copy = head->next;
				copyOdd = head;
				head = copy;
				copyOdd->next = odd;
				odd = copy;
			
			}



		return odd;
	}


int* powerArray(int n)
	{
		int i = 1;
		int* arr = (int*) calloc(n,sizeof(int));

		if(!arr)
			{
				printf("Unable to find enough space.");
				return arr;
			}

		arr[0] = 1;
		for(; i < n; i++)
			{
				arr[i] = 2*arr[i-1];
			}
		
		return arr;
	}	


/*

int i = 0;
		myInt* list = NULL;
		myInt* odd = NULL;

		odd  = createNode(0);
		list = createNode(0);
		list = list->next;
		odd = odd->next;

		scanf("%d",&i);
		while(i != -1)
			{
				list = addItem(list,createNode(i));
				scanf("%d",&i);
			}

		printList(list);
		printf("\n");
		printf("\n");
		odd = seperete(list);

		printList(odd);
		printf("\n");
		printList(list);
*/