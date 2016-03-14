//482

#include<stdio.h>


struct data{
 int a;
 char b[50]; };

struct data s[10000],t; 
int i,j,k,l,n;
char ch;


int main(){
    
scanf("%d",&n);

for(l=0;l<n;l++){
ch=' ';
 j=0;
 while(ch!='\n'){
   scanf("%d%c",&s[j].a,&ch);
   j++; } 
   
 for(i=0;i<j;i++)
  scanf("%s",s[i].b);  
  
 for(i=0;i<j;i++)
  for(k=0;k<j-1;k++)
   if(s[k].a>s[k+1].a){
     t=s[k];
     s[k]=s[k+1];
     s[k+1]=t; }
     
 for(i=0;i<j;i++)
  printf("%s\n",s[i].b);
  
  if(l!=n-1)
   printf("\n");
  
  
}

return 0;
}                      
                      
   
