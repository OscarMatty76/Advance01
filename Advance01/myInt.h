#ifndef myInt

typedef struct myInt
{
	int data;
	struct myInt *next;

}myInt;

myInt* addItem(myInt* head,  myInt* node);
void deleteItem(myInt** head, myInt** node);
void printList(myInt* head);
myInt* createNode(int num);
void freeList(myInt** head);

#endif