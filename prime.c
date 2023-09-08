// to check for prime or not
#include<stdio.h>
#include<math.h>
int main()
{
    int a = 17;
    int flag = 1;
      
      double sqroot = sqrt(a);
for(int i = 2;i<= sqroot; i++)
{
    // if a is divisible by any number between 2 and 
    // sqrt(a),it is not prime
    if (a % i == 0)
    {
        flag = 0;
        break;

    }
}
if (flag)
{
    printf("%d is a prime number",a);

}
else 
{
    printf("%d is not a prime number",a);
}
return 0;
}

