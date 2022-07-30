#include <stdio.h>

int main()
{
    int a;
    printf("the year you want\n");
    scanf_s("%d",&a);
    if (a % 100 == 0)
        if (a % 400 == 0)
            printf("这是闰年");
        else printf("这不是闰年");
    if (a%100 !=0 &&a % 4 == 0)
        printf("这是闰年");
    else printf("这不是闰年");
}

