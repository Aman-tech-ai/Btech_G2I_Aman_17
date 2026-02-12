#include<stdio.h>
int main (){
    int days,month,year,rdays;
    printf("Enter the number of days : ");
    scanf("%d",&days);
    year = days/365;
    month=(days%365)/30;
    rdays=(days%365)-(month*30);
    printf("%dyear %dmonth %ddays",year,month,rdays);
    return 0;
}