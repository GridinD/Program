#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
int main() 
{ 
srand(time(NULL));
int a; 
int n; 
int m; 
int i; 
int j;
int k;
int ** mat;
 
scanf("%d", &n); 
m=n; 
mat= (int **) malloc(m * sizeof(int*)); 
for (i=0; i<m; i++) 
mat[i] = (int *) malloc(n * sizeof(int));  
for (int i=0; i<m; i++)
{
	for (int j=0; j<n; j++) 
		{

		mat[i][j]=rand()%10; 
		printf("%d ", mat[i][j]); 
		} 
	printf("\n"); 
}
for (int j=0; j<n; j++) 
	{ 
	k=0; 
	for (int i=0; i<m-1; i++) 
		if (mat[i][j]<mat[i+1][j])
		{ 
		k=1;  
	}  
if (k==0) printf("%d\n", j);
}
printf("\n");
for (int i=0; i<n; i++) 
{ 
	for (int j=0; j<m; j++) 
	{ 
	printf("%d ", mat[(n-1)-j][(m-1)-i]); 
	} 
printf("\n");
}
for (int i=0; i<m; i++) free(mat[i]);
free(mat);  
return 0; 
} 

