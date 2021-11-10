#include <iostream>
#include "funcs.h"
#include "coord3d.h"
#include "cmath"

// add functions here

double length(Coord3D *p)
{
    double result = 0;
    double x = pow((*p).x,2);
    double y =  pow((*p).y,2);
    double z = pow((*p).z,2);
    result = sqrt(x+y+z);
    return result;
}

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2)
{
    if(length(p1) > length(p2))
    {
        return p1;
    }
    else
    {
        return p2;
    }
    
    
}

void move(Coord3D *ppos, Coord3D *pvel, double dt)
{
    ppos->x =  ppos->x + pvel->x * dt;
    (*ppos).y =   ppos->y + pvel->y * dt;
    (*ppos).z = ppos->z + pvel->z * dt;
}

Coord3D* createCoord3D(double x, double y, double z)
{
    Coord3D * newPoints = new Coord3D;
    newPoints->x = x;
    newPoints->y = y;
    newPoints->z = z;
    return newPoints;
}


void deleteCoord3D(Coord3D *p)
{
    delete p;
}