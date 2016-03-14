
#include<stdio.h>
#include<string.h>

int main(){
    char a[200],b[200][200];
    long i,j,k,n,m,l,r,big=0;  
        
    for(i=0;i<200;i++)
     for(j=0;j<200;j++)
      b[i][j]=' ';


   k=0;   
    while(gets(a)!='\0'){
           
       n=strlen(a);
    
      if(n>=big)
       big=n;
      j=0;
      for(i=0;i<n;i++){
       b[j][k]=a[i];
       j++;}

       

     

       k++;
       
    }
    
   for(l=0;l<big;l++){
        for(r=k-1;r>=0;r--)
         printf("%c",b[l][r]);
    
        printf("\n"); }
       
  
      


 return 0;
}



