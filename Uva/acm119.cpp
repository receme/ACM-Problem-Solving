#include<stdio.h>
#include<map>
#include<iostream>
#include<conio.h>
using namespace std;


int  m,n,i,j,k,sum1,sum2;
char s[20],data[20][20];
map<string,int> mp;


int amountOfGiftGiven(int total, int num){

  int r  = total%m;
  total = total - r;

return total;
}

int main(){

while(scanf("%d",&n)==1){

    for(i=0;i<n;i++){
        scanf("%s",&data[i]);
        mp[data[i]] = 0;
    }

    for(i=0;i<n;i++){
        scanf("%s %d %d",&s,&sum1,&m);
        sum1 = amountOfGiftGiven(sum1,m);
        mp[s] -= sum1;

        for(j=0;j<m;j++){
            scanf("%s",&s);
            mp[s]+= (sum1/m);
        }
    }

 /*for(i=0;i<n;i++){
    printf("%s %d\n",data[i],mp[data[i]]);
 }
 */

}


return 0;
}
