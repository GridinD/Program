#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *num, int size)
{
    int flag = 1, per = 0;

    for (int i = 0; i < size - 1; i++)
    {
        flag++;
        for (int j = (size - 1); j > i; j--)
        {
            if (num[j - 1] > num[j])
            {
                int temp = num[j - 1];
                num[j - 1] = num[j];
                num[j] = temp;
                per += 1;
            }
        }
    }
    printf("flag = %d\n", flag + per);
}

void shekerSort(int *mass, int count)
{
    int left = 0, right = count - 1;
    int flag = 1, per = 0;
    while ((left < right) && flag > 0)
    {

        for (int i = left; i < right; i++)
        {
            flag = flag + 1;
            if (mass[i] > mass[i + 1])
            {
                int t = mass[i];
                mass[i] = mass[i + 1];
                mass[i + 1] = t;
                per = per + 2;
            }
        }
        right--;
        for (int i = right; i > left; i--)
        {
            flag = flag + 1;
            if (mass[i - 1] > mass[i])
            {
                int t = mass[i];
                mass[i] = mass[i - 1];
                mass[i - 1] = t;
                per = per + 2;
            }
        }
        left++;
    }
    printf("Кол-во перемещений и кол-во присваивваний: ");
    printf("flag = %d\n", flag + per);
}

void inclusionSort(int *num, int size)
{
    int per = 0, flag = 1;

    for (int i = 0; i <= size; i++)
    {
        int value = num[i];
        int index = i;
        flag++;

        while ((index > 0) && (num[index - 1] > value))
        {
            num[index] = num[index - 1];
            index--;
        }
        num[index] = value;
        per = per + 1;
    }
    printf("flag = %d\n", flag + per);
}

void selectionSort(int *num, int size)
{
    int flag = 1;
    int per = 0;
    int min = 0, temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            flag++;
            if (num[j] < num[min])
            {
                min = j;
            }
        }
        temp = num[i];
        num[i] = num[min];
        num[min] = temp;
        per++;
    }
    printf("flag = %d\n", flag + per);
}

void ShellSort(int n, int *mass)
{
    int flag = 1;
    int per = 0;
    int i, j, step;
    int tmp;
    for (step = n / 2; step > 0; step /= 2)
        for (i = step; i < n; i++)
        {
            tmp = mass[i];
            for (j = i; j >= step; j -= step)
            {
                flag++;
                if (tmp < mass[j - step])
                {
                    mass[j] = mass[j - step];
                    per++;
                }
                else
                    break;
            }
            mass[j] = tmp;
        }
    printf("flag = %d\n", flag + per);
}
