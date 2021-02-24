#include<stdio.h>
#include<stdlib.h>

int main()
{
Int mes;
printf("Introduzca un mes: ");
mes = getchar();
switch (mes)
{
case ´1´:
case ´3´:
case ´5´:
case ´7´:
case ´8´:
case ´10´:
case ´12´:

puts("Su mes tiene 31 dias");
break;
case ´2´
puts("su mes tiene 28 dias");
break;
case '4':
case '6':

case '9':
case '11':
puts("su mes tiene 30 dias");
break;
default:
puts("ERROR");
}
return 0;
}
