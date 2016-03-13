#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

char a[1000],b[1000],c[1000],d[1000],ch;
int i,j,k,m,n,error,match,r,flag;

int main(){
    
    while(scanf("%d",&r)==1){
      if(r<0) break;
     scanf("%s %s",c,d);
     m=strlen(c);
     n=strlen(d);
     sort(c,c+m);
     
     
     ch=c[0];
     a[0]=ch;
     j=1;
     for(i=1;i<m;i++)
      if(c[i]!=ch){
       a[j]=c[i];
       ch=a[j];
       j++;}
      m=j; 
    j=0;
    for(i=0;i<n;i++){
     ch=d[i];
     flag=0;
     for(k=0;k<j;k++)
      if(ch==b[k]){
      flag=1;
      break;}
     if(flag==0){
      b[j]=ch;
      j++;} 
      }
    n=j ; 
  
      
     
     i=0;j=0;match=0;error=0;
     for(;i<n;i++){
       flag=0;
       for(j=0;j<m;j++)
       if(b[i]==a[j]){
          flag=1;
          break; }
        if(flag==1)
         match++;
        else
         error++;
     
       if(match==m)
        break;
       if(error>7)
        break;
        }
    
     if(match!=m&&error<7){
      printf("Round %d\n",r);
      printf("You chickened out.\n");
        continue;}
     if(match==m&&error<7){
      printf("Round %d\n",r);
      printf("You win.\n");
      continue; }
     
     printf("Round %d\n",r);
     printf("You lose.\n");      
   
}

return 0;
} 