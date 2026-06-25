#include <cmath>
#include "superficie.h"


superficie::superficie()
{

}


//Ecuacion del area:A=(1/2​)∣(p2−p1)×(p3−p1)∣
superficie::superficie(punto a, punto b, punto c) : p1(a),p2(b),p3(c)
{

}
double superficie::area()
{
       double ax = p2.getx() - p1.getx();
       double ay = p2.gety() - p1.gety();
       double az = p2.getz() - p1.getz();

       double bx = p3.getx() - p1.getx();
       double by = p3.gety() - p1.gety();
       double bz = p3.getz() - p1.getz();


       double cx = ay*bz - az*by;
       double cy = az*bx - ax*bz;
       double cz = ax*by - ay*bx;


       double modulo = sqrt(cx*cx + cy*cy + cz*cz);


       return modulo/2;
   }

