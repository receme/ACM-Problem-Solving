#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<deque>
#include<vector>
#include<map>
using namespace std;
long A[500009],s;

void merge (long p, long q, long r)
{
long len1 = q - p + 1;
long len2 = r - q;

vector <long> left;
vector <long> right;

for ( long i = 0; i < len1; i++ )
left.push_back (A[p + i]);
for ( long i = 0; i < len2; i++ )
right.push_back (A[q + i + 1]);

left.push_back (999999 + 10);
right.push_back (999999 + 10);

size_t x = 0;
size_t y = 0;

for ( long k = p; k <= r; k++ ) {
if ( left [x] <= right [y] ) A[k] = left [x++];
else {
A[k] = right [y++];
s+= len1 - x;
}
}
}

void merge_sort(long p,long r)
{
if (p<r)
{
long q=(floor)((p+r)/2.0);
merge_sort(p,q);
merge_sort(q+1,r);
merge(p,q,r);
}
}



int main(){
long n,i,j;


while(scanf("%ld",&n)){

if(n==0)
break;

for(i=0;i<n;i++)
scanf("%d",&A[i]);



s=0;
merge_sort(0,i-1);


printf("%ld\n",s);
}

return 0;
} 
