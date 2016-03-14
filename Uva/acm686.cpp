#include<stdio.h>

int main(){
int i,j,k,n,count,flag1,flag2,m,l;

while(scanf("%d",&n)==1){
 if(n==0)break;
 if(n%2!=0)continue;
 if(n<4||n>32768)continue;

 count=0;
 m=n/2;
 j=2;
 k=n-2;
 for(i=2;i<=m;i++){
flag1=0;flag2=0;


	for(l=2;l<=j-1;l++){
	if(j%l==0){
	  flag1=1;
	  break;}}
  for(l=2;l<=k-1;l++){
	if(k%l==0){
	 flag2=1;
	 break;}}

  if(flag1==0&&flag2==0)
	count++;
 j++; k--;
 }

 printf("%d\n",count);

 }


 return 0; }


