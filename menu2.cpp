#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double e,n,apr2;
	double fact=1;
	double apr;
	int opc;	
	do
	{
		cout<<" \n   Menu    \n";
		cout<<"1---> Aproximacion De e \n";
		cout<<"2---> Aproximacion De e Elevado a la x \n";
		cout<<"0---> Salir \n";
		cout<<"Coloca un el numero de la opcion: ";
		cin>>opc;
		switch(opc)
		{
			case 1:
				cout<<"\n Aproximacion De e \n";
				cout<<"coloca un numero a aprocimar: ";
				cin>>e;
				
				for(n=1;n<=e;n++)
				{
					fact*=n;
					apr+=(e/fact);
				}
				apr2=apr+e;
				cout<<"La Aproximacion es: "<<apr2<<endl;
				
			break;
			
			case 2:
				cout<<"\n Aproximacion De e Elevado a la x \n \n";
				cout<<"coloca un numero a aprocimar: ";
				cin>>e;
				
				for(n=1;n<=e;n++)
				{
					fact*=n;
					apr+=(pow(e,n)/fact);
				}
				apr2=apr+e;
				cout<<"La Aproximacion es: "<<apr2<<endl;
			break;
			
				
		}
		
	
	}
	while(opc !=0);
	return 0;
}	
