#include "malla.h"


malla::malla()
{
cantidad = 0;
}

void malla::agregar(superficie s)
{
    superficies[cantidad] = s;
    cantidad++;
}

double malla::areaTotal()
{
    double suma = 0;

    for(int i=0;i<cantidad;i++)
{
    suma += superficies[i].area();
}

return suma;
}



int malla::cantidadMayor(double valor)
{
    int contador = 0;

    for(int i=0;i<cantidad;i++)
    {
        if(superficies[i].area() > valor)
        {
            contador++;
        }
    }

    return contador;
}
