#include<stdio.h>

int main(){

 long i,j,n,m,k,a[100];

 while(scanf("%ld",&n)==1){
	 if(n<0)break;
	 //if(n>1000000000)continue;

 if(n==0){printf("0\n");continue; }
 i=0;
 while(n!=0){
  a[i]=n%3;
  n=n/3;
  i++;
  }

  for(j=i-1;j>=0;j--)
	printf("%ld",a[j]);

	printf("\n");
  }
  return 0;

  }