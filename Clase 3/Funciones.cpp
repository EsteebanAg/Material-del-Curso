#include <iostream>
using namespace std;
	
	int suma(int a, int b){
	int resultado=a+b;
	return resultado;
	}
	
	string saludo(){
	return "Hola Mundo";
	}
	
	void saludoDos(string nombre){
	cout<<"Hola "<<nombre<<endl;	
	}
	
	void pedirInformacion(){
	string nombre;
	cout<<"Ingresa tu nombre:";
	cin>>nombre;
	cout<<"Hola "<<nombre<<endl;
	}
	
	int main (){
	int resultado=suma(3,7);
	cout<<resultado<<endl;
	cout<<saludo()<<endl;
	saludoDos("Esteban");
	pedirInformacion();
	
return 0;	
}
