#include<stdio.h>;
#include<stdlib.h>;

int main()
{
int dia;
printf("Introduzca un dia de la semana: ");
dia = getchar();
switch (dia)
{
case '1':
puts("Su dia de la semana es Domingo ");
break;
case '2':
puts("su dia de la semana es Lunes ");
break;
case '3':
puts("su dia de la semana es Martes ");
break;

case '4':
puts("su dia de la semana es Miercoles ");
break;
case '5':
puts("su dia de la semana es Jueves");
break;
case '6':
puts("su dia de la semana es Viernes");
break;
case '7':
puts("su dia de la semana es Sabado ");
break;
default:
puts("ERROR");
}
return 0;
}
