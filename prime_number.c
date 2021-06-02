//Prime number checking

#include<stdio.h>

int main(){

    int num;
    printf("Enter any number which you want to check it is prime or not : ");
    scanf("%d", &num);

    for(int i=2;i<num;i++){
        if(num%i==0){
            printf("The number is not prime");
            exit(0);
        }
    }
    printf("The number is prime");
    return 0;
}
