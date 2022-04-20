#include <stdio.h>
#include <stdlib.h>
#include "Sorting.h"
#include "FillingMethod.h"

void ChoiceArray(int *a, int b, int var)
{
    if (var > 3 || var < 1)
    {
        printf("Выберете одно из заданных значений!");
    }
    if (var == 1)
    {
        CreateRandom(a, b);
        PrintArray(a, b);
    }
    if (var == 2)
    {
        CreateKeyboard(a, b);
        PrintArray(a, b);
    }
    if (var == 3)
    {
        CreateFile(a, b);
        PrintArray(a, b);
    }
}

void ChoiceSor(int *a, int b, int sor)
{
    if (sor > 5 || sor < 1)
    {
        printf("Выберете одно из заданных значений!");
    }
    if (sor == 1)
    {
        bubbleSort(a, b);
        PrintArray(a, b);
    }
    if (sor == 2)
    {
        shekerSort(a, b);
        PrintArray(a, b);
    }
    if (sor == 3)
    {
        inclusionSort(a, b);
        PrintArray(a, b);
    }
    if (sor == 4)
    {
        selectionSort(a, b);
        PrintArray(a, b);
    }
    if (sor == 5)
    {
        ShellSort(b, a);
        PrintArray(a, b);
    }
}