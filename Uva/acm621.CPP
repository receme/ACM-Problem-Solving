#include<stdio.h>
#include<string.h>
int main(){

long i,m,n,str[100];
char ch,s[10000][100];

scanf("%ld",&n);

for(i=0;i<n;i++){

 scanf("%s",s[i]);

 str[i]=strlen(s[i]);
 m=str[i];
 if(m<=2){
 if(s[i][0]=='3'&&s[i][1]=='5'){
  printf("-\n");
  ch='-';
  continue;}
 if(s[i][0]=='1'||s[i][0]=='4'||s[i][0]=='7'&&s[i][1]=='8'){
  printf("+\n");
  ch='+';
  continue;
   }


    }
else{
 if(s[i][0]=='9'&&s[i][m-1]=='4'){
  printf("*\n");
  ch='*';
  continue;}

  if(s[i][m-2]=='3'&&s[i][m-1]=='5'){
  printf("-\n");
  ch='-';
  continue;   }

  if(s[i][0]=='1'&&s[i][1]=='9'&&s[i][2]=='0'){
  printf("?\n");
  ch='?';
  continue;}




}    }

return 0;}
