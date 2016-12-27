#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <gmp.h>

void factorial(int n)
{
  int i;
  mpz_t f;

  mpz_init_set_ui(f,1);
  for(i=1; i<=n; ++i){
    mpz_mul_ui(f,f,i);
  }
  printf("Factorial of %d = ", n);
  mpz_out_str(stdout,10,f);
  printf("\n");
  mpz_clear(f);
}

int main(int argc, char * argv[])
{
  int n;


  if (argc <= 1){
    printf ("Usage: %s <number> \n", argv[0]);
    return 2;
  }

  n = atoi(argv[1]);
  assert( n >= 0);
  factorial(n);


  return 1;
}
