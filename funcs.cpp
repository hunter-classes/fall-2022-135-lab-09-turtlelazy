#include <iostream>
#include "funcs.h"
#include "coord3d.h"
#include <cmath>

//Task A
double length(Coord3D *p){
    double sum = pow(p -> x,2) + pow(p -> y,2) + pow(p -> z,2);
    return sqrt(sum);
}

//Task B
Coord3D *fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    double sum1 = length(p1);
    double sum2 = length(p2);

    if(sum1 < sum2){
        return p2;
    }
    return p1;
}

//Task C
void move(Coord3D *ppos, Coord3D *pvel, double dt){
    ppos -> x += pvel -> x * dt;
    ppos-> y += pvel-> y * dt;
    ppos-> z += pvel-> z * dt;
}

//Task E
Coord3D *createCoord3D(double x, double y, double z){
    Coord3D *coord = new Coord3D;
    Coord3D placer = {10, 20, 30};
    *coord = placer;

    // coord -> x = x;
    // coord -> y = y;
    // coord -> z = z;

    //*coord = ;
    return coord;
}

void deleteCoord3D(Coord3D *p){
    delete p;
}