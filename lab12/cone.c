#include "Cone.h"

void parametrs(conus *array, float n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Cone#%d\n", i);
        printf("Введите радиус конуса: \n");
        scanf("%f", &array[i].r);
        printf("Введите высоту конуса: \n");
        scanf("%f", &array[i].h);
        printf("r %f h %f\n", array[i].r, array[i].h);
    }
}

float ConeVolume(float n, conus array)
{
    // float volume = 0.0;
    // for (float i = 0.0; i < n; i++)
    // {
    float volume = (3.14 * pow(array.r, 2.0) * array.h) / 3.0;
    return volume;
    // }
}

float SurfaceArea(conus array, float n)
{
    float S = 0.0;
    for (float i = 0; i < n; i++)
    {
        float l = sqrt(pow(array.h, 2.0) + pow(array.r, 2.0));
        float S = 3.14 * array.r * (l + array.r);
        return S;
    }
}

float PrintCone(conus array, float n, float volume, float S)
{

    printf("Объем: %f\n", volume);
    printf("Пл.пов: %f\n", S);
}