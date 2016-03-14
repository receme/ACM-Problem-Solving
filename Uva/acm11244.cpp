#include<stdio.h>
#include<string.h>

int m,n,i,j,k,flag,count;
char a[1000][1000],ch;

int main(){
    
    while(scanf("%d %d",&m,&n)==2){
      
       if(m==0&&n==0)break;
       
     for(i=0;i<1000;i++)
      for(j=0;j<1000;j++)
       a[i][j]='0';
       
    k=100; 
    for(i=k;i<k+m;i++)
     for(j=k;j<=k+n;j++){
      ch=getchar();
      a[i][j]=ch; }
count=0;


for(i=k;i<k+m;i++)
for(j=k;j<=k+n;j++){

if(a[i][j]=='*'){
flag=0;
if(a[i-1][j]=='*'||a[i-1][j-1]=='*'||a[i][j-1]=='*'||a[i+1][j-1]=='*'||a[i+1][j]=='*'||a[i+1][j+1]=='*'||a[i][j+1]=='*'||a[i-1][j+1]=='*')
 flag=1;
if(flag==0)
  count++; 
    }}
       
    printf("%d\n",count);  
      
}

return 0;
}  
