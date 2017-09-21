#include<iostream>
#include<stdlib.h>
using namespace std;
void menu();
int dado();
void histograma(int tam);

int main()
{
	int cara[6]={0};
	int cara2[12]={0};
	int suma=0;
	int opc;	
	do
	{
		menu();
		cin>>opc;
		switch(opc)
		{
			case 1:
			for(int i=1;i<=100;i++)
			{
				int numero=dado();
				cara[numero-1]++;
			}
			for(int r=1;r<=6;r++)
			{
				
				cout<<r<<" "<<cara[r-1];
				histograma(cara[r-1]);
				cout<<endl;
			}
			break;
			
			case 2:
				
				for(int i=1;i<=100;i++)
				{
					int numero=dado()+dado();
					cara2[numero-1]++;	
				}
				for(int r=1;r<=12;r++)
				{
					
					cout<<r<<" "<<cara2[r-1];
					histograma(cara2[r-1]);
					cout<<endl;
				}
				
			break;
		}
	
	}while(opc !=0);
	return 0;
}	

void menu()
{
cout<<" \n   Dado    \n";
		cout<<"1---> 1 Lanzamineto \n";
		cout<<"2---> 2 Lanzamientos \n";
		cout<<"0---> Salir \n";
		cout<<"Coloca un el numero de la opcion: ";
}

int dado()
{
		int n;
		n=rand()%6+1;
		return n;
		
}

void histograma(int cara)
{
	for(int i=1;i<=cara;i++)
	{
		cout<<"*";
	}
}
