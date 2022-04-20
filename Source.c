#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define N 100

int i = 0, j = 0;

int mas(int A[]);

int count(int A[]);


int main() {

	int A[N];

	mas(A);
	
	printf("\n\n");

	count(A);

	printf("j = %d", j);
	
}




int mas(int A[]) {

	int i = 0;
	int j = 0;

	srand(time(NULL));

	printf("The array is: ");
	for (i; i < N; i++) {
		A[i] = rand() % 20 - 10;
		printf("%4d", A[i]);
	}

}



int count(int A[]) {


	if (A[i] <= 2 && A[i] >= -2 && i < N) {

		j += 1;
		i += 1;

		return count(A);
	}

	else if (i == N) {
		return i;
	}

	else
	{
		i += 1;
		return count(A);
	}

}


