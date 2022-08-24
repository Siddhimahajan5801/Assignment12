#include <stdio.h>
void printN(int);

int main(){ 
     int n;
     printf("Enter the value of n : ");
     scanf("%d",&n);

     printf("The first %d natural numbers in reverse order is : \n ",n);
     printN(n);

return 0; 
}

void printN(int x){
    if (x>0){
    printf("%d ",x);
    printN(x-1);
    }
}