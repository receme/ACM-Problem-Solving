#include<stdio.h>

int main(){
   long i,j,n,m,l,p;
   long a[3000],c[3000],b[3000];

   while(scanf("%ld",&n)!=EOF){
    if(n<1||n>3000)continue;

    m=0;
   for(i=0;i<n;i++)
    scanf("%ld",&a[i]);

   j=0;
   p=0;
   for(i=0;i<n-1;i++){
   c[j]=a[i]-a[i+1];
   if(c[j]<0)c[j]=-c[j];
   if(c[j]>n-1){m=1;break;}
   for(l=0;l<p;l++)
    if(c[j]==b[l]){
    m=1;
    break; }
   b[p]=c[j];
   p++;
   j++; }
if(m==1){printf("Not jolly\n");continue;}
   m=0;
   for(i=1;i<=n-1;i++)
    m=m+i;

   l=0;
   for(i=0;i<j;i++)
    l=l+c[i];

  if(m==l)printf("Jolly\n");
  else
   printf("Not jolly\n");

}

return 0;

}


