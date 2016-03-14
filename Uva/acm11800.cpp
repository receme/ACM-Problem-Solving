#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
#define PI 3.141592653589793;

int X[5],Y[5];
long double F[5];
long double DHAL(int a, int b)
{
	long double y1=Y[a]-Y[b];
	long double x1=X[a]-X[b];
	//long double m=((long double)(Y[a]-Y[b]))/(long double)(X[a]-X[b]);
	long double m=y1/x1;
return m;
}


bool PARAX(int a, int b)
{
	if(X[a]==X[b])
		return 1;
	else return 0;

}

bool PARAY(int a, int b)
{
	if(Y[a]==Y[b])
		return 1;
	else return 0;

}




long double dis(int a, int b)
{
		
	long double P= sqrt((X[a]-X[b])*(X[a]-X[b])+(Y[a]-Y[b])*(Y[a]-Y[b]));
return P;
}

long double comp(int c, int a, int b)
{
long double C,A,B;
	C=dis(a,b);
	A=dis(c,b);
	B=dis(c,a);
	
//cout<<A<<" "<<B<<" "<<C<<" ";	   
long double angle =acos(((B*B)+(A*A)-(C*C))/2/A/B)*180/PI;   
	//	  cout<<angle<<endl;
//cout<<endl<<endl<<endl;

return angle;

}


//long double angle 





int main()
{
int ks, k;
int state;
long double A,B,C,D,T1,T2,T3,T4,m1,m2;

scanf("%d",&ks);
for(k=0;k<ks;k++)
{ 
   scanf("%d %d %d %d %d %d %d %d",&X[0],&Y[0],&X[1],&Y[1],&X[2],&Y[2],&X[3],&Y[3]);              
	/*cin>>X[0]>>Y[0];
	cin>>X[1]>>Y[1];
	cin>>X[2]>>Y[2];
	cin>>X[3]>>Y[3];*/

F[1]=comp(0,3,2);
F[2]=comp(0,1,3);
F[3]=comp(0,1,2);
//cout<<F[1]<<" "<<F[2]<<" "<<F[3]<<endl;

if(F[1]>= F[2]&& F[1]>=F[3])
{
	swap(X[2],X[1]);
	swap(Y[2],Y[1]);
}

//else if(F[2]>= F[1]&& F[2]>=F[3])
//{

//}

else if(F[3]>= F[2]&& F[3]>=F[1])
{
	swap(X[2],X[3]);
	swap(Y[2],Y[3]);
}

cout<<X[0]<<Y[0]<<X[1]<<Y[1]<<X[2]<<Y[2]<<X[3]<<Y[3]<<endl;



A=dis(0,1);
B=dis(1,2);
C=dis(2,3);
D=dis(3,0);

T1=comp(0,1,3);
T2=comp(1,2,0);
T3=comp(2,1,3);
T4=comp(3,0,2);
cout<<X[0]<<Y[0]<<X[1]<<Y[1]<<X[2]<<Y[2]<<X[3]<<Y[3]<<endl;
printf("Case %d: ",k+1);

if(T1==T2 && T2==T3 && T3==T4)
{
	if(A==B)
		printf("Square\n");
	else printf("Rectangle\n");

}
else if(T1==T3 && T2== T4)
{
	if(A==B)
		printf("Rhombus\n");
	else printf("Parallelogram\n");

}
else 
{
	 state=0;


	if(PARAX(0,3)==1 && PARAX(1,2)==1)

	{
		state=1;	
	}	 
	
	if(PARAX(3,2)==1 && PARAX(0,1)==1)
	{	
		state=1;
	}

	if(PARAY(0,3)==1 && PARAY(1,2)==1)

	{ 
		state=1;	
	}	 
	
	if(PARAY(3,2)==1 && PARAY(0,1)==1)
	{	
		state=1;
	}	   	   
	
	if(state!=1)
	{	
		if(PARAX(0,3)==0 && PARAX(1,2)==0)
 	   	  	{
				m1=DHAL(0,3);
				m2=DHAL(1,2);
				if(m1==m2)
					state=1;
			}
			 
		if(PARAX(3,2)==0 &&  PARAX(0,1)==0)	 
			{
				m1=DHAL(3,2);
				m2=DHAL(0,1);
				if(m1==m2)
					state=1;	
			}
	
	
	
	}	
	
	if(state==1)
		printf("Trapezium\n");
		
	else printf("Ordinary Quadrilateral\n"); 



}



}


return 0;
}

