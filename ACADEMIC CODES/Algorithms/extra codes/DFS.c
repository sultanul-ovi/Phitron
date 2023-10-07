#include<stdio.h>
#define START 5
#define STACK_SIZE 100
#define QUEUE_SIZE 100

int stack[STACK_SIZE], stack_head=0, queue[QUEUE_SIZE], queue_head=0;


void print_stack()
{
    int i;
    printf("\nSTACK: ");
    for(i=0; i<STACK_SIZE; i++)
        if(stack[i] != -1)
            printf("%d ", stack[i]);
}

void print_queue()
{
    int i;
    printf("\nQUEUE: ");
    for(i=0; i<QUEUE_SIZE; i++)
        if(queue[i] != -1)
            printf("%d ", queue[i]);
}

void push(int x)
{
    stack[stack_head++] = x;

}

int pop()
{
    int i = stack[--stack_head];
    stack[stack_head] = -1;
    return i;
}

int is_in_queue(int x)
{
    int i;
    for(i=0; i<queue_head; i++)
        if(x==queue[i]) return 1;
    return 0;
}


int main()
{

    int n, i, j;

    //starting of input taking section
    FILE *fp;
    fp = fopen("input.txt", "r");
    if(!fp)
    {
        printf("Input file not found\n");
        return 0;
    }
    fscanf(fp, "%d", &n);
    int matrix[n][n];

    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            fscanf(fp, "%d", &matrix[i][j]);

    printf("   ");
    for(i=0; i<n; i++) printf("%d  ", i);
    printf("\n");

    for(i=0; i<n; i++)
    {
        printf("%d  ", i);
        for(j=0; j<n; j++)
        {
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //end of taking input


    //initialize stack
    for(i=0; i<STACK_SIZE; i++) stack[i]= -1;
    //initialize queue
    for(i=0; i<QUEUE_SIZE; i++) queue[i]= -1;

    int x = START;
    do
    {
        queue[queue_head++] = x;
        print_queue();

        for(j=0; j<n; j++)
            if(matrix[x][j]) push(j);

        do
        {
            //print_stack();
            x = pop();
        }while(is_in_queue(x)==1 && stack[0] != -1);
        print_stack();

    }while(stack[0] != -1);

    print_queue();

}
