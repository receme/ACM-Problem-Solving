#include<stdio.h>
#include<string.h>

struct data{
  char name[100];
  int money; };
struct data s[20];

int i,j,k,n,l,r,t,p,f=0;
char a[100];

int main(){
    
    while(scanf("%d",&n)!=EOF){
     for(i=0;i<n;i++)
      s[i].money=0;                        
     for(i=0;i<n;i++){
      scanf("%s",s[i].name);
      }
     
     for(l=0;l<n;l++){ 
     scanf("%s",a);
     for(i=0;i<n;i++)
      if(strcmp(a,s[i].name)==0)
       break;
     
      scanf("%d %d",&t,&p);
      if(p==0)continue;
      if(t!=0)
      s[i].money=s[i].money-t+(t%p);
      else
      s[i].money=s[i].money-t; 
     
     
      for(j=0;j<p;j++){
       scanf("%s",a);
       for(k=0;k<n;k++)
         if(strcmp(a,s[k].name)==0)
          break;
       
       s[k].money=s[k].money+(t/p);
         } 
        }
    if(f!=0)
       printf("\n");
       f=1;
    for(j=0;j<n;j++)
     printf("%s %d\n",s[j].name,s[j].money);
}

return 0;
}