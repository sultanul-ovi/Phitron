// C program for Naive Pattern Searching algorithm
// https://www.geeksforgeeks.org/naive-algorithm-for-pattern-searching/ 
#include <stdio.h>
#include <string.h>

void search(char *pat, char *txt)
{
    int M = strlen(pat);
    int N = strlen(txt);

    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++)
    {
        int j;

        /* For current index i, check for pattern match */
        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;

        if (j == M) // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
            printf("Pattern found at index %d \n", i);
    }
}

/* Driver program to test above function */
int main()
{
    char txt[] = "AABAACAADAABAAABAA";
    char pat[] = "AABA";
    search(pat, txt);
    return 0;
}


/*
What is the best case? 
The best case occurs when the first character of the pattern is not present in text at all.
txt[] = "AABCCAADDEE";
pat[] = "FAA";
The number of comparisons in best case is O(n). 
What is the worst case ? 
The worst case of Naive Pattern Searching occurs in following scenarios. 
1) When all characters of the text and pattern are same. 
txt[] = "AAAAAAAAAAAAAAAAAA";
pat[] = "AAAAA"
2) Worst case also occurs when only the last character is different.
txt[] = "AAAAAAAAAAAAAAAAAB";
pat[] = "AAAAB";
The number of comparisons in the worst case is O(m*(n-m+1)). Although strings which have repeated characters are not likely to appear in English text, they may well occur in other applications (for example, in binary texts). The KMP matching algorithm improves the worst case to O(n).
*/




