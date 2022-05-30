#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// добавить можно кириллицу, да хоть немецкий.
#define CODE_ATBASH "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define DECODE_ATBASH "ZYXWVUTSRQPONMLKJIHGFEDCBA"

// функция кодирования
char *code_atbash(FILE *file, FILE *file2, char *src, char *s1)
{
    file = fopen("code.txt", "r");
    file2 = fopen("decode.txt", "w");
    char *dst = src;
    const char *cch, *dch;
    char c;


    printf("Исходная строка:\n");
    while (!feof(file))
    {
        fscanf(file, "%s", src);
        printf("%s", src);
    }
    printf("\n");
    rewind(file);
    rewind(file2);
    c = getc(file);
    while (*src && !feof(file))
    {
        if (isalpha(*src))
        {
            for (dch = DECODE_ATBASH, cch = CODE_ATBASH; *cch; *cch++, *dch++)
            {
                if (*cch == toupper(*src))
                {
                    *src = (isupper(*src)) ? *dch : tolower(*dch);
                    fprintf(file2, "%s", dst);
                    break;
                }
            }
        }
        *src++;
    }
    return dst;

    printf("\n"); // after shifr
    fclose(file);
    fclose(file2);

    file2 = fopen("decode.txt", "r");
    printf("Строка после шифровки:\n");
    while (!feof(file2))
    {
        fscanf(file2, "%s", s1);
        printf("%s", s1);
    }
    printf("\n");
    fclose(file2);
    // free(src);
    // free(s1);
}

//функция декодирования
char *decode_atbash(FILE *file2, FILE *file3, char *src, char *s3)
{
    file2 = fopen("decode.txt", "r");
    file3 = fopen("output2.txt", "w");
    char *dst = src;
    const char *cch, *dch;
    char c;
    rewind(file2);
    c = getc(file2);
    while (*src && (!feof(file2)))
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
    printf("\n");
    fclose(file2);
    fclose(file3);
    rewind(file3);

    file3 = fopen("output2.txt", "r");
    printf("Строка после дешифровки: \n");
    while (!feof(file3))
    {
        fscanf(file3, "%s", s3);
        printf("%s ", s3);
    }
    printf("\n");
    fclose(file3);
    // free(s3);
}

int main()
{
    FILE *file, *file2, *file3;
    char *src;
    char *s1;
    char *s3;
    src = (char *)malloc(sizeof(char *));
    s1 = (char *)malloc(sizeof(char *));
    s3 = (char *)malloc(sizeof(char *));
    code_atbash(file, file2, src, s1);
    decode_atbash(file2, file3, src, s3);
    free(src);
    free(s1);
    free(s3);
}