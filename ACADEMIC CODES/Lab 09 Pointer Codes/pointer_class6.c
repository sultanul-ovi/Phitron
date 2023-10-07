#include <stdio.h>
#include <stdlib.h>

int main()
{
    // This pointer will hold the
    // base address of the block created
    int *ptr;
    int n, i;

    printf("Enter number of elements:");
    scanf("%d", &n);
    printf("Entered number of elements: %d\n", n);

    // Dynamically allocate memory using malloc()
    ptr = (int *)malloc(n * sizeof(int));

    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
    {

        printf("Memory successfully allocated using malloc.\n");
        for (i = 0; i < n; ++i)
            ptr[i] = i + 1;

        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i)
            printf("%d ", ptr[i]);
            printf("%d ", &ptr[i]); //garbase value

    }

    return 0;
}