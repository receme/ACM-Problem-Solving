#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

struct data{
   char ch;
   int count; };
 
struct data s[70];       
char a[3000];
int i,j,k,m,n,c=0,t,l,f,flag;

int main(){
    
    scanf("%d",&t);
     
    for(l=0;l<t;l++){
      c++;               
     scanf("%s",a);
     n=strlen(a);
     sort(a,a+n);
     
     for(i=0;i<70;i++)
      s[i].count=0;
     
     k=0;
     for(i=48;i<=57;i++){
      for(j=0;j<n;j++)
        if(a[j]==i){
          s[k].ch=i;
          s[k].count++;}
        k++; }          

     for(i=65;i<=90;i++){
      for(j=0;j<n;j++)
        if(a[j]==i){
          s[k].ch=i;
          s[k].count++;}
        k++; } 
       
     for(i=97;i<=122;i++){
      for(j=0;j<n;j++)
        if(a[j]==i){
          s[k].ch=i;
          s[k].count++;}
        k++; }
     
    
       
       f=0;
       printf("Case %d: ",c);
     for(j=0;j<k;j++){
       m=s[j].count;
       flag=0;
         
       if(m==2)
       goto x;
       if(m%2==0||m==1){
         flag=1;
         goto x;}         
       for (int i=3; i*i<=m; i+=2) 
       if (m%i == 0){
         flag=1;
         break; }
       x:
        if(flag==0){
          f=1;          
          printf("%c",s[j].ch);}
          
         }
       if(f==0)
        printf("empty");
        printf("\n");
        
}

return 0;
}    
                      
                       
        
       
                                                  
