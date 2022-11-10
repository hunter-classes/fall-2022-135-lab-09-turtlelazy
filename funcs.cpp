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

