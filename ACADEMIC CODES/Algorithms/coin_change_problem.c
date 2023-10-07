/*
Given a set of coins and a value, we have to find the minimum number of coins which satisfies the value.
*/

/*
A Greedy algorithm is one of the problem-solving methods which takes optimal solution in each step.
The Greedy algorithm attempts to take the best in each step and it doesn't care about the overall result.
Greedy Approach - "Living in the present. Don't overthink about the future".

*/
/*
In this approach, we are not bothering about the overall result.
We just pick the best option in each step and hoping that it might produce the best overall result.
Hence, this method called as the greedy approach.

Minimum Coin Change Problem Algorithm:
1. Get coin array and a value.
2. Make sure that the array is sorted.
3. Take coin[i] as much we can.
4. Increment the count.
5. If solution found,
    break it.
6. Otherwise,
    follow step 3 with the next coin. coin[i+1].
7. Finally, print the count.


*/
#include<stdio.h>
#define max 100

//arr - will have list of needed coins
int ans[max];

int findMinCoins(int coins[], int size,  int value)
{
    int i, count = 0;

    for(i = 0; i < size; i++)
    {
        //take as much from coins[i]
        while(value >= coins[i])
        {
            //after taking the coin, reduce the value.
            value -= coins[i];
            ans[count] = coins[i];
            count++;
        }
        if(value == 0)
            break;

    }

    return count;
}

int main()
{
    int coins[] = {25,20,10,5};
    int value = 105;
    int i;

    //find the size of the coins array
    int size = sizeof(coins)/sizeof(coins[0]);

    int MinCount = findMinCoins(coins,size,value);

    printf("Total Coins Needed = %d\n",MinCount);

    printf("Coins are:\t");
    for(i = 0; i < MinCount; i++)
        printf("%d ", ans[i]);

    return 0;
}