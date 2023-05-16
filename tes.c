#include<stdio.h>

int main()

{

  int i, j, k;

  for (i = 1, j = 1; i < 4, j < 4; i++, j++){

      for (k = 0; k < 3; k++){ 

          if (i == 2) 

              break; 

          printf("%d%d%d ",i, j, k);

      } 

  }

  return 0;

}