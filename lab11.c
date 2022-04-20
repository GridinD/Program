#include <stdint.h>
#include <stdio.h> 
#include <math.h> 
int f; 
int fact(int s)
{ 
int f=1; 
for (int i=1; i<=s; i++)
	{
	f=f*i;
	} 
return f;
}

double a; 
double F(double x, double n)
{ 
a=fact(2*n);
//	if (x>0 && n>0) 
	{ 
	double y = pow((x-1), n)*(pow(x, 2*n)/a);
	printf("y=%f\n", y);
	if(y > pow(10,-3)){ 
	return y+F(x, n+1);
	} 
	else{ 
	return y;
	}
	} 
} 
int main () 
{ 
	double x=1.7;
	double n=0; 
	double y=F(x, n); 
	printf("%f", y);
printf("\n");	

}
