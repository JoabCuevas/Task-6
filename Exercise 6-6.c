#include <stdio.h>

int h;
char line[10];
int s;
int So;



int main (){


printf("Insert the total of hours\n");
fgets(line, sizeof(line), stdin);
sscanf(line,"%d", &h);

s = 80 * h;
So = (1.5*80)*h;

while(h>0){

if (h>=1 && h<=40){
printf("The worker got $%d\n", s);
return(0);
}



else if (h>=41){
printf("The worker got $%d\n", So);
return(0);
}
  }
    }