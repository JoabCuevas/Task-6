#include <stdio.h>

int a;
char line[100];
int i;

int main (){


printf("Insert year\n");
fgets(line, sizeof(line), stdin);
sscanf(line, "%d", &a);

if ((a%4 == 0 && a% 100 != 0)|| a% 400 == 0){
printf("%d is a leap year\n", a);
}
  else{
    printf("%d is not a leap year\n", a);
  }

}