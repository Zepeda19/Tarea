#include<iostream>
using namespace std;
void pintarvec(int vec[],int lim);
int numprimo(int vec[],int lim);
void mostrar(int vec[],int lim);

int main()
{
	int vec[1000];
	
	pintarvec(vec,1000);
	numprimo(vec,1000);
	mostrar(vec,1000);
	return 0;
}

void pintarvec(int vec[],int lim)
{
	for(int i=1;i<lim;i++)	
	{
		vec[i]=1;
	}
}

int numprimo(int vec[],int lim)
{
	int a=0;
	int i;
	int mul;
	for(i=2;i<lim;i++)
	{
		for(int div=2;div<lim/i;div++)
		{
				vec[div*i]=0;
		}
	}
	for(mul=3;mul<lim;mul++)
	{
		if(mul%3==0)
		{
			vec[mul]=0;
		}
	
	}
}

void mostrar(int vec[],int lim)
{
	for(int i=1;i<lim;i++)
	{
		if(vec[i]==1)
		{
			cout<<i<<endl;
		}
	}
		
}
