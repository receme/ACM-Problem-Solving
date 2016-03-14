#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main() {
    int h,l,r1,r2,aux1,aux2;
    while (scanf("%d %d %d %d",&h,&l,&r1,&r2) != EOF && h) {
	aux1 = r2-(l-r1);
	aux2 = (h-r2)-r1;
	aux1*=aux1;
	aux2*=aux2;
        if ((r1+r2 <= sqrt(aux1+aux2)) && ((max(r1,r2)*2) <= min(l,h))) {
           printf("S\n");
        } else {
           printf("N\n");
        }
    }
    return 0;
}
