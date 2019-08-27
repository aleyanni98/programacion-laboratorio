#include <stdio.h>
#include <limits.h>
void main()
{
int legajo;
char sexo;
float salario;
char nombre[31];

printf("legajo:");
scanf("%d", &legajo);
printf("\nnombre:");
setbuf(stdin,NULL);
scanf("%s", nombre);
printf("\nsexo:");
setbuf(stdin,NULL);
scanf("%c", &sexo);
printf("\nsalario:");
scanf("%f", &salario);
system("cl");
printf("legajo\tnombre\tsexo\tsalario");
printf("%d\t%s\t%c\t%f",legajo,nombre,sexo,salario);

return 0;
}
