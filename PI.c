#include <stdio.h>
int main()
{
    const float PI = 3.14;
    int r, Area;
    printf("Enter raidus=");
    scanf("%d", &r);
    Area = PI * r * r;
    printf("%d= %d*%d*%d", Area, PI, r, r);
    return 0;
}