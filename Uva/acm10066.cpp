#include <stdio.h>
#include <string.h>
#define MAX 1000

int i,j,m,n,c[MAX][MAX],b[MAX][MAX],X[1000],Y[1000],l=1;
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

void printLCS(int i,int j) {
if (i==0 || j==0) return;
if (b[i][j]==1) {
printLCS(i-1,j-1);
printf("%c",X[i-1]);}
else if (b[i][j]==2)
printLCS(i-1,j);
else
printLCS(i,j-1);
}
int main() {
while (scanf("%d %d",&m,&n)==2) {
if(m==0&&n==0)break;
for(i=0;i<m;i++)
 scanf("%d",&X[i]);
for(i=0;i<n;i++)
 scanf("%d",&Y[i]);
printf("Twin Towers #%d\n",l);
printf("Number of Tiles : %d\n\n",LCSlength()); 
l++;
}
return 0;
}
