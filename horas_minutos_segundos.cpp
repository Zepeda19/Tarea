#include<iostream>
using namespace std;
int main(){
	int minen,segen;
	float horen, horsal;
	int minsal,segsal;
	int trabjhor,trabmin,trabseg;
	
	cout<<"Horario De Entrada\n";
	cout<<" Hora: ";
	cin>>horen;
	cout<<" Minutos: ";
	cin>>minen;
	cout<<" Segundos: ";
	cin>>segen;
	
	cout<<"\n Horario De Salida\n";
	cout<<"Hora: ";
	cin>>horsal;
	cout<<" Minutos: ";
	cin>>minsal;
	cout<<" Segundos: ";
	cin>>segsal;
	
	horen*=3600;
	minen*=60;
	
	horsal*=3600;
	minsal*=60;
	
	segen+=minen+horen;
	segsal+=minsal+horsal;
	
	trabjhor=(segsal-segen)/3600;
	trabmin=((segsal-segen)%3600)/60;
	trabseg=(segsal-segen)%60;
	
	cout<<"Usted trabajo: "<<trabjhor<<" horas  "<<trabmin<<" Minutos  "<<trabseg<<" Segundos  ";
	
	
	
 return 0;	
}
