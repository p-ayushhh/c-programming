#include<stdio.h>
#include<math.h>
int main()
{
    int a = 3 > 4;
    int b = 4 > 3;
    int c = 4 > 4;
    int d = 4 >= 4;
    int e = 3 < 4;
    int f = 4 < 3;
    int g = 3 < 3;
    int h = 3 <= 3;
    int i = 4 != 3;
    int j = 4 == 3;
    printf("%d %d %d %d %d %d %d %d %d %d \n",a,b,c,d,e,f,g,h,i,j);
}