#include <stdio.h>


int C;
char line[10];
int i;


char signo(int number){
  int unidades = 0;
  unidades = number % 10;

  if (unidades >=1 && unidades<=3){
    return('-');
  }

  if ((unidades>=8 && unidades<=9) || unidades == 0){
    return('+');
  }
  return(' ');
}


int main (){

for(i=0;i<30;i++){

printf("Enter the calification \n");
fgets(line, sizeof(line), stdin);
sscanf(line, "%d", &C);
//printf("%c", line[1]);



if (C<=60){
  printf("Grade F\n");
}

else if (C<=70){
  printf("Grade D%c\n", signo(C));
}

else if (C<=80){
  printf("Grade C%c\n", signo(C));
}

else if (C<=90){
  printf("Grade B%c \n", signo(C));
}

else if (C<=100){
  printf("Grade A%c\n", signo(C));
}
}



}