
#include <stdio.h>
#include <stdlib.h> 

typedef struct
{
    int number;
    char name[20];    
    int progress[3];
} people;
people t[50]; 

int main() { 
    FILE* f = fopen("Wedomost.dat","wb"); 
    people A;
    int count;
    if (f == NULL){
        return 0;
    }
    
    while(count != 0){
        scanf("%d %s", &A.number, A.name);
        for(int i = 0; i < 3; i++){
            scanf("%d", &A.progress[i]);
        }
        printf("1-Continue filling\n0-End filling\n");
        fwrite(&A, sizeof(people), 1, f);
        scanf("%d", &count);

    }
    fclose(f); 

    float n = 0;
    fopen("Wedomost.dat", "rb");
    fread(&A, sizeof(people), 1, f);
    while(!feof(f)){
        for( int i = 0; i < 3; i++ ){
            n = n + A.progress[i];
        }
        n = n/3;
        if(n < 4){
            printf("%d  %s ", A.number, A.name);
        }
        printf("\n");
        fread(&A, sizeof(people), 1, f);
        n = 0;
    }
    fclose(f); 
}
