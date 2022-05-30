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
    // FILE *f;
    // f = fopen("code.txt", "w");
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
    //fprintf(f, "%s", dst);
    return dst;
    // fclose(f);
}

int main()
{
    // FILE *file;
    int n;
    char *s;
    char str;
    int i = 0, q = 0, l = 0;
    // file = fopen("code.txt", "r");
    // if (file = NULL)
    // {
    //     fprintf(stderr, "The file is not found\n");
    //     exit(1);
    // }
    // fclose(file);
    //scanf("%d", &n);
    s = (char *)malloc(sizeof(*s));
    scanf("%s", s);
    printf("%s", code_atbash(s));
    printf("\n");
    printf("%s", decode_atbash(s));
    printf("\n");
    getchar();
    free(s);

}