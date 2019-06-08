#include <iostream>
using namespace std;
int main () {

	int dia;
	cout<<"Ingrese el dia de la semana: ";
	cin>>dia;

	if (dia==1){
	cout<<"Lunes"<<endl;
	}else if (dia==2){
	cout<<"Martes"<<endl;
	}else if (dia==3){
	cout<<"Miercoles"<<endl;
	}else if (dia==4){
	cout<<"Jueves"<<endl;
	}else if (dia==5){
	cout<<"Viernes"<<endl;
	}else if (dia==6){
	cout<<"Sabado"<<endl;
	}else if (dia==7){
	cout<<"Domingo"<<endl;
	}else{
	cout<<"El numero "<<dia<<" NO existe en la semana"<<endl;
	}
	
return 0;
}
