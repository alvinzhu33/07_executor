#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void main(){
  char *s;
  char *array[50];
  int i = 0;
  printf("OMG like wutchu want??? ");
  fgets(s,sizeof(s)*4,stdin);
  strtok(s,"\n");
  while(s){
    array[i] = strsep(&s," ");
    //printf("%s ",array[i]); 
    i++;
  }
  
  array[i] = 0;
  execvp(array[0], array);
}
