
#include <iostream>
using namespace std;
int main (){
//for, while, do while (llamadas estructuras de repetici�n)(tienen 4 criterios b�sicos).
//Contador: cuenta las vueltas que da el ciclo.
//Criterio de paro: indica en qu� momento se detiene el ciclo.
//Aumento: modifica el contador de mi ciclo.
//Cuerpo: Acci�n que queremos repetir.

	/*for(int i=0;i<5;i++){//se le pone i por lo general para indicar que es �ndice.
	cout<<i<<endl;
	}*/
	
	/*int i=0;
	while(i<=10){
	cout<<i<<endl;
	i=i+1;
	}*/
	
	int i=0;
	do{	
		cout<<i<<endl;	
		i++;
	}while(i<=10000000);
	
return 0;
}
