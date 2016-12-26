#include <stdio.h>
#include <stdlib.h>

long long int factorial(long long int n)
{
  if(n == 1)
    return 1;
  else
    return factorial(n - 1) * n;
}

int main(int argc, char * argv[])
{

  long long int n;

  if(argc == 2){
    n = atoi(argv[1]);
    printf("Factorial of %lld=%lld\n", n, factorial(n));
  }
  else
    printf("Please type factorial argument\n");
  return 0;
}
