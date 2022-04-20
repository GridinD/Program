#include <time.h>
#include <stdlib.h> 
#include <stdio.h>
#define N 30 

int i; 
int create(int arr[]); 
int min(int *arr, int i, int n); 

int main(void) 
{
int min=0; 
int arr[N];
create(arr); 
printf("\n");  
min(arr);
} 

int create(int arr[]){ 
	int i; 
	srand(time(NULL)); 
	printf("Array: "); 
	for(int i; i<N; i++) 
	{ 
	arr[i] = rand() % 100-40; 
	printf("%4d", arr[i]); 
	}
}
int min(int *arr, int i, int n){ 
	if(i==N) {return 999;} 
	else if (arr[i]<min(arr, i+1, n)
	return min; 
	} 
	else 
		return;
} 




