#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int i,cas,l,n;
double a[10001],area,big,s;
int main(){
   scanf("%d",&cas);
 
for(l=0;l<cas;l++){
  scanf("%d",&n);
 
  for(i=0;i<n;i++)
   scanf("%lf",&a[i]);    
  sort(a,a+n);
  big=0;
 for(i=0;i<=n-3;i++){
              
   s=(a[i]+a[i+1]+a[i+2])/2.0;
   area=sqrt(s*(s-a[i])*(s-a[i+1])*(s-a[i+2]));
   if(area>big)
    big=area;
  
}
  printf("%.2lf\n",big);
   
} 
 return 0;
}
