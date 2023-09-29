#include <stdio.h>
int main()
{
    const int PI=3.14;
    int radius,area;
    printf("enter the radius\n");
    scanf("%d",&radius);
    area=PI*radius*radius;
    printf("you have enter area as%d\n",area);
    return 0;
}
