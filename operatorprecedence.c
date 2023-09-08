// operator precedence
#include<stdio.h>
#include<math.h>
int main()
{
    //int a = 4 + 9 * 10;
    //int a = 5 * 2 - 2 * 3;
    int a = 5 + 2/ 2 * 3;
    // oprator of same precedence
    // associative rule (for same precedence) left to right
      //int a = 4 * 3/6 *2;
      //int a = 5 * 2/2 * 3;
      //int a = 5 * (2/2)* 3;
   printf("%d \n",a);
    return 0;
}
