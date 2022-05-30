#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
#define ENG 26

void encrypt (int n, FILE *fp1, FILE *fp2, char* s, char* s1)
{
    fp1 = fopen("input.txt", "r");
    fp2 = fopen("output.txt", "w");
    int flag;
    char c;
    if (fp1 == NULL){
        fprintf(stderr, "The file is not found or empty\n");
        exit(1);
    }
    s = (char*) malloc(sizeof(fp1));
    printf("Исходная строка:\n");
    while(!feof(fp1)){
        fscanf(fp1,"%s", s);
        printf("%s ",s);
    }
    printf("\n");
    rewind(fp1);
    rewind(fp2);
    c = getc(fp1);
    while (!feof(fp1))
    {
        flag = 0; //обработан ли текущий символ
        if (c >= 'A' && c <= 'Z')
        {
            c = c + (n % ENG);
            if (c > 'Z') c = 'A' + (c - 'Z') - 1;
            fprintf (fp2, "%c", c);
            flag = 1;
        }
        if (c >= 'a' && c <= 'z')
        {
            c = c + (n % ENG);
            if (c > 'z') c = 'a' + (c - 'z') - 1;
            fprintf (fp2, "%c", c);
            flag = 1;
        }
        if (!flag) fprintf (fp2, "%c", c);
        c = getc(fp1);
    }
   
    printf("\n"); //после шифровки
    fclose (fp1);
    fclose (fp2);

    fp2 = fopen("output.txt", "r");
    s1 = (char*) malloc(sizeof(fp2));
    printf("Строка после шифровки:\n");
    while(!feof(fp2)){
        fscanf(fp2,"%s", s1);
        printf("%s ",s1);
    }
    printf("\n");
    fclose (fp2);
    free(s);
    free(s1);
    
}

void decipher (int n, FILE *fp2, FILE *fp3, char* s3)  //создать 2 динамических массива s2 s3
{
   
    fp2 = fopen("output.txt", "r");
    fp3 = fopen("deshifr.txt", "w");
    int flag;
    char c;
    //char* s2;
    //char* s3;
    
    // s2 = (char*) malloc(sizeof(fp2));
    //  while(!feof(fp2)){
    //     fscanf(fp2,"%s", s2);
    //     printf("%s ",s2);
    // }
    //printf("\n");
    rewind(fp2);
    c = getc(fp2);
    while (!feof(fp2))
    {
        flag = 0;
        if (c >= 'A' && c <= 'Z')
        {
            c = c - (n % ENG);
            if (c < 'A') c = 'Z' - ('A' - c) + 1;
            fprintf (fp3, "%c", c);
            flag = 1;
        }
        if (c >= 'a' && c <= 'z')
        {
            c = c - (n % ENG);
            if (c < 'a') c = 'z' - ('a' - c) + 1;
            fprintf (fp3, "%c", c);
            flag = 1;
        }
        if (!flag) fprintf (fp3, "%c", c);
        c = getc(fp2);
    }
    printf("\n"); //после дешифровки
    fclose (fp2);
    fclose (fp3);
    rewind(fp3);

    fp3 = fopen("deshifr.txt", "r");
    s3 = (char*) malloc(sizeof(fp3));
    printf("Строка после дешифровки:\n");
    while(!feof(fp3)){
        fscanf(fp3,"%s", s3);
        printf("%s ",s3);
    }
    printf("\n");
    fclose (fp3);
    free(s3);
}




int main(){
    setlocale(LC_ALL,"Russian");
    FILE *fp1, *fp2, *fp3;
    char* s;
    char* s1;
    char* s3;

    int n;
    printf ("Введите натуральное n: ");
    scanf("%d", &n);
    getchar (); //нужен для того, чтобы поймать символ клавиши ENTER, нажатой при вводе числа n
    if (n < 1) return 0;
    encrypt (n,fp1, fp2, s, s1);
    decipher (n,fp2, fp3, s3);


    // free(s);
    // free(s1);
    //free(s3);

}