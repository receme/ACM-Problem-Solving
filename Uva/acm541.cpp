
#include<stdio.h>


int main(){

  int a[100][100],i,j,n,m,x,y,c,d,sum;

  while(scanf("%d",&n)==1){
  if(n==0)break;
  for(i=1;i<=n;i++)
   for(j=1;j<=n;j++){
    scanf("%d",&m);
    a[i][j]=m; }

  c=0;

  for(i=1;i<=n;i++){
   sum=0;
   for(j=1;j<=n;j++)
     sum=sum+a[i][j];
     if(sum%2!=0){
       x=i;
       c++;  }}

  if(c>1){
   printf("Corrupt\n");
   continue; }

  d=0;

  for(j=1;j<=n;j++){
   sum=0;
   for(i=1;i<=n;i++)
     sum=sum+a[i][j];
     if(sum%2!=0){
       y=j;
       d++;  }}

  if(c==0&&d==0)
   {printf("OK\n");
    continue; }
  if(d>1){
   printf("Corrupt\n");
   continue; }

if(a[x][y]==1)
 a[x][y]=0;
else
 a[x][y]=1;


 c=0;
  for(i=1;i<=n;i++){
   sum=0;
   for(j=1;j<=n;j++)
     sum=sum+a[i][j];
     if(sum%2!=0)
       c=1;  }

  d=0;
  for(j=1;j<=n;j++){
   sum=0;
   for(i=1;i<=n;i++)
     sum=sum+a[i][j];
     if(sum%2!=0)
       d=1; }

  if(c==0&&d==0)
    printf("Change bit (%d,%d)\n",x,y);
  else
   printf("Corrupt\n");

  }
 return 0;
   }


