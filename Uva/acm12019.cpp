#include<stdio.h>
#include<iostream>
#include<map>
using namespace std;


int i,k,l,a[13],cas,x,y;
map<int,string>mp;

int main(){
    
   mp[1]="Saturday";
   mp[2]="Sunday";
   mp[3]="Monday";
   mp[4]="Tuesday";
   mp[5]="Wednesday";
   mp[6]="Thursday";
   mp[7]="Friday";
   
   
  a[1]=1;
  a[2]=4;
  a[3]=4;
  a[4]=7;
  a[5]=2;
  a[6]=5;
  a[7]=7;
  a[8]=3;
  a[9]=6;
  a[10]=1;
  a[11]=4;
  a[12]=6;
  
 scanf("%d",&cas);
 
for(l=0;l<cas;l++){
                  
  scanf("%d %d",&x,&y);
  
 k=a[x];
 i=1; 
 for(;;){
 if(i==y){
  cout<<mp[k]<<endl;
  break; }
  
 k++;
 i++;
 if(k>7)
  k=1;
}

}

return 0;
} 
           
    
