#include <stdio.h> 
#include <stdint.h>
int main() 
{ 
int  a=5; // 
//scanf("%d",&a);
	for (int i=0; i<8; i++)
	{ 
		if (!a&1) 
			{
			//printf("%d\n",a);
			printf("%d\n",i);
			break; 
			} 
//printf("i = %d\n", i);	
		a=a>>1; 
	} 
//printf("\n");
return 0; 
}
//000000.. 00 01011111
// 00100 -> 00010 -> 00001
// 00001 -> 00001 -? 00001

