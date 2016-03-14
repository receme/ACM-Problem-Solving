#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

  char a[1000],b[1000];
  long i,n,count;


  while(gets(b)){
   n=strlen(b);
   count=0;

  for(i=0;i<n;i++)
   a[i]=tolower(b[i]);

  for(i=0;i<n;i++){
      if(((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122)))
        continue;
      else if((a[i-1]>=65&&a[i-1]<=90)||(a[i-1]>=97&&a[i-1]<=122))
         count++;
  }

  i=n-1;
  if(!((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122)))
   count--;

   printf("%ld\n",count+1);
  }

  return 0;
}
