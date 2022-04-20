#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void CreateRandom(int *num, int size)
{
    for (int i = 0; i < size; i++)
    {
        num[i] = rand() % 1000 - 100;
    }
}

void CreateKeyboard(int *num, int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &num[i]);
    }
}

void CreateFile(int *num, int size)
{
    FILE *fin = NULL;
    fin = fopen("number.txt", "r");
    if (!fin)
        printf("Error!\n");
    else
    {
        int i = 0;
        while (i < size)
        {
            fscanf(fin, "%d", &num[i]);
            ++i;
        }
        fclose(fin);
    }
}

void PrintArray(int *num, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", num[i]);
    }
}