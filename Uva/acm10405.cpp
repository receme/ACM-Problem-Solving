#include<stdio.h>
#include<string.h>

char x[2000],y[2000];
int i,j,m,n,c[1000][1000],b[1000][1000];

int lcslength(){
m=strlen(x);
n=strlen(y);

for(i=1;i<=m;i++)c[i][0]=0;
for(j=0;j<=n;j++) c[0][j]=0;

for(i=1;i<=m;i++)
 for(j=1;j<=n;j++){
	if(x[i-1]==y[j-1]){
	 c[i][j]=c[i-1][j-1]+1;
	 b[i][j]=1; }
	else if(c[i-1][j]>=c[i][j-1]){
	c[i][j]=c[i-1][j];
	b[i][j]=2;
	}
	else{
	 c[i][j]=c[i][j-1];
	 b[i][j]=3;
	 }
	 }
	 return c[m][n];
	 }

	 int main(){

	 while(1){
	 gets(x);
	 if(feof(stdin))break;
	 gets(y);

	 printf("%d\n",lcslength());
	 }
	 return 0;
	 }
