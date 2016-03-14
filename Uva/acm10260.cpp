#include<stdio.h>
#include<string.h>
int main(){

char a[25],c[25],ch;
int i,n,j;

while(gets(a)){
n=strlen(a);

j=0;

for(i=0;i<n;i++){

 if(a[i]=='B'||a[i]=='F'||a[i]=='P'||a[i]=='V'){
	 c[j]='1';
	 j++;
	 continue;}

  if(a[i]=='C'||a[i]=='G'||a[i]=='J'||a[i]=='K'||a[i]=='Q'
	 ||a[i]=='S'||a[i]=='X'||a[i]=='Z'){
	c[j]='2';
	 j++;
	continue; }

	if(a[i]=='D'||a[i]=='T'){
	c[j]='3';
	 j++;
	continue; }

	if(a[i]=='L'){
	c[j]='4';
	 j++;
	continue;}

	if(a[i]=='M'||a[i]=='N'){
	c[j]='5';
	 j++;
	continue;}

  if(a[i]=='R'){
  c[j]='6';
  j++;
  continue; }

  if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'
	 ||a[i]=='H'||a[i]=='W'||a[i]=='Y')
	c[j]='0';
	j++;
	continue;
  }

 ch='9';
 for(i=0;i<j;i++){
	if(c[i]=='0'){
	 ch='0';
	 continue;}
	if(c[i]!=ch){
	 printf("%c",c[i]);
	 ch=c[i];}

	}
	printf("\n");

}

return 0;

}



