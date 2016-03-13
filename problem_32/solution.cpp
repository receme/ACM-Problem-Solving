#include<stdio.h>
#include<string.h>


 int t,i,j,k,m,n,l;
 char temp;
struct data{
  char a[100],b[100]; 
  int count; };
struct data s[2000000],r;

int main(){
   
    scanf("%d",&t);
    
    for(l=0;l<t;l++){
       scanf("%d %d",&m,&n);
       
      for(i=0;i<n;i++)
       scanf("%s",s[i].a);
      
    for(i=0;i<n;i++)
       for(j=0;j<m;j++)
        s[i].b[j]=s[i].a[j];                 
     
     for(i=0;i<100;i++)
      s[i].count=0;
     
     for(i=0;i<n;i++){
       
       for(j=0;j<m;j++)
        for(k=0;k<m-1;k++)
         if(s[i].a[k]>s[i].a[k+1]){
            temp=s[i].a[k];
            s[i].a[k]=s[i].a[k+1];
            s[i].a[k+1]=temp; 
            s[i].count++; } 
            
            }
      
           
  for(i=0;i<n;i++)
    for(j=0;j<n-1;j++)
     if(s[j].count>s[j+1].count){
      r=s[j];
      s[j]=s[j+1];
      s[j+1]=r; }                      
    
    for(i=0;i<n;i++){
     for(j=0;j<m;j++)     
     printf("%c",s[i].b[j]);
     printf("\n"); }
     if(l!=t-1) 
     printf("\n"); 
   
}

return 0;
}           
                      