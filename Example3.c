/*

3. Write a program which returns addition of all even element from singly linear linked list. 

Function Prototype :
int AdditionEven( PNODE Head); 

Input linked list : |11|->|20|->|32|->|41| 
Output : 52

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

int EvenAddition(PNODE Head)
{
	int iSum = 0;
	
	while(Head != NULL)
	{
		if(((Head -> data) % 2) == 0)
		{
			iSum = iSum + (Head -> data);
		}
		
		Head = Head -> next;
	}
	
	return iSum;
}

int main()
{
	PNODE first = NULL;
	int iRet = 0;
	
	InsertFirst(&first,90);
	InsertFirst(&first,11);
	InsertFirst(&first,10);
	InsertFirst(&first,3);
	InsertFirst(&first,66);
	InsertFirst(&first,36);

	
	printf("Elements are linked list are : \n");
	Display(first);
	
	iRet = EvenAddition(first);
	printf("Addition of even numbers are : %d\t",iRet);
	
	return 0;
}