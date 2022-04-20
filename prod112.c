#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#define N 50

int i;
int create(int arr[]);
int search(int arr[]); 

int main(){
    int min;
    int arr[N]; 
    create(arr); 
    printf("\n"); 
    search(arr); 
    printf("%d", min); 

}

int create(int arr[]){ 
    int i; 

    srand(time(NULL));
    printf("The array is: "); 
    for(int i; i < N; i++){ 
        arr[i] = rand() % 50-40; 
        printf("%4d", arr[i]); 
    }


}

int search(int arr[]){
    int min=100;
    if (arr[i]>0 && arr[i]<min && i<N){
        min=arr[i];
        i++; 

        return search(arr); 
        printf("%d", min);
    }

	else if (i==N){ 
	return i;
	}
    
    else {
        i++; 
        return search(arr); 

    }
}
