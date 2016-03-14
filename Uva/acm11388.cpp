
#include<iostream>

using namespace std;
long gcd(long a, long b)
{
long r=1;
if(a>b)
{
while ( r!=0)
{
r=a%b;
a=b;
b=r;
}
return a;
}
else if ( b>a)
{
while (r!=0)
{
r=b%a;
b=a;
a=r;
}
return b;
}
else if ( a==b)
return a;
}
long lcm(long a, long b)
{
return a*b/gcd(a,b);
}

int main(){
long i,a,b,t,j,k;
cin>>t;
for(i=0;i<t;i++){
  cin>>a; cin>>b;
 j=gcd(a,b);
 k=lcm(a,b);
 if(j==a&&k==b)
  cout<<j<<" "<<k<<endl;
 else
  cout<<"-1"<<endl;

}
return 0;
}
