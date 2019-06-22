#include <iostream>
using namespace std;

	float suma(float a,float b){
	return a+b;
	}

	float resta(float a,float b){
	return a-b;	
	}

	float multiplicacion(float a, float b){
	return a*b;
	}

	float division(float a, float b){
	return a/b;
	}

int main(){
int operacion;
float a,b;	
		
do{	
	cout<<endl;
	cout<<"Opcion #1= Suma"<<endl;
	cout<<"Opcion #2= Resta"<<endl;
	cout<<"Opcion #3= Multiplicacion"<<endl;
	cout<<"Opcion #4= Division"<<endl;
	cout<<"Opcion #5= Salir del programa"<<endl;
	cout<<endl;
	cin>>operacion;
	cout<<endl;

switch(operacion){
case 1:
	cout<<"Ingresa un numero"<<endl;
	cin>>a;
	cout<<"Ingresa un segundo numero"<<endl;
	cin>>b;
	cout<<"Suma= "<<a+b<<endl;break;
case 2:
	cout<<"Ingresa un numero"<<endl;
	cin>>a;
	cout<<"Ingresa un segundo numero"<<endl;
	cin>>b;
	cout<<"Resta= "<<a-b<<endl;break;
case 3:
	cout<<"Ingresa un numero"<<endl;
	cin>>a;
	cout<<"Ingresa un segundo numero"<<endl;
	cin>>b;
	cout<<"Multiplicacion= "<<a*b<<endl;break;
case 4:
	cout<<"Ingresa un numero"<<endl;
	cin>>a;
	cout<<"Ingresa un segundo numero"<<endl;
	cin>>b;
	cout<<"Division= "<<a/b<<endl;break;
case 5:return 0;
	default:cout<<"El numero ingresado #"<<operacion<<" NO forma parte de las opciones del menu"<<endl;		
	}
		}while(operacion!=5);	

return 0;
}
