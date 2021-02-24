#include<stdio.h>
#include<stdlib.h>;

int main()
{
int mes;
printf("introduzca el numero del mes:");
mes = getchar();
switch (mes)
{
case '1':
puts("Su mes es el Enero");
break;

case '2':
puts("su mes es el febrero");
break;
case '3':
puts("su mes es el marzo");
break;
case '4':
puts("su mes es el Abril ");
break;
case '5':
puts("su mes es el Mayo");
break;
case '6':
puts("su mes es el Junio");
break;
case '7':
puts("su mes es el julio");
break;
case '8':
puts("su mes es el Agosto");
break;
case '9':
puts("su mes es el Septiembre");
break;
case '10':
puts("su mes es el Octubre");
break;
case '11':
puts("su mes es el Noviembre");
break;
case '12':

puts("su mes es el Diciembre ");
break;
default:
puts("ERROR");
}
return 0;
}
