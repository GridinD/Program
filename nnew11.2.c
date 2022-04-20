#include <stdio.h>
 
int minimal (int min, int i, int a[10])
{
    for (i; i<10; i++)
    {
        if (min>=a[i]) 
        min=a[i];
    }
    return min;
}
 
int main(void) 
{
    int i=0;
    int min=0;
    int a[10];
 
    for(i; i<10; i++)
    {
        printf("Vvedite znachenie elemnte %d massiva a: ", i);
        scanf("%d", &a[i]);
    }
    min=a[i];
    printf ("Minimalnoe znachenie massiva = %d", minimal(min, i, a[i]));
}
