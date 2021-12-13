/*

5. Write a program which return smallest element from singly linear linked list. 

Function Prototype :
int Minimum( PNODE Head); 

Input linked list : |110|->|230|->|20|->|240|->|640| 
Output : 20
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
	
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head,int iNo)
{
	PNODE newn = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn -> data = iNo;
	newn -> next = NULL;
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn -> next = *Head;
		*Head = newn;
	}
}

void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("|%d| ->\t",Head -> data);
		Head = (Head) -> next;
	}
	
	printf("NULL\n");
}

int Smallest(PNODE Head)
{
	int iSmall = Head -> data;
	
	while(Head != NULL)
	{
		if((Head -> data) < iSmall)
		{
			iSmall = Head -> data;
		}
		Head = Head -> next;
	}
	
	return iSmall;
}

int main()
{
	PNODE first = NULL;
	int iRet = 0;
	
	InsertFirst(&first,30);
	InsertFirst(&first,40);
	InsertFirst(&first,90);
	InsertFirst(&first,20);
	InsertFirst(&first,10);
	InsertFirst(&first,60);

	
	printf("Elements are linked list are : \n");
	Display(first);
	
	iRet = Smallest(first);
	printf("Smallest number is : %d\t",iRet);
	
	return 0;
}