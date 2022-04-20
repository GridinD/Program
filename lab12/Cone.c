#include "Cone.h"

int main()
{
    float r, h, n, S = 0.0;
    printf("Ведите количество конусов: \n");
    scanf("%f", &n);
    conus *array;
    array = (conus *)malloc(n * sizeof(conus));
    parametrs(array, n);
    float volume; // = (float *)malloc(sizeof(float)*n);
    for (int i = 0; i < n; i++)
    {
        volume = ConeVolume(n, array[i]);
        S = SurfaceArea(array[i], n);
        PrintCone(array[i], n, volume, S);
    }

    // free(volume);
    free(array);
}