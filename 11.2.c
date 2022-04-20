#include <time.h>
#include <stdlib.h> 
#include <stdio.h>
#define N 30 

int i; 
int create(int arr[]); 
int check(int arr[]); 

int main() 
{
int min=100; 
int arr[N];
create(arr); 
printf("\n"); 
check(arr); 
//printf("%d\n", min);
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

int check(int arr[N]){
	int min=100; 
	for(int i; i<N; i++){  
	if (arr[i]>0 && arr[i]<min) 
	{ 
	min=arr[i]; 
	printf("%d\n", min);  
	} 

	}
}



