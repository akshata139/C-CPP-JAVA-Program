/*

1. Write a program which displays all elements which are perfect from singly linear linked list. 

Function Prototype :
int DisplayPerfect( PNODE Head); 

Input linked list : |11|->|28|->|17|->|41|->|6|->|89| 
Output : 6 28

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

int Count(PNODE Head)
{
	int iCnt = 0;
	
	while(Head != NULL)
	{
		iCnt++;
		Head = Head -> next;
	}
	
	return iCnt;
}

int CheckPerfect(PNODE Head)
{
	int iPerfect = 0,iSize = 0,i = 0;
	
	iSize = Count(Head);
	
	for(i = 0;i <= iSize; i++)
	{
		if(((Head -> data) % ((Head -> data)/2)) == 0)
		{
			iPerfect = Head -> data;
		}
	}
	
	return iPerfect;
	
}

int main()
{
	PNODE first = NULL;
	int iRet = 0;
	
	InsertFirst(&first,90);
	InsertFirst(&first,11);
	InsertFirst(&first,10);
	InsertFirst(&first,3);

	
	printf("Elements are linked list are : \n");
	Display(first);
	
	iRet = CheckPerfect(first);
	printf("Perfect numbers are : %d\n",iRet);
	
	return 0;
}