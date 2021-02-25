#include <stdio.h>
#include <math.h>


int cents;
int quarters =0;
int dimes =0;
int nickels =0;
int pennies =0;
char line[10];

int main (){

printf("Enter the total of cents \n");
fgets(line, sizeof(line), stdin);
sscanf(line, "%d", &cents);

  if (cents > 99){
    printf("It has to be less than $1\n");
    return(1);
  
  } else if(cents < 1){
    printf("It has to be more than $0\n");
    return(1);  
  }

  while (cents>0){

        if (cents >=25){
          ++quarters;
          cents -=25;
        }

        else if(cents >=10){
          ++dimes;
          cents -=10;
        }

        else if (cents >=5){
          ++nickels;
          cents -=5;
        }

        else if(cents >=1){
          ++pennies;
          --cents;
        }

        
}

                printf("%d Quarters %d Dimes %d Nickels %d Pennies \n", quarters, dimes, nickels, pennies);

              return (0);
}


