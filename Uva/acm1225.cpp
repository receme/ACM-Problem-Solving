#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>


long amt1[11],amt2[11],amt3[11];
long i,j,k,l,m,n,cas;
long a[11];
char str[1000000000];

int main(){

for(i=1;i<=10;i++){
 sprintf(str,"%d",i);
 n=strlen(str);
 for(j=0;j<n;j++)
  amt1[str[j]-48]++;
   
}
for(i=0;i<10;i++)
 printf("%d ",amt1[i]);
printf("\n\n");
for(i=1;i<=100;i++){
 sprintf(str,"%d",i);
 n=strlen(str);
 for(j=0;j<n;j++)
  amt2[str[j]-48]++;
   
}


for(i=0;i<10;i++)
 printf("%d ",amt2[i]);
printf("\n\n");
for(i=1;i<=1000;i++){
 sprintf(str,"%d",i);
 n=strlen(str);
 for(j=0;j<n;j++)
  amt3[str[j]-48]++;
   
}
for(i=0;i<10;i++)
 printf("%d ",amt3[i]);
printf("\n\n");
getch();
return 0;
}
