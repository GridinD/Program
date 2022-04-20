#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>

void ShellSort(int n, int *mass)
{
    int i, j, step;
    int tmp;
    for (step = n / 2; step > 0; step /= 2)
        for (i = step; i < n; i++)
        {
            tmp = mass[i];
            for (j = i; j >= step; j -= step)
            {
                if (tmp < mass[j - step])
                    mass[j] = mass[j - step];
                else
                    break;
            }
            mass[j] = tmp;
        }
} 

int main(){ 
    int a[10]; 
    for (int i = 0; i<10; i++){ 
        a[i] = rand()%40-10; 
        printf("%d ", a[i]);
    }printf("\n");

    ShellSort(10, a); 
    for (int i = 0; i < 10; i++){ 
        printf("%d ", a[i]);
    }printf("\n");
    getchar(); getchar(); 
}