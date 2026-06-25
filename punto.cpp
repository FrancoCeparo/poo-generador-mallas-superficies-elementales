#ifndef PUNTO_H
#define PUNTO_H


class punto
{ private:

    double x;
    double y;
    double z;

public:
    punto();

    punto(double x, double y, double z);

    double getx();
    double gety();
    double getz();
};

#endif // PUNTO_H
