
#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
    int i,j,m,a[10000];
    char ch;
    
    scanf("%d",&m);
    
    for(i=0;i<m;i++){
   j=0;
      while(scanf("%d%c",&a[j],&ch)){
         j++;
         if(ch=='\n')
          break; }
        
     sort(a,a+j);
     printf("Case %d: %d\n",i+1,a[j-1]);
     
}

return 0;
}       
         
