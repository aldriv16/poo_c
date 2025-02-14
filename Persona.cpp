#include<iostream>
using namespace std;
// 1. Nombre de la clase (Persona)

class Persona{
	//2.1 Controles de Acceso(Private, Public, Protected(Clases heredadas))
	//2. Atributos = caracteristicas de la clase (objeto)
	protected:
		string nombres,apellidos,direccion,fecha_nacimiento;
		int telefono;
		
	//3. Constructor
	public:
		Persona(){
		}
		Persona(string nom, string ape, string direc, string fn, int t){
			nombres = nom;
			apellidos = ape;
			direccion = direc;
			fecha_nacimiento = fn;
			telefono = t;
		}
	//4. Metodos
	//CRUD es un acronimo en ingles que significa "Create, Read, Update, Deleate".
	//Es decir, crear, leer, actualizar y eliminar.
	void crear();
	void leer(){
		cout<<"Nombre:"<<nombres<<endl;
		cout<<"Apellidos:"<<apellidos<<endl;
		cout<<"Direccion:"<<direccion<<endl;
		cout<<"Telefono:"<<telefono<<endl;
		cout<<"Fecha Nacimiento:"<<fecha_nacimiento<<endl;
	}
	void actualizar();
	void eliminar();
};
