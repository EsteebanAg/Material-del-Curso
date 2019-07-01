#include <iostream>
using namespace std;
	
	class Producto{ //esto se refiere a la clase, con P mayúscula, habrá otra función producto pero que será para nombrar al objeto	
//atributos
	protected:
		string protegido;
	private: //aquí estoy declarando que es público (ni privado ni protegido
		string nombre;
		float precio;
		int id;
	public:
//Constructores//
		Producto(){}
	
		Producto(string nombre,float precio, int id){
			this->nombre=nombre;
			this->precio=precio;
			this->id=id;			
		}
		virtual void mostrarInfo(){
			cout<<"Nombre: "<<nombre<<endl;
			cout<<"ID: "<<id<<endl;
			cout<<"Precio: $"<<precio<<endl;
		}
	
	//Métodos
		string getNombre(){
			return nombre;
		}
		void setNombre(string nombre){
			this->nombre=nombre;	
		}
		float getPrecio(){
			return precio;
		}
		void setPrecio(float precio){
			this->precio=precio;
		}
		int getId(){
			return id;
		}
		void setId(int id){
			this->id=id;
		}
};	
	
	class ProductoDigital:public Producto{
	private:
		float pesoMB;
		string formato;
	
//Constructores
	public:
		ProductoDigital(){
		}
		
		ProductoDigital(string nombre, float precio, int id, float pesoMB,string formato):Producto(nombre,precio,id){
			this->pesoMB=pesoMB;
			this->formato=formato;
		}
		
		float getPesoMB(){
			return pesoMB;
		}
		
		void setPesoMB(float pesoMB){
			this->pesoMB=pesoMB;
		}
		string getFormato(){
			return formato;
		}
		
		void setFormato(string formato){
			this->formato=formato;
		}
		void mostrarInfo(){
		Producto::mostrarInfo();
		cout<<"Peso: "<<pesoMB<<" MB"<<endl;
		cout<<"Formato: "<<formato<<endl;
		}
};
	
int main (){	
	
	int numero=0;
	Producto* producto=new Producto("Coca Cola",16,1);
	Producto* producto2=new Producto("Pepsi",14,2);
		/*producto.nombre="Pepsi";
		producto.precio=15;
		producto.id=1;*/
	
	/*cout<<"Nombre del producto: "<<producto->getNombre()<<endl;
	cout<<"Precio del producto: $"<<producto->getPrecio()<<endl;*/
	
	ProductoDigital*productoDigital=new ProductoDigital("Pelicula",300,3,890.56,"MP4");
	ProductoDigital*productoDigital2=new ProductoDigital("Libro",250,4,190.23,"PDF");
	//ProductoDigital->setNombre("Pelicula");
	/*cout<<"Nombre de Producto Digital: "<<productoDigital->getNombre()<<endl;*/
	
	Producto*productos[4];
	productos[0]=producto;
	productos[1]=producto2;
	productos[2]=productoDigital;
	productos[3]=productoDigital2;
	
	for (int i=0;i<4;i++){
		productos[i]->mostrarInfo();
		cout<<"__________"<<endl;
	}
return 0;
}
