#include<stdio.h>
#include<string.h>

int main(){

char b[50];
int i,n,j;
while(gets(b)){



n=strlen(b);


 for(i=0;i<n;i++){
  if(b[i]=='-'){
   printf("-");
   continue;}   

  if(b[i]=='1'||b[i]=='0'){
   putchar(b[i]);
   continue; }

  if(b[i]=='A'||b[i]=='B'||b[i]=='C'){
   printf("2");
   continue; }

  if(b[i]=='D'||b[i]=='E'||b[i]=='F'){
   printf("3");
   continue;}

  if(b[i]=='G'||b[i]=='H'||b[i]=='I'){
   printf("4");
   continue;}
  if(b[i]=='J'||b[i]=='K'||b[i]=='L'){
   printf("5");
   continue; }
  if(b[i]=='M'||b[i]=='N'||b[i]=='O'){
   printf("6");
   continue;  }
  if(b[i]=='P'||b[i]=='Q'||b[i]=='R'||b[i]=='S'){
   printf("7");
   continue; }
  if(b[i]=='T'||b[i]=='U'||b[i]=='V'){
   printf("8");
   continue; }
  if(b[i]=='W'||b[i]=='X'||b[i]=='Y'||b[i]=='Z'){
   printf("9");
   continue; }

 }

  printf("\n");

 }

 return 0;}