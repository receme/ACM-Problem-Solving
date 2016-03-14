#include <iostream.h>
#include <stdlib.h>
#include <stdio.h>


double x[4],y[4];
int a,b,c;
int takes[4];
double x1,y1;

void find_doublette()
{
int a,b;

for(a=0;a<3;a++)
for(b=a+1;b<4;b++)
if ((x[a]==x[b])&&(y[a]==y[b]))
{
takes[a]=-1;
takes[b]=0;
return;
}
}

int main()
{

while (cin>>x[0]>>y[0]>>x[1]>>y[1]>>x[2]>>y[2]>>x[3]>>y[3])
{
for (c=0;c<4;c++)
takes[c]=1;
find_doublette();
x1=0;
y1=0;
for(c=0;c<4;c++)
{
x1=x1+(x[c]*takes[c]);
y1=y1+(y[c]*takes[c]);
}
printf("%0.3lf %0.3lf\n",x1,y1);
}
return 0;
}
