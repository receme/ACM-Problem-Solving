#include<stdio.h>
#include<math.h>
#include<iostream>
#define MAX 50

int i,j,m,n,c[MAX][MAX],b[MAX][MAX],X[50],Y[50];
int LCSlength() {

for (i=1;i<=m;i++) c[i][0]=0;
for (j=0;j<=n;j++) c[0][j]=0;
for (i=1;i<=m;i++)
for (j=1;j<=n;j++) {
if (X[i-1]==Y[j-1]) {
c[i][j]=c[i-1][j-1]+1;
b[i][j]=1; 
}
else if (c[i-1][j]>=c[i][j-1]) {
c[i][j]=c[i-1][j];
b[i][j]=2; 
}
else {
c[i][j]=c[i][j-1];
b[i][j]=3; 
}
}
return c[m][n];
}


int a,t,l,z,s;

int main(){
    
    while(scanf("%d",&m)==1){
      memset(X,0,MAX);
      for(l=0;l<m;l++){                       
       scanf("%d",&s);
       X[s-1]=l+1;
       }
       
      while(scanf("%d",&z)==1){
       memset(Y,0,MAX);
       Y[z-1]=1;
       
       for(l=1;l<m;l++){
        scanf("%d",&s);
        Y[s-1]=l+1; }
     n=m;   
     printf("%d\n",LCSlength());
   
   }
}
return 0;
}   
        
    
