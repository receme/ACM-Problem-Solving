#include<stdio.h>

struct data{
    int pos;
    float a,b;
    float d;
     };
struct data s[1001],k;
int i,j,l,n,cas,p;



int main(){
    scanf("%d",&cas);

for(l=0;l<cas;l++){
  scanf("%d",&n);

  for(i=0;i<n;i++){
   scanf("%f %f",&s[i].a,&s[i].b);
   s[i].d=s[i].b/s[i].a;
   s[i].pos=i+1;
  
  }

 for(i=0;i<n;i++)
  for(j=0;j<n-1;j++)
   if(s[j].d<s[j+1].d){
    k=s[j];
    s[j]=s[j+1];
    s[j+1]=k; }

for(i=0;i<n;i++){
  if(s[i].a!=0)continue;
  
  for(j=i+1;j<n;j++)
   for(p=i+1;p<n-1;p++)
    if(s[p].a>s[p+1].a){
    k=s[j];
    s[j]=s[j+1];
    s[j+1]=k; }
  break;
}                       
                


 for(i=0;i<n;i++){
                  
  printf("%d",s[i].pos);
  if(i!=n-1)
   printf(" ");}
 printf("\n");

 if(l!=cas-1)
   printf("\n");
   
 }

return 0;
}

