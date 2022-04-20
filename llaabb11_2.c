#include <stdlib.h>
#include <time.h> 
#include <stdio.h> 

//функция заполнения массива
void completion(int *arr, int n){ 
    int i; 
    for(int i=0; i<n; i++){ 
        arr[i] = rand()%100-30; 
    }
} 

//функция вывода массива 
void conclusion(int *arr, int n){ 
    int i; 
    for(i=0; i<n; i++){ 
        printf("%d  ", arr[i]);
    }

    printf("\n"); 

}

//проверка условия 
int checkcond(int *arr, int n){ 
    int min=111; 
    if (n >= 0){
        if (arr[n]>=0 && arr[n]<min){
            min=arr[n]; 
            n--;
        }
    } 

    else { 
        return 0; 
    }

    return checkcond(arr, n-1);
}


int main(){ 
    srand(time(NULL)); 
    int n; 
    printf("Enter n: "); 
    scanf("%d", &n); 
    printf("\n"); 

    int *arr = malloc(n*sizeof(int)); 

    completion(arr,n); 
    conclusion(arr,n); 

    int mmin = checkcond(arr, n-1); 

    printf("Minimum = %d ", mmin); 
    free(arr);

}