#include<iostream>
using namespace std;
int main()
{
	int opc;	
	do
	{
		cout<<" \n   Menu    \n";
		cout<<"1---> Numero Primo \n";
		cout<<"2---> Numero Factorial \n";
		cout<<"3---> Promediar Calificacion \n";
		cout<<"0---> Salir \n";
		cout<<"Coloca un el numero de la opcion: ";
		cin>>opc;
		switch(opc)
		{
			case 1:
				int valor1,i,a;
				a=0;
				cout<<" \n Numero Primo \n";
				cout<<"coloca un numero: ";
				cin>>valor1;
				for(i=1;i<=valor1;i++)
				{
					if(valor1%i==0)
						a++;
				}
				if(a==2)
				{
					cout<<"El Numero Es Primo\n";
				}
				else
					cout<<"El Numero No Es Primo \n";		
			break;
		
			case 2:
				int cant1;
				int n, fact;
				fact=1;
				cout<<" \n Numero Factorial \n";
				cout<<" \n Coloca Un Numero: ";
				cin>>cant1;
				for(n=1;n<=cant1;n++)
				{
					fact*=n;
				}
				cout<<fact;	
			break;
		
			case 3:
				float cal=0,prom;
				int sum=0,cont=0;
				cout<<" \n Calificaciones (COLOCA -1 SI YA NO QUIERES INGRESAR CALIFICACION \n";
				while(cal !=-1)
				{
					cout<<"Coloca una calificacion: ";
					cin>>cal;
					
					if(cal !=-1)
					{
						sum+=cal;
						cont+=1;	
					}
					else
					{
						prom=sum/cont;
						cout<<"Promedio : "<<prom;
					}
				}
			break;
		}
	
	}while(opc !=0);
	return 0;
}	
