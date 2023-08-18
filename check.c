/* C program to check whether a number is prime or not. */
#include <stdio.h>
int main()
{
  int n, i, flag=0;
  printf("Enter a positive integer: ");
  scanf("%d",&n);
  for(i=2;i<=n/2;++i)
  {
    if(n%i==0)
    {
      flag=1;
      break;
    }
  }
  if (flag==0)
    printf("%d is a prime number.",n);
  else
    printf("%d is not a prime number.",n);
  return 0;
}

//add a method to check whether a number is odd or not.
int main()
{
  int n;
  if(n%2==1)
    printf("%d is an odd number.",n);
  else
    printf("%d is not an odd number.",n);
  return 0;
}
