#include <iostream>

using namespace std;

int main(){
	
cout<<"Estimado alumno, bienvenido al sistema escolar:\n";
	
string nombre, apellido_paterno, apellido_materno, ciudad; 
int edad;
float promedio;
cout<<endl;

	cout<<"Ingrese Nombre: ";
	cin>>nombre;
	
	cout<<"Ingrese Apellido Paterno: ";
	cin>>apellido_paterno;
	
	cout<<"Ingrese Apellido Materno: ";
	cin>>apellido_materno;
	
	cout<<"Ingrese Edad Actual: ";
	cin>>edad;
	
	cout<<"Indique Ciudad de Residencia: ";
	cin>>ciudad;
	
	cout<<"Indique su Promedio Actual (en escala sobre 10 con 1 decimal): ";
	cin>>promedio;

cout<<endl;
	
cout<<"\tNombre Completo del Usuario: "<<nombre+" "+apellido_paterno+" "+apellido_materno<<endl;
cout<<endl;
cout<<"\tEdad Actual: "<<edad<<" anios"<<endl;
cout<<endl;
cout<<"\tCiudad de residencia: "<<ciudad<<", Jalisco"<<endl;
cout<<endl;
cout<<"\tPromedio Actual: "<<promedio<<" sobre 10"<<endl;
cout<<endl;
cout<<"\tPuntaje faltante para alcanzar un promedio de excelencia de 9.8: "<<"("<<(float)9.8-(float)promedio<<" Puntos Faltantes)"<<endl;
cout<<endl;	
cout<<"\"¡Gracias por consultar su informacion, vuelva pronto!\"";

return 0;
}
