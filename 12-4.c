#include <stdio.h>
void print_odd(int);

int main(){ 
     int n;
     printf("Enter the value of n : ");
     scanf("%d",&n);

     printf("The first %d odd natural numbers in reverse order is : \n ",n);
     print_odd(n);

return 0; 
}

void print_odd(int x){
    if (x>0){
    printf("%d ", 2*x-1);
    print_odd(x-1);
    }
}