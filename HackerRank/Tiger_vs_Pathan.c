// Written by Ovi, 2023-11-04
// Program to determine the winner of a game between Tiger and Pathan based on rounds won.

#include <stdio.h>
#include <string.h>

int main() {
    int T, N;
    scanf("%d", &T);

    while (T--) {
        scanf("%d\n", &N);
        char rounds[N+1]; // +1 for the null terminator
        fgets(rounds, N+1, stdin);

        int tiger_wins = 0, pathan_wins = 0;

        for (int i = 0; i < N; ++i) {
            if (rounds[i] == 'T') tiger_wins++;
            else if (rounds[i] == 'P') pathan_wins++;
        }

        if (tiger_wins > pathan_wins) printf("Tiger\n");
        else if (pathan_wins > tiger_wins) printf("Pathaan\n");
        else printf("Draw\n");
    }
    
    return 0;
}
