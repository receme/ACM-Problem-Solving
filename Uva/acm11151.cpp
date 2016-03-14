#include<stdio.h>
#include<string.h>
char x[1000],y[1000];
long k,cas,i,j,d,l,m,n,c[1000][1000];
long lcslength(){
m=strlen(x);
n=strlen(y);

for(i=0;i<=m;i++)c[i][0]=0;
for(j=0;j<=n;j++) c[0][j]=0;

for(i=1;i<=m;i++)
 for(j=1;j<=n;j++){
	if(x[i-1]==y[j-1]){
	 c[i][j]=c[i-1][j-1]+1;
	 }
	else if(c[i-1][j]>=c[i][j-1]){
	c[i][j]=c[i-1][j];
	}
	else{
	 c[i][j]=c[i][j-1];
	 }
	 }
	 return c[m][n];
	 }

int main(){

scanf("%ld",&cas);
getchar();
for(l=0;l<cas;l++){

gets(x);

if(strcmp(x,"")==0){
 printf("0\n");
 continue;}

n=strlen(x);

memset(y,0,1000);
j=0;
for(i=n-1;i>=0;i--){
  y[j]=x[i];
  j++; }     
printf("%ld\n",lcslength()); 

}       

return 0;
}
