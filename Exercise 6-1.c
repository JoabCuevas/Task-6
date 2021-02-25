#include <stdio.h>
#include <math.h>

int x;
int y;
int x_1;
int y_1;
char line[10];
int A;

int main(void) {



  
printf("Insert first coordenate in X axis\n");
fgets(line, sizeof(line), stdin);
sscanf(line, "%d", &x);
printf("Insert first coordenate in y axis\n");
fgets(line, sizeof(line), stdin);
sscanf(line, "%d", &y);
printf("The coordenates are in %dx and %dy\n", x, y);
printf("Insert second coordenate in X axis\n");
fgets(line, sizeof(line), stdin);
sscanf(line, "%d", &x_1);
printf("Insert second coordenate in y axis\n");
fgets(line, sizeof(line), stdin);
sscanf(line, "%d", &y_1);
printf("The second coordenates are in %dx and %dy\n", x_1, y_1);

A = (x_1 - x)*(x_1 - x)+(y_1 -y)*(y_1 -y);

printf("The distance between these two points is %f\n", sqrt(A) );


  
  return 0;

}