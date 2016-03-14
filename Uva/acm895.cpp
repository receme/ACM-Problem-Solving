#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
char ch,a[1001][20],d[100];
int i,j,k,n,m,p,l,c[1000][1000],b[1000][1000],r,w,t;

int LCSlength(char X[],char Y[]) {
m=strlen(X);
n=strlen(Y);
for (i=1;i<=m;i++) c[i][0]=0;
for (j=0;j<=n;j++) c[0][j]=0;
for (i=1;i<=m;i++)
for (j=1;j<=n;j++) {
if (X[i-1]==Y[j-1]) {
c[i][j]=c[i-1][j-1]+1;
b[i][j]=1; /* from north west */
}
else if (c[i-1][j]>=c[i][j-1]) {
c[i][j]=c[i-1][j];
b[i][j]=2; /* from north */
}
else {
c[i][j]=c[i][j-1];
b[i][j]=3; /* from west */
}
}
return c[m][n];
}

//************************


int main(){
r=0;
    while(1){

      scanf("%s",a[r]);
      if(a[r][0]=='#')
       break;
      sort(a[r],a[r]+strlen(a[r])); 
       r++;
    }


 while(1){
     memset(d,0,100);
     j=0;
     scanf("%c",&ch);
     if(ch=='#') break;
      d[j]=ch;
      j++;
 while(1){
      scanf("%c",&ch);
      if(ch==10) break;
      if(ch>=97&&ch<=122){
      d[j]=ch;
      j++;}
   }
  int count=0;
  t=strlen(d);
 sort(d,d+t); 
  for(w=0;w<r;w++){
  p=strlen(a[w]);
  if(p>t) continue;

  l=LCSlength(a[w],d);

  if(l==p) 
   count++;
}

printf("%d\n",count);

}

return 0;
}
    
