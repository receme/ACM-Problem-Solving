#include<stdio.h>
#include<algorithm>
#include<map>
using namespace std;
int main(){
int i,j,m,n,a[10000],b[10000],c=1;

while(scanf("%d %d",&m,&n)==2){
map<int,int>mp;
 if(m==0&&n==0)break;
  for(i=0;i<m;++i){
  scanf("%d",&a[i]);
    mp[a[i]]=1; }
  
  for(i=0;i<n;++i)
  scanf("%d",&b[i]);
  sort(a,a+m);

  printf("CASE# %d:\n",c);

  j=0;

  for(i=0;i<n;++i){

  if(mp[b[i]]==0){
    printf("%d not found\n",b[i]);
    continue; }
    for(j=0;j<m;++j){
   
   if(b[i]==a[j]){
    printf("%d found at %d\n",b[i],j+1);
    
    break;
    }
    }
  }
  c++;
  }

return 0;
}