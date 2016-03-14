#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
    long i,j,k,m,n,a[10],l;
    
    scanf("%ld",&m);
    
    for(l=0;l<m;l++){
     for(i=0;i<3;i++)
      scanf("%ld",&a[i]);
        
     sort(a,a+3);
     
     if(a[0]+a[1]<=a[2]){
       printf("Case %ld: Invalid\n",l+1);
       continue; }
     
     if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[0]){
       printf("Case %ld: Equilateral\n",l+1);
       continue; }
     if(a[0]==a[1]||a[1]==a[2]||a[2]==a[0]){
       printf("Case %ld: Isosceles\n",l+1);
       continue; }
       
     printf("Case %ld: Scalene\n",l+1);  
     
     }
    return 0;
}
