#include <iostream>//esto se refiere al flujo de entradas y salidas, aquí se indica que todo lo de abajo es código

using namespace std;//esto da la orden de que todo lo de abajo va a ser escrito en estandar, en caso contrario habría que estar abre y abre la función std en cada comando

int main(){

	cout<<"Calculadora"<<endl;
	
	float a, b;//aquí se está pidiendo que ingrese un número completo (en lugar de string que se usa con conjunto de texto, cuando es número se usa float)
	//float utiliza solo un número decimal.
	
	cout<<"Ingresa un numero:";
	cin>>a;
	cout<<"Ingresa otro numero:";
	cin>>b;
	
	cout<<"Suma:"<<a+b<<endl;
	cout<<"Resta:"<<a-b<<endl;
	cout<<"Multiplicacion:"<<a*b<<endl;
	cout<<"Division:"<<a/b<<endl;
	cout<<"Modulo de division:"<<(int)a%(int)b<<endl;//aquí se puso int para indicar que se quieren números enteros
	//un módulo de división es el restante (sobrante) que hay cuando un número se divide y no es múltiplo del divisior) e.g. 5 /2 cabe 2 veces y sobra un módulo de 1.
	
	
return 0;
}
