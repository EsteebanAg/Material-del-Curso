#include <iostream>

using namespace std;

int main (){

//creo mis variables.
string nombre;
int edad;
char genero;
float promedio;
bool status;
	
//Pido información al usuario.

	cout<<"\tUSUARIO\n";
	cout<<"Ingresa tu nombre: ";
	cin>>nombre;
	
	cout<<"Ingresa tu edad: ";
	cin>>edad;
	
	cout<<"Genero (M/F): ";
	cin>>genero;
	
	cout<<"Promedio: ";
	cin>>promedio;
	
	cout<<"Status: ";
	cin>>status;
cout<<endl;	
//Muestro su información al usuario.

	cout<<"\t ALUMNO\n";
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Genero: "<<genero<<endl;
	cout<<"Promedio: "<<promedio<<endl;
	cout<<"Status: "<<status;
	
return 0;	
}
