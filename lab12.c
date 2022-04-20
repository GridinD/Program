#include <math.h> 
#include <stdio.h> 
#include <stdlib.h> 
using namespace std;
struct Cone { 
double r; 
double h; 
}; 

int main() 
{
setlocale(0, ""); 
const double pi = 3.14; 
int n = 10; 
Cone array[n]; 

for(int i=0; i<n; i++){ 
array[i].r = i+1; 
array[i].h = array[i].r*1.5; 
} 

double v,s; 
for(int i=0; i<n; i++){ 
double r2 = pow(array[i].r, 2); 
v = pi * r2 * array[i].h / 3.0; 
s = (pi * r2) + (pi * array[i].r * sqrt(r2 + pow(array[i].h, 2))); 
printf("Конус:\n"); 
printf("Радиус основания: %lf\n", array[i].r); 
printf("Высота: %lf\n", array[i].h);  
printf("Объем: %lf\n", v); 
printf("Площадь поверхности: %lf\n", s);
}
printf("\n"); 
} 

