#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main(){
      int a , b,c=1;
      srand(time(0));
      a =rand()%1000+3;
    //   printf("The random no is %d\n",a);
      do
      {
        printf("GUESS THE NUMBER BETWEEN 100-1000\n");
        scanf("%d",&b);
        if(b>a)
        {
            printf("lower number please\n");
        }
        else if(a>b)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("YOU GUESSED THIS NUMBER IN %d ATTEMPT\n",c);
            
        }
        c++;
        
     }while(a!=b);
     return 0;
}