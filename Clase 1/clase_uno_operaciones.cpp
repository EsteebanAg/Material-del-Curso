#include <iostream>//esto se refiere al flujo de entradas y salidas, aqu� se indica que todo lo de abajo es c�digo

using namespace std;//esto da la orden de que todo lo de abajo va a ser escrito en estandar, en caso contrario habr�a que estar abre y abre la funci�n std en cada comando

int main(){

	cout<<"Calculadora"<<endl;
	
	float a, b;//aqu� se est� pidiendo que ingrese un n�mero completo (en lugar de string que se usa con conjunto de texto, cuando es n�mero se usa float)
	//float utiliza solo un n�mero decimal.
	
	cout<<"Ingresa un numero:";
	cin>>a;
	cout<<"Ingresa otro numero:";
	cin>>b;
	
	cout<<"Suma:"<<a+b<<endl;
	cout<<"Resta:"<<a-b<<endl;
	cout<<"Multiplicacion:"<<a*b<<endl;
	cout<<"Division:"<<a/b<<endl;
	cout<<"Modulo de division:"<<(int)a%(int)b<<endl;//aqu� se puso int para indicar que se quieren n�meros enteros
	//un m�dulo de divisi�n es el restante (sobrante) que hay cuando un n�mero se divide y no es m�ltiplo del divisior) e.g. 5 /2 cabe 2 veces y sobra un m�dulo de 1.
	
	
return 0;
}
