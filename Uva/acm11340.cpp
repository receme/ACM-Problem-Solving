#include<iostream>
#include<string.h>
#include<map>
using namespace std;



long i,j,m,n,cas,sum,l;
int t;
double res;
unsigned char ch;
char a[10010],b[5];

int main(){
    scanf("%ld",&cas);

 for(l=0;l<cas;l++){
  map<char,long>mp;
  scanf("%ld\n",&n);

 for(i=0;i<n;i++){
  scanf("%s %ld",b,&m);
  ch=b[0];
  mp[ch]=m;

 }

scanf("%d\n",&t);

sum=0;
for(j=0;j<t;j++){

 gets(a);

 m=strlen(a);

 for(i=0;i<m;i++)
   sum=sum+mp[a[i]];

  }
res=(double)(sum/100.0);
printf("%.2lf$\n",res);

}

return 0;

}
