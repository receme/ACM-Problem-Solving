
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(){
    int a[8],i,n,t,c=1;

    scanf("%d",&n);

    for(i=0;i<n;i++){

       for(t=0;t<7;t++)
        scanf("%d",&a[t]);


       sort(a+4,a+7);

    printf("%d %d %d",a[4],a[5],a[6]);
         t=(a[5]+a[6])/2;

      t=t+a[0]+a[1]+a[2]+a[3];

     if(t>=90)printf("Case %d: A\n",c);
     if(t>=80&&t<90) printf("Case %d: B\n",c);
     if(t>=70&&t<80) printf("Case %d: C\n",c);
     if(t>=60&&t<70) printf("Case %d: D\n",c);
     if(t<60) printf("Case %d: F\n",c);
c++;
    }

    return 0;
}
