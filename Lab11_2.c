#include <stdlib.h>
#include <stdio.h>
#include <time.h>

//заполнение массива
void zapol(int *A, int n){

    int i;

    for (i = 0; i<n; ++i){

        A[i] = rand() % 50 + 10;

    }

}

//вывод массива
void vivod(int *A, int n){
    int i;

    for (i = 0; i < n; ++i){

        printf("%d  ",A[i]);

    }

    printf("\n");

}

//количество чисел, кратных 7
int kr7(int *A, int n){
    
    int k = 0;

    if (n >= 0){

        if (A[n] % 7 == 0){

            k++;

        }

    }

    else {

        return 0; //рекурсия

    }

    return k + kr7(A,n-1);

}

//главная функция
int main(){

    srand(time(NULL));

    int n;

    printf("n = ");

    scanf("%d",&n);

    printf("\n");

    int *A = malloc (n*sizeof(int));

    zapol(A,n);

    vivod(A,n);

    int kr = kr7(A,n-1);

    printf("k = %d ",kr);

    free(A);

}