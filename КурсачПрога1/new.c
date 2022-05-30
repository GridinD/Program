#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char* s;
    s = (char*) malloc(sizeof(*s));
    fp = fopen("code.txt", "r");

    while(!feof(fp)){
        fscanf(fp, "%s", s);
        printf("%s ", s);
    }
    printf("\n");
    fclose(fp);
}