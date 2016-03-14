#include <iostream>
#include <algorithm>
using namespace std;

int main () {
  char a[100];
  int i,j,k,n;
  
  scanf("%d",&n);
  
  for(k=0;k<n;k++){
                    
   scanf("%s",a);
   j=strlen(a);

  sort (a,a+j);

  do {
    for(i=0;i<j;i++)  
    cout << a[i];
    cout<<endl;
    
  } while ( next_permutation (a,a+j) );
  cout<<endl;
  }
  
  return 0;
}
