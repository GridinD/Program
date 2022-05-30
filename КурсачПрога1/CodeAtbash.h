#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#ifndef CODEATBASH
#define CODEATBASH
#define CODE_ATBASH "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define DECODE_ATBASH "ZYXWVUTSRQPONMLKJIHGFEDCBA"

char *code_atbash(char *src);
char *decode_atbash(char *src);

#endif