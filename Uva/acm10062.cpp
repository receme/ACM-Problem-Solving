#include<stdio.h>
#include<string.h>

int i,j,k,n,m,x,y,big,less,flag,l;
char a[1200];
struct data{
   int count;
   char ch; };
struct data c[1200],t,temp[1200];
int main(){
    l=0;
   while(gets(a)){
    if(l>0){
    printf("\n");
    }
    l++;
    m=strlen(a);
    for(i=0;i<1200;i++)
      c[i].count=0;
    k=0;
    for(j=32;j<127;j++){
       flag=0;
       for(i=0;i<m;i++){
           if(a[i]==j) {
            c[k].ch=j;
            c[k].count++;
           flag=1;
            }}
       if(flag==1)
       k++;
       }
    for(i=0;i<k;i++)
     for(j=0;j<k-1;j++)
      if(c[j].count>c[j+1].count){
          t=c[j];
          c[j]=c[j+1];
          c[j+1]=t; }

   big=c[k-1].count;
   less=c[0].count;
for(i=less;i<=big;i++){
  m=0;
  for(j=0;j<k;j++){
   if(c[j].count==i){
     temp[m]=c[j];
     m++;}
    }
     for(x=0;x<m;x++)
     for(y=0;y<m-1;y++)
      if(temp[y].ch<temp[y+1].ch){
        t=temp[y];
        temp[y]=temp[y+1];
        temp[y+1]=t; }
    for(x=0;x<m;x++)
      printf("%d %d\n",temp[x].ch,temp[x].count);
  }
     }
   return 0;
    }
