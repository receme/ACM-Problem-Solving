#include<stdio.h>
#include<algorithm>
using namespace std;

int i,flag,n,a[10000];

int main(){

while(scanf("%d",&n)==1){
if(n==0) break;
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 sort(a,a+n);
 
 if(((1422-a[n-1])*2)>200){
  printf("IMPOSSIBLE\n");
  continue; } 
  flag=0;
for(i=0;i<n-1;i++)
  if(((a[i+1]-a[i])>200)){
   flag=1;
   break; }


 if(flag==1)
  printf("IMPOSSIBLE\n");
else
 printf("POSSIBLE\n");
}
return 0;
}
