#include<stdio.h>
int main (){
    float km,mile;
    printf("Enter the value of km : ");
    scanf("%f",&km);
    mile=km*1.609344;
    printf("%f\n",mile);
    printf("Enter the distance in  miles : ");
    scanf("%f",&mile);
    km=mile/1.609344;
    printf("%f",km);
    return 0;
}