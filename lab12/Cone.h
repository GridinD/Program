#ifndef CONE
#define CONE
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Conus
{
    float r;
    float h;
} conus;

void parametrs(conus *array, float n);
float ConeVolume(float n, conus array);
float SurfaceArea(conus array, float n);
float PrintCone(conus array, float n, float volume, float S);
#endif
