#include <stdio.h>
#include <stdlib.h>

int getMemory(int **numArray, int N){

	*numArray = calloc(N, sizeof(int) * N);

        if(*numArray == NULL){

                printf("Error allocating memory!\n");
                exit(-1);

        }

	if(N < 2 || N > 500){

		printf("Memory not between [2,500]");
		return 1;

	}

	return 0;
}

void InitArray(int *numArray, int arrayLength){

	int i;
	
	for(i = 0; i < arrayLength; i++){

		numArray[i] = i;

	}

}

void printList(int *numArray, int N){
	
	int i;
	
	for(i = 0; i < N; i++){

		printf("%d ", numArray[i]);

	}

	printf("\n");

}

void shuffleArray(int *numArray, int N){

	int i, j, temp, random;
	
	for(i = N - 1; i > 0; i--){
	
		random = rand() % N;
		j = numArray[random];
		temp = numArray[j];
		numArray[j] = numArray[i];
		numArray[i] = temp;

	}

}

int compare(const void* first, const void* second){

	if(first < second){
				
		return 1;

	}

	else if(first == second){
			
		return 0;
		
	}

	else{

		return -1;
		
	}

}

int main(int argc, char **argv){

	int S, N, i;
	int *numArray;

	if(argc != 3){

		printf("Requires 3 command line arguments");
                return 0;

        }

	S = atoi(argv[1]);
	N = atoi(argv[2]);
  
	srand(S);

	getMemory(&numArray, N);

	if(getMemory(&numArray, N) == 1){
		
		return 0;
	
	}

	printf("This program will print up to N numbers, then print a permutation of those numbers.\n");
	printf("Then, it will use quick sort to sort those numbers in descending order. It will repeat this 10 times.\n\n");

	for(i = 0; i < 10; i++){

		InitArray(numArray, N);

		printList(numArray, N);

		shuffleArray(numArray, N);
	
		printList(numArray, N);

		InitArray(numArray, N);

		qsort(numArray, N, sizeof(int), compare);	

		printList(numArray, N);
	
		printf("\n");			

	}

	free(numArray);

	return 0;

}

