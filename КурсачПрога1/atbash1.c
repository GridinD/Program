#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// добавить можно кириллицу, да хоть немецкий.
#define CODE_ATBASH "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define DECODE_ATBASH "ZYXWVUTSRQPONMLKJIHGFEDCBA"

// функция кодирования
char *code_atbash(char *src)
{
    char *dst = src;
    const char *cch, *dch;

    while (*src)
    {
        if (isalpha(*src))
        {
            for (dch = DECODE_ATBASH, cch = CODE_ATBASH; *cch; *cch++, *dch++)
            {
                if (*cch == toupper(*src))
                {
                    *src = (isupper(*src)) ? *dch : tolower(*dch);
                    break;
                }
            }
        }
        *src++;
    }
    return dst;
}

// функция декодирования
char *decode_atbash(char *src)
{
    char *dst = src;
    const char *cch, *dch;

    while (*src)
    {
        if (isalpha(*src))
        {
            for (dch = DECODE_ATBASH, cch = CODE_ATBASH; *cch; *cch++, *dch++)
            {
                if (*dch == toupper(*src))
                {
                    *src = (isupper(*src)) ? *cch : tolower(*cch);
                    break;
                }
            }
        }
        *src++;
    }
    return dst;
}

int main()
{
    FILE *file, *file1, *file2;
    char* s;
    char* s3;
    s = (char*)malloc(sizeof(*s));
    s3 = (char *)malloc(sizeof(*s3));
    file = fopen("code.txt", "r");
    file1 = fopen("decode.txt", "w");
    printf("Исходная строка: \n");
    while (!feof(file))
    {
        fscanf(file, "%s", s);
        printf("%s", s);
    } 
    printf("\n");
    printf("Срока после шифрования: %s\n", code_atbash(s));
    printf("\n");
    rewind(file1);
    fprintf(file1, "%s", s);
    printf("\n");
    fclose(file);
    fclose(file1);
    file2 = fopen("output2.txt", "w"); 
    file1 = fopen("decode.txt", "r");
    while(!feof(file1)){
        fscanf(file1, "%s", s);
    }
    printf("%s\n", s);
    decode_atbash(s);
    strcpy(s3, s);
    fprintf(file2, "%s", s3);
    fclose(file1);
    fclose(file2);
    printf("%s\n%s\n", s,s3);
    if (strcmp (s, s3) == 0)
      printf("Строки идентичны\n");
    else
      printf("Строки отличаются\n");
    free(s);
    free(s3);
}