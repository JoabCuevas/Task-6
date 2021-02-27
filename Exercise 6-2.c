#include <stdio.h>
#include <math.h>


int C;
char line[10];
int i;

int main (){

for(i=0;i<30;i++){

printf("Enter the calification \n");
fgets(line, sizeof(line), stdin);
sscanf(line, "%d", &C);

if (C<=60){
  printf("Grade F\n");
}

else if (C<=70){
  printf("Grade D\n");
}

else if (C<=80){
  printf("Grade C\n");
}

else if (C<=90){
  printf("Grade B\n");
}

else if (C<=100){
  printf("Grade A\n");
}
}

}