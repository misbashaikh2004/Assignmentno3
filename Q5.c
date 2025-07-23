#include<stdio.h>
int main()
{
    int days;
    printf("Enter Days no:");
    scanf("%d",&days);
    switch(days)
    {
        case 1:printf("Sunday");
        break;
        case 2:printf("Monday");
        break;
        case 3:printf("Tuesday");
        break;
        case 4:printf("Wednesday");
        break;
        case 5:printf("Thrusday");
        break;
        case 6:printf("Friday");
        break;
        case 7:printf("Saturday");
        break;
        default:("Invalid");
    }
    return 0;
}