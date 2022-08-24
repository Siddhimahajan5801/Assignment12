#include <stdio.h>
void print_Nsquare(int);

int main(){ 
     int n;
     printf("Enter the value of n : ");
     scanf("%d",&n);

     printf("The squares of first %d natural numbers are : \n ",n);
     print_Nsquare(n);

return 0; 
}

void print_Nsquare(int x){
    if (x>0){
    print_Nsquare(x-1);
    printf("%d ",x*x);
    }
}