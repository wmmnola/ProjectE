#include <stdio.h>


int main(){
  int n = 1000;
  int i;
  int sumfac = 0;
  for(i = 0; i < n; i++){
    sumfac += i%5 == 0 || i%3 == 0 ? i : 0;
  }
  printf("%i\n", sumfac);
  return 0;
}
