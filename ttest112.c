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
    static int min=100; 
    if (n>=0){
        if ((*arr<min)&&(*arr>0)){
            min=*arr;
        }
        return checkcond(++arr, --n);

    }
    else { 
        return min;
    }

   
}


int main(){ 
    int mmin;
    srand(time(NULL)); 
    int i = 0;
    int n; 
    printf("Enter n: "); 
    scanf("%d", &n); 
    printf("\n"); 
    int *arr = malloc(n*sizeof(int)); 

    completion(arr,n); 
    conclusion(arr,n); 
    mmin = checkcond(arr,n);


    printf("Minimum = %d ", mmin); 
    printf("\n");
    free(arr);


}