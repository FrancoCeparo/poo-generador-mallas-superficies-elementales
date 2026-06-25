#ifndef MALLA_H
#define MALLA_H
#include "superficie.h"

class malla
{
private:
    superficie superficies[100];
    int cantidad;

public:
    malla();

    void agregar(superficie s);

    double areaTotal();

    int cantidadMayor(double valor);
};

#endif // MALLA_H
