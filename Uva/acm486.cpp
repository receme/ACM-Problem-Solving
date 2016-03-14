#include <iostream.h>
#include<string.h>

char arr[32][10] = {"negative", "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen",
"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety", "hundred",
"thousand", "million"};
int ke[32] = {-1, 0, 1,2, 3,4, 5, 6, 7, 8, 9, 10,11, 12, 13, 14, 15, 16, 17, 18, 19,
20, 30, 40, 50, 60, 70, 80, 90, 100, 1000, 1000000};

char cadena[100000] ={'\0'} , espera[10] = {'\0'};
int largo , resultado = 0 , anterior , million , miles , cientos;


int buscar(char *p)
{
for(int i = 0 ; i < 32; i ++)
if(!strcmp(p,arr[i]))
return i;
return -1;
}

int main()
{


while(gets(cadena)){

largo = strlen(cadena);
int i = 0;
bool negative = false , m = false;

while(largo-- > 0){

char mientras[10] = {'\0'};
int v = 0;

while(cadena[i] != ' ' && largo-- >= 0){

mientras[v++] = cadena[i++];
}
i++;

int posActual = buscar(mientras);

if(posActual == 0)
negative = true;

else if(posActual >= 1 && posActual <= 20){

resultado += ke[posActual];
anterior = ke[posActual];
}
else if(posActual >= 21 && posActual <= 28){

resultado += ke[posActual];
anterior = ke[posActual];
}
else if(posActual >= 29 && posActual <= 31){

if(ke[posActual] < resultado){

resultado -= anterior;
anterior = ke[posActual] * anterior;
resultado += anterior;
anterior = 0;
}
else
resultado = resultado * ke[posActual];
}
if(resultado >= 1000000){

million = resultado;
resultado = 0;
m = true;
}
}
if(negative)
cout << "-";
if(m)
resultado += million;
cout << resultado << endl;
resultado = 0;
negative = false;
m = false;
}
return 0;
} 
