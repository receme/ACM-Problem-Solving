#include<stdio.h>

int main(){
int c,r;

while((scanf("%d%d",&r,&c))==2){
c=(c-1)+(r-1)*c;
 printf("%d\n",c);

}

return 0;
}
