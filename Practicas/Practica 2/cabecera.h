#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define false 0
#define true 1

typedef char booleano;

typedef struct Datos{
	
	char tipoMembresia[20];
	char nombre[100];
	char apellidoP[100];
	char direccion[200];
	int edad;
	
}datos;

/*Struct que define un nodo para una LSE*/
typedef struct Nodo{
	
	int matricula;
	
	/**Datos*/
	
	datos info;
	
	/**apuntador siguiente**/
	struct Nodo* sig;	
}nodo;

nodo* crearNodo();
booleano insertarNodo( nodo** cabecera, nodo* nuevo );
booleano borrarNodo (nodo** cabecera, int mat );
booleano borrarMenorIgualQ(nodo** pNodo, int memb);
booleano borrarMayorIgualQ(nodo** pNodo, int memb);
booleano borrarLista(nodo** pNodo);

//-------------------------------------------------------------

void asignarMatricula(nodo* pNodo, int mat);
void asignarNombre(nodo* pNodo, char* nom);
void asignarApellido(nodo* pNodo, char* ape);
void asignarEdad (nodo* pNodo, int ed);
void asignarDireccion(nodo* pNodo, char* dir);
void asignarTipoMembresia(nodo* pNodo, int tmemb);
//---------------------------------------------------------------------
void membresias();
//-----------------------------------------------------------------------
void mostrarNombre (nodo* pNodo);
void mostrarApellido (nodo* pNodo);
void mostrarTipoMembresia (nodo* pNodo);
void mostrarEdad (nodo* pNodo);
void mostrarNumMembresia (nodo* pNodo);
void mostrarRegistro(nodo** cabecera, nodo* nuevo, int op);
//-------------------------------------------------------------------
void buscarEdad(nodo** cabecera, nodo* nuevo,int ed);
void buscarEntreEdades(nodo** cabecera, nodo* nuevo,int ed);
void buscarXmembresia(nodo** cabecera, nodo* nuevo,int matri);
void buscarXMembresia(nodo** cabecera, nodo* nuevo,int matri);

void mostrarnombre (nodo** cabecera);
void mostrarletra (nodo** cabecera);
void mostrarapellido (nodo** cabecera);
