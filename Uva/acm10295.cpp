#include<iostream>
#include<map>
using namespace std;
long i,j,k,m,n,p,l,sum;
map<string,long>mp;
char a[1000];
int main(){
   scanf("%ld %ld",&m,&n);
   for(i=0;i<m;i++){
    scanf("%s %ld",a,&p);
    mp[a]=p;
   }
  for(i=0;i<n;i++){
    sum=0;
    while(1){
     scanf("%s",a);
     if(a[0]=='.') break;
    
     if(mp[a]!=0)
     sum=sum+mp[a] ; 
   }
   printf("%ld\n",sum);
}

return 0;
}
                                          

