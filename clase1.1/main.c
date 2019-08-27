#include <stdio.h>
#include <stdlib.h>

int main()
{
int suma (int OP1, int OP2){
int resultado;
resultado=OP1+OP2;
return resultado;
}
int OP1, OP2, res;
  printf("operando1:");
  scanf("%d",&OP1);
  printf("\noperando2:");
  scanf("%d",&OP2);
  res = suma ( OP1 , OP2 );
  printf("la suma es: %d",res);
    return 0;
}
