// Name - Ayush Singh 
// ERP - 10356 
#include<stdio.h>
int main(){
    // Practical 6 : Q.1. print numbers from a to b using loops.// 
    int a;
    printf("enter number a:");
    scanf("%d",&a);
    int b;
    printf("enter number b:");
    scanf("%d",&b);
    printf("numbers from %d to %d is ",a,b);
    for(int i=a;i<=b;i++){
        printf("%d ",i);
    }
    return 0;

}
/* enter number a:10
enter number b:40
numbers from 10 to 40 is 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 */