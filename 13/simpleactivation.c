#include <stdio.h> 


void inclusionSort(int *num, int size){ 

    for (int i = 1; i < size; i++){ 
        int value = num[i]; 
        int index = i; 

        while ((index > 0) && (num[index - 1] > value)){ 
            num[index] = num[index - 1]; 
            index--;
        }
        num[index] = value;
    }
}

int main(){ 
    int a[10]; 

    for(int i = 0; i < 10; i++){ 
        printf("a[%d] = ", i); 
        scanf("%d", &a[i]); 
    }
    inclusionSort(a, 10); 

    for (int i = 0; i < 10; i++){ 
        printf("%d ", a[i]);
    }
    getchar(); getchar();
}