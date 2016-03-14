#include<stdio.h>
#include<string.h>
#include<iostream>
//#include<conio.h>
using namespace std;

int i,j,l,m,n,cas,p,f1;
char a[1000],b[1000],c[10];

int main(){
    
    scanf("%d",&cas);
    
for(l=0;l<cas;l++){
 memset(b,0,1000);
 scanf("%s",c);
 if(strlen(c)==2)
  m=(c[0]-48)*10+(c[1]-48);
 else
  m=(c[0]-48);                 
  getchar();

 for(j=0;j<m;j++){
  gets(a);

n=strlen(a);
 memset(b,0,1000);
 p=0;
 
 for(i=0;i<n;i++) {
 if(a[i]==' '&&a[i+1]==' ')
  a[i]=' ';
 /*else if(i==n-1&&a[i]==' ')
  continue;*/
 else {
  b[p]=a[i];
  p++; }
  //putchar(a[i]);  
  }
  
if(j==0)
 printf("Case %d:\n",l+1);

printf("%s\n",b);


}

if(l!=cas-1)
 printf("\n");
}


return 0;
}
 
