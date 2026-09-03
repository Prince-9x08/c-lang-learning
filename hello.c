// # include<stdio.h>
// int main(){
//     char name[50];
//     printf("enter name :");
//     scanf("%s",name);
//     printf("name is : %s",name);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int a,b;
//     printf("enter the num a:");
//     scanf("%d",&a);

//     printf("enter the num b:");
//     scanf("%d",&b);
    
//     int sum= a+b;
//     printf("the sum of a+b=%d",sum);
//     return 0;
// }

/* ====making a program to find side of square===*/

#include <stdio.h>

int main(){
    float side;
    printf("enter the side of square:");
    scanf("%f",&side);

    printf("area of square = %fcm^2",side * side);
    return 0;

}