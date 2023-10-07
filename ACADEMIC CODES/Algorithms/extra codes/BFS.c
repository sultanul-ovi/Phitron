#include<stdio.h>
#define START 8
#define QUEUE_SIZE 100

int queue[100], queue_insert=0, queue_explore=0;

void print_queue()
{
    int i;
    printf("QUEUE : ");
    for(i=0; i<QUEUE_SIZE; i++)
        if(queue[i] != -1)
            printf("%d ", queue[i]);
}

void enqueue(int x)
{
    queue[queue_insert++] = x;
}

int is_in_queue(int x)
{
    int i;
    for(i=0; i<queue_insert; i++)
        if(x==queue[i]) return 1;
    return 0;
}

int main()
{
   int n, i, j, x;

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

    //initialize queue
    for(i=0; i<QUEUE_SIZE; i++) queue[i]= -1;

    enqueue(x=START);
    print_queue();
    do
    {
        printf("\nExploring: %d\t", x);
        for(j=0; j<n; j++)
            if(!is_in_queue(j) && matrix[x][j]==1) enqueue(j);

        print_queue();

    }while( (x=queue[++queue_explore]) != -1 );

}
