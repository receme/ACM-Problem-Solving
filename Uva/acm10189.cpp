#include<stdio.h>
#include<string.h>
//#include<conio.h>

char a[1000][1000],s[1000];
int i,j,k,m,n,cas=1;

int main(){
    
    while(scanf("%d %d",&m,&n)==2){
      
       if(m==0&&n==0)break;
       
     for(i=0;i<1000;i++)
      for(j=0;j<1000;j++)
       a[i][j]='0';
     k=100; 
    
    
    
    for(i=k;i<=k+m;i++){
     gets(s);
     //scanf("%s",s);
     for(j=k;j<=k+n;j++)
      a[i][j]=s[j-k]; }
    
     for(i=0;i<1000;i++){
         for(j=0;j<1000;j++)
          if(a[i][j]!='*')
          a[i][j]='0';}  
         
       
     for(i=k+1;i<=k+m;i++)
       for(j=k;j<=k+n-1;j++){
    //printf("%c \n",a[i][j]); getch();
        if(a[i][j]=='*'){
         if(a[i-1][j]!='*')
          a[i-1][j]++;
         
         if(a[i-1][j-1]!='*')
          a[i-1][j-1]++;
         
         if(a[i][j-1]!='*')
          a[i][j-1]++;
         
         if(a[i+1][j-1]!='*')
          a[i+1][j-1]++;
         
         if(a[i+1][j]!='*')
          a[i+1][j]++;
        
         if(a[i+1][j+1]!='*')
          a[i+1][j+1]++;
         
         if(a[i][j+1]!='*')
          a[i][j+1]++;
         
         if(a[i-1][j+1]!='*')
          a[i-1][j+1]++;
         }
         
}
   
        
        
        
      if(cas!=1)printf("\n");  
      printf("Field #%d:\n",cas);    
        
        for(i=k+1;i<=k+m;i++){
        for(j=k;j<=k+n-1;j++)
      printf("%c",a[i][j]); 
      printf("\n");}
cas++;
}
return 0;
}  
