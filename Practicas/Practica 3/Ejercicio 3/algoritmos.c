#include <stdio.h> 
#include <math.h> // Para floor
#include "cabecera.h"


int busquedaBinariaRecursiva(int arreglo[], int busqueda, int izquierda, int derecha)
{
    if (izquierda > derecha) return -1;

    int indiceDeLaMitad = floor((izquierda + derecha) / 2);

    int valorQueEstaEnElMedio = arreglo[indiceDeLaMitad];
    if (busqueda == valorQueEstaEnElMedio)
	{
        return indiceDeLaMitad;
    }
    
    if (busqueda < valorQueEstaEnElMedio){
        // Entonces est� hacia la izquierda
        derecha = indiceDeLaMitad - 1;
    }else{
        // Est� hacia la derecha
        izquierda = indiceDeLaMitad + 1;
    }
    return busquedaBinariaRecursiva(arreglo, busqueda, izquierda, derecha);
}
