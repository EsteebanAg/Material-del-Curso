#include <iostream>
using namespace std;

	const int renglones=10;
	const int columnas=10;

	void llenarmatriz(int matriz[renglones][columnas]){
	int contador=1;
	for(int i=0; i<renglones; i++){
		for(int j=0; j<columnas; j++){
		matriz[i][j]=contador++;
		}
	}	
}
	
void mostrarmatriz(int matriz[renglones][columnas]){
	for (int i=0; i<renglones; i++){
		for (int j=0; j<columnas; j++){
		//cout<<" "<<matriz[i][j]<<" ";//
		printf(" %3.0f ",(float)matriz[i][j]);
		}
	cout<<endl;
	}
}

int main (){
	
	int matriz[renglones][columnas];
	llenarmatriz(matriz);
	mostrarmatriz(matriz);
	
return 0;
}
