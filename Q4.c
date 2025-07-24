#include<stdio.h>
int main()
{
    float r,PI;
    int choice;
    printf("Enter radius:");
    scanf("%f",&r);
    printf("\n1:Area of circle\n2:circumference of circle\n3:volume sphere\n");
    printf("Enter your Choice:");
    scanf("%d",&choice);
    switch(choice){
      case 1:printf("area=%.2f",PI * r* r);
        break;
       case 2:printf("circumference=%.2f",2 * PI * r);
       break;
       case 3:printf("volume=%.2f",(4.0/3 )* PI * r *r *r);
       break;
       default:printf("Invalid");
    }
    return 0;
}