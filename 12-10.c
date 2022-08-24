#include <stdio.h>
void reverse(int);

int main(){ 
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    reverse(num);
    
return 0; 
}

void reverse(int n){
    if (n<10){
        printf("%d",n);
    }
    else {
        printf("%d",n%10);
        reverse(n/10);
    }
}