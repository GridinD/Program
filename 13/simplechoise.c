#include <stdio.h>

void selectionSort(int *num, int size){ 
    int min, temp; 
    for(int i = 0; i < size - 1; i++){ 
        min = 1; 
        for (int j = i + 1; j < size; j++){ 
            if (num[j] < num[min]){ 
                min = j;
            }
        }
        temp = num[i]; 
        num[i] = num[min]; 
        num[min] = temp;
    }
} 

int main(){ 
    int a[10]; 

    for(int i = 0; i < 10; i++){ 
        printf("a[%d] = ", i); 
        scanf("%d", &a[i]); 
    }
    selectionSort(a, 10); 

    for(int i = 0; i < 10; i++){
        printf("%d ", a[i]);
    }
    getchar(); getchar();
}