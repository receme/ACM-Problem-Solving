
#include<stdio.h>

int main(){

char ch;
int j=1;

while((scanf("%c",&ch))!=EOF){
  if(ch=='\n')
   printf("\n");
  else{
  if(ch=='"'){
   j=j+1;
  if(j%2==0)
   printf("``");
  else
   printf("''");}
     
  else
   putchar(ch);

  }
    }

   return 0;
   }

