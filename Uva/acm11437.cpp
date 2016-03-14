#include<stdio.h>


long long cas,l;
double x1,y1,x2,y2,x3,y3,m,n,x,y,dx,dy,ex,ey,fx,fy,a1,a2,a3,a4,b1,b2,b3,b4,px,py,qx,qy,rx,ry,area;

int main(){

    scanf("%lld",&cas);

for(l=0;l<cas;l++){

    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);

  dx=(x3+(2*x2))/3; dy=(y3+(2*y2))/3;
  ex=(x1+(2*x3))/3; ey=(y1+(2*y3))/3;
  fx=(x2+(2*x1))/3; fy=(y2+(2*y1))/3;

  a1=x1; b1=y1;
  a2=dx; b2=dy;
  a3=x2; b3=y2;
  a4=ex; b4=ey;

  m=(b2-b1)/(a2-a1);
  n=(b4-b3)/(a4-a3);

  px=(b3-b1-(n*a3)+(m*a1))/(m-n);
  py=m*(px-a1)+b1;

  //*******************

  a1=x2; b1=y2;
  a2=ex; b2=ey;
  a3=x3; b3=y3;
  a4=fx; b4=fy;

  m=(b2-b1)/(a2-a1);
  n=(b4-b3)/(a4-a3);

  qx=(b3-b1-(n*a3)+(m*a1))/(m-n);
  qy=m*(qx-a1)+b1;
  //******************

  a1=x1; b1=y1;
  a2=dx; b2=dy;
  a3=x3; b3=y3;
  a4=fx; b4=fy;

  m=(b2-b1)/(a2-a1);
  n=(b4-b3)/(a4-a3);

  rx=(b3-b1-(n*a3)+(m*a1))/(m-n);
  ry=m*(rx-a1)+b1;

  //*********


  area=(px*(qy-ry))+(qx*(ry-py))+(rx*(py-qy));

  if(area<0)
   area=-area;

  area=area/2.0;
  //area=ceil(area);
  printf("%.0lf\n",area);

}

return 0;
}
