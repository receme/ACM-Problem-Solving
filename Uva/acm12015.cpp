#include<stdio.h>
#include<string.h>

struct data{
 char name[101];
 int n;
}s[11];

int i,k,l,cas;

int main(){
    
    scanf("%d",&cas);
    

for(l=0;l<cas;l++){
 
 k=0;
 for(i=0;i<10;i++){
 scanf("%s %d",&s[i].name,&s[i].n);
 if(s[i].n>k)
  k=s[i].n; }

 printf("Case #%d:\n",l+1);
 
 for(i=0;i<10;i++)
 
  if(s[i].n==k)
   printf("%s\n",s[i].name);
   
}

return 0;

}
