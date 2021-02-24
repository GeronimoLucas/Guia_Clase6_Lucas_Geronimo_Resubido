#include<stdio.h>;
#include<stdlib.h>;

int main()
{
int dia,mes;
char ch;
printf("Introduzca numero del dia de nacimiento");
scantf("%d",&dia);
printf("Introduzca numero del mes de nacimiento ");
scantf("%d",&mes);
switch (mes)
{
case '1':
if(dia<21)
{
puts("Eres de capricornio");
else
{
puts("Eres de Acuario");
break;
}
case'2':

if(dia<19)
puts("Eres de Acuario");
else
{
puts("eres de Piscis")
}
break;
case '3':
if(dia<21){
puts("Eres de Piscis");
}
else{
puts("Eres de Aries");
}
break
case'4':
if(dia<21){
puts("Eres de Aries");
else{
puts("Eres de Tauro");
}
break
case '5':
if(dia<21){
puts("Eres de Tauro");
}
else{
puts("Eres de Geminis");
}
case '6':

if(dia<21){
puts("Eres de Geminis");
}
else{
puts("Eres de Cancer");
}
break
case '7':
if(dia<23){
puts("Eres de Cancer");
}
else{
puts("Eres de Leo");
}
break
case '8':
if(dia<25){
puts("Eres de Leo");
}
else{
puts("Eres de Virgo");
}
break
case'9':
if(dia<23){
puts("Eres de Virgo");
}
else{
puts("Eres de Libra");
}
break

case '10':
if(dia<;24){
puts("Eres de Libra");
}
else{
puts("Eres de Escorpion");
}
break
case '11':
if(dia<23){
puts("Eres de Escorpion");
}
else{
puts("Eres de Sagitario");
}
break
case '12';:
if(dia<22){
puts("Eres de Sagitario");
}
else{
puts("Eres de Capricornio");
}
break
default:
puts("ERROR");
return 0;
}
