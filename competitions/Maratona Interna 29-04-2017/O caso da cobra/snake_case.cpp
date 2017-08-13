#include<stdio.h>

char line[256];
char word[256];

void camelize(){
  printf("class ");
  printf("%c", toupper(word[0]));
  for(int i = 1; word[i]; ++i)
    printf("%c", word[i] == '_' ? toupper(word[++i]) : word[i]);
}

void underscore(){
  for(int i = 0; word[i]; ++i)
    if(word[i] < 97)
      printf("%c%c", '_', tolower(word[i]));
    else
      printf("%c", word[i]);
}

int main(){
  while(gets(line)){
    if(sscanf(line, "%s %s", word, word) == 2)
      camelize();
    else
      underscore();
    printf("\n");
  }
}
