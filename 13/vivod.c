#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void CreateRandom(int *num, int size)
{
    for (int i = 0; i < size; i++)
    {
        num[i] = rand() % 10;
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
        heapSort(a, b);
        PrintArray(a, b);
    }
    if (sor == 3)
    {
        shekerSort(a, b);
        PrintArray(a, b);
    }
    if (sor == 4)
    {
        inclusionSort(a, b);
        PrintArray(a, b);
    }
    if (sor == 5)
    {
        selectionSort(a, b);
        PrintArray(a, b);
    }
}

int main()
{
    int var;
    int b;
    int sor;
    printf("Выберете выриант заполнения массива:\n1-датчик случайных чисел \n2-ввод с клавиатуры \n3-заполнение из файла\n");
    scanf("%d", &var); //выбор заполнения массива
    printf("Введите размер массива:\n");
    scanf("%d", &b); //кол-во эл в массиве
    int a[b];
    srand(time(NULL));
    ChoiceArray(a, b, var);
    printf("\nВыберете сортировку: \n1-Пузырьковая сортировка\n2-Пирамидальная сортировка\n3-Шейкерная сортировка\n4-Сортировка простым включением\n5-Сортировка методом простого выбора\n");
    scanf("%d", &sor); //выбор сортировки
    ChoiceSor(a, b, sor);
}