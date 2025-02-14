//Comentario
#include"Persona.cpp"
#include<iostream>
using namespace std;
main(){
	cout<<"hola mundo.."<<endl|;
	//Instanciar la clase para crear un objeto
	Persona persona = Persona("Alex Alberto", "Flores Guzman", "Ciudad", "22-12-1995", 123456);
	persona.leer();
}
