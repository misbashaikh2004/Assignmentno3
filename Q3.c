#include<stdio.h>
int main()
{
    int x,y;
    int ch;
    printf("Enter 2 no:");
    scanf("%d%d",&x,&y);
    printf("1.Equality\n2.Less than\n3.Quotient and Remainder\n4.Range\n5.Swap");
    scanf("%d",&ch);
    switch(ch){
        case 1: if(x==y)
        printf("x is equal to y");
        else 
        printf("x is not equal");
    break;
    case 2:if(x<y)
    printf("x is less than y");
    else
    printf("x is not less than y");
break;
case 3:if(y != 0)
printf("quotient=%d,remainder=%d",x/y,x%y);
else
printf("division by zero not allowe");
break;
case 4:if()
    }
}