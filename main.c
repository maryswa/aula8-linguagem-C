#include <stdio.h>
#include <string.h>

int main(void) {
  char string[100] = "Hello World";
  // metodo strlen
  int tamanho = strlen(string);
  printf("O comprimnto da string é: %d\n", tamanho);

  // metodo strcpy
  char strCopy[100];
  strcpy(strCopy, string);
  printf("Copia da string: %s\n", strCopy);

  // metodo strcat
  char str2[100] = "Programando em C";
  strcat(string, str2);
  printf("Concatenação da string: %s\n", string);

  // comparando as strings
  int comparacao = strcmp(string, strCopy);
  if (comparacao == 0) {
    printf("As strings são iguais\n");
  } else {
    printf("As strings são diferentes\n");
  }

  // como manipular arreys
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr);
  printf("O tamanho do array é: %d\n", n);
  return 0;
}