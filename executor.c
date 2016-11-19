#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void main(){
  char s1[256];
  char *s;
  char *array[50];

  printf("OMG like wutchu want??? ");
  fgets(s1,sizeof(s1),stdin);
  strtok(s1,"\n");
  s = s1;

  int i = 0;
  while(s){
    array[i] = strsep(&s," ");
    //printf("%d: %s\n",i, array[i]);
    i++;
  }

  array[i] = 0;
  execvp(array[0], array);
}
