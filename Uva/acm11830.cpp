#include<stdio.h>
#include<string.h>

char a[100000000],b[100000000],ch;
unsigned long long i,j,m,n,flag;

int main(){
    
    while(scanf("%d %s",&m,a)){
      if(m==0&a[0]=='0')break;
      
      ch=m+48;                    
      n=strlen(a);              
      j=0;
      for(i=0;i<n;i++){
        
        if(a[i]==ch)
         continue;
         
        b[j]=a[i];
        j++;
        }
       flag=0;
     for(i=0;i<j;i++){
      if(b[i]!='0'){
       flag=1;
       break;} }
          
    if(flag==0){
     printf("0\n");
     continue; }
     
    flag=0;
    for(i=0;i<j;i++)
     if(b[i]!=ch){
      flag=1;
      break; }
    
    if(flag==0){
     printf("0\n");
     continue; }               
     
     flag=0;
    for(i=0;i<j;i++){
      if(flag==0){
      if(b[i]=='0')
       continue;}
       
      printf("%c",b[i]);
      flag=1;                
}

printf("\n");

}


return 0;
} 
    
         
          
                                
