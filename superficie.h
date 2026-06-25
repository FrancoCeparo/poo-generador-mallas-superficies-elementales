#ifndef SUPERFICIE_H
#define SUPERFICIE_H

#include "punto.h"


class superficie
{
private:
    punto p1;
    punto p2;
    punto p3;

public:
    superficie();
    superficie(punto a, punto b, punto c);
   double area();

};

#endif // SUPERFICIE_H
