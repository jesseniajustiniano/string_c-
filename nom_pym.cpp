#include <iostream>

using namespace std;
//ingresar una cadena nombre,ape paterno y ape materno
//Ej. juan perez flor 
//resultado= Perez Flor Juan 
string nombrecompleto, nombre, apePat, apeMat;
void separarnombre()
{
	int pini, pfinal;
	pini=0;
	pfinal=nombrecompleto.find(" ",pini);
	nombre=nombrecompleto.substr(pini,(pfinal-1));
	pini=pfinal+1;
	pfinal=nombrecompleto.find(" ",pini);
	apePat=nombrecompleto.substr(pini,(pfinal-1));
	nombre[0]=toupper(nombre[0]);
	/*pini=pfinal;
	pfinal=nombrecompleto.find(" ",pini);
	cout<<"pos:"<<pfinal<<endl;
	apePat=nombrecompleto.substr(pini,(pfinal-1));
	*/
}




int main(int argc, char *argv[]) {
	cout<<"Ingrese su nombre completo";
	getline(cin, nombrecompleto);
	separarnombre();
		cout<<"nombre:"<<nombre<<endl;
		cout<<"apellido:"<<apePat<<endl;
				Imprimirnombre();
		//imprimir el nombre

	return 0;
}

