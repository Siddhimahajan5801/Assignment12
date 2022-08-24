#include <stdio.h>
void printN(int);

int main(){ 
     int n;
     printf("Enter the value of n : ");
     scanf("%d",&n);

     printf("The first %d natural numbers are : \n ",n);
     printN(n);

return 0; 
}

void printN(int x){
    if (x>0){
    printN(x-1);
    printf("%d ",x);
    }
}