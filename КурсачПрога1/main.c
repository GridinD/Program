#include "CodeAtbash.h"

int main()
{
  FILE *file, *file1, *file2;
  char *s;
  char *s3;
  s = (char *)malloc(sizeof(*s));
  s3 = (char *)malloc(sizeof(*s3));
  file = fopen("input1.txt", "r");
  file1 = fopen("decode.txt", "w");
  printf("Исходная строка: \n");
  while (!feof(file))
  {
    // fscanf(file, "%s", s);
    fgets(s, 100, file);
    printf("%s", s);
  }
  printf("\n");
  code_atbash(s);
  printf("строка после шифрования: ");
  printf("%s", s);
  // printf("Срока после шифрования: %s\n", code_atbash(s));
  printf("\n");
  fprintf(file1, "%s", s);
  fclose(file1);
  printf("\n");
  file2 = fopen("output2.txt", "w");
  file1 = fopen("decode.txt", "r");
  while (!feof(file1))
  {
    fgets(s3, 100, file1);
  }
  // strcpy(s3, s);
  decode_atbash(s3);
  printf("Строка после дешифровки: ");
  printf("%s", s3);
  // strcpy(s3, s);
  fprintf(file2, "%s", s3);
  //printf("%s\n", s3);
  fclose(file);
  fclose(file1);
  fclose(file2);
  if (strcmp(s, s3) == 0)
    printf("Строки идентичны\n");
  else
    printf("Строки отличаются\n");
  free(s);
  free(s3);
}