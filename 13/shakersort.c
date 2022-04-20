#include <stdio.h>

void shekerSort(int *mass, int count)
{
    int left = 0, right = count - 1;
    int flag = 1, per = 0;
    while ((left < right) && flag > 0)
    {

        for (int i = left; i < right; i++)
        {
            per = per + 2;
            if (mass[i] > mass[i + 1])
            {
                int t = mass[i];
                mass[i] = mass[i + 1];
                mass[i + 1] = t;
                flag = flag + 1;
            }
        }
        right--;
        for (int i = right; i > left; i--)
        {
            if (mass[i - 1] > mass[i])
            {
                int t = mass[i];
                mass[i] = mass[i - 1];
                mass[i - 1] = t;
                flag = flag + 1;
            }
        }
        left++;
    }
    printf("Кол-во перемещений и кол-во присваивваний: ");
    printf("%d %d\n", flag - 1, per);
}