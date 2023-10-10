#include <iostream>
using namespace std;

int front = -1, rear = -1;
int queue[100];

void insert(int a)
{
	int item = a;
	
	if(rear == 100-1)
	{
		printf("\nOverflow");
	}
	else if(front == -1 && rear == -1)
	{
		front = 0;
		rear = 0;
	}
	else 
	{
		
		rear = rear+1;
	}
	queue[rear] = item;
	printf("\n %d",queue[rear]);

	
}
void deletes()
{
	int item; 
	if (front == -1 || front > rear)
	{
		printf("\nUnderflow");
		return;
	}
	else
	{
		item = queue[front];
		printf("\n %d",queue[front]);
		if(front == rear)
		{
			front = -1;
			rear = -1 ;
		}
		else 
		{
			
			front = front + 1;
		}
	
	}
	
	
}
	
void display()
{
	int i;
	if(rear == -1)
	{
		printf("\nEmpty queue");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("\n%d",queue[i]);
		}	
	}
}





int main ()  
{   
    printf("\nInitial queue: "); 
    display();

	printf("\nQueue After Pushing few elements: "); 
    insert(1);
    insert(2);
    insert(3);

    printf("\nPopped Elements are: "); 
    deletes();
    deletes();
    deletes();

    printf("\nQueue After Popping few elements: ");
    display();

} 