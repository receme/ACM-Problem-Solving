#include<stdio.h>
#include<string.h>
char a[10000],b[1000][10000],count[1000];
int i,j,k,n,l,cas,pos,flag,m;
int main(){
    scanf("%d",&cas);
    gets(a);
    flag=0;
    m=cas;
    for(l=0;l<=cas;l++){
    if(l!=0)  
     printf("Case #%d:\n",l);
     for(;;){
     gets(a);
          
      if(a[0]==NULL){
        flag=1;
       break;}
    n=strlen(a);
     for(i=0;i<1000;i++)
       count[i]=0;
       j=0;k=0;
      for(i=0;i<n;i++){
      if(a[i]==' '){
       k++;
       j=0;
       continue;}
      b[k][j]=a[i];
      j++;
      count[k]++;  
      }
   if(flag!=0){ 
     pos=0;
    for(i=0;i<=k;i++){
      
      if(count[i]<=pos)
       continue;
      printf("%c",b[i][pos]);
      pos++; }
      printf("\n"); }
     
     flag++;   }   
     if(l!=0&&l!=m)
      printf("\n");
      }
return 0;
}       
                                 
      
      
