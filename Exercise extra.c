#include <stdio.h>

int h;
int w;
char line[10];

int main (){

  printf("Insert the height of the figure\n");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &h);

  printf("Insert the width of the figure\n");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &w);

    if (w==h){
      printf("This is a square\n");
    }

    else if (w!=h){
      printf("This is not a square\n");
    }

    }