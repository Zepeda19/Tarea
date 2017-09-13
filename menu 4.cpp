#include<iostream>
#include<math.h>
using namespace std;
void menu();
double cos(double a, double b);
double ser(double c,double h);
double sen(double d,double e );
double fac(double f); 
int main()
{
	double valim,valx;
	int opc;	
	do
	{
		menu();
		cin>>opc;
		
		switch(opc)
		{
			case 1:
				cout<<"coloca el limite: ";
				cin>>valim;
				cout<<"Coloca X: ";
				cin>>valx;
				cout<<"el resultado es: "<<cos(valim,valx);
				
			break;
			
			case 2:
				cout<<"coloca el limite: ";
				cin>>valim;
				cout<<"Coloca X: ";
				cin>>valx;
				cout<<"el resultado es: "<<ser(valim,valx);
			break;
		
			case 3:
				cout<<"coloca el limite: ";
				cin>>valim;
				cout<<"Coloca X: ";
				cin>>valx;
				cout<<"el resultado es: "<<sen(valim,valx);
			break;
		}
	
	}while(opc !=0);
	return 0;
}	

void menu()
{
cout<<" \n   Formulas   \n";
		cout<<"1---> Coseno \n";
		cout<<"2---> Serie Infinita \n";
		cout<<"3---> Seno \n";
		cout<<"0---> Salir \n";
		cout<<"Coloca un el numero de la opcion: ";
		
}

double cos(double a,double b)
{
	double res=1;
	int sign=-1;
	double g=2;

	for(int lim=1;lim<=a;lim++)
	{
	res+=(pow(b,g)/fac(g))*sign;
	g+=2;
	sign*=-1;
	}
	return res;
}

double fac(double f)
{
	double fact=1;
	for(int n=1;n<=f;n++)
	{
		fact*=n;
	}
	return fact;
}

double ser(double c,double h)
{
	double res=0;
	int sign=-1;
	double i=1;
	double oper;

	
	for(double lim=1;lim<=c;lim++)
	{
		oper=(h-1)/h;
		res=(pow(oper,i) + 1/lim);
		i+=1;
	}
	return res;
}

double sen(double d,double e )
{
	double res=e;
	int sign=-1;
	double j=3;
	
	for(double lim=1;lim<=d;lim ++)
	{
		res+=(pow(e,j)/fac(j))*sign;
		j+=2;
		sign*=-1;
	}
	return res;
}
