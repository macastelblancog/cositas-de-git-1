#include <iostream>
#include <math.h>
double tVuelo(int vo){
    double g=9.8;
    return 2*vo/g;
}
double newX(double y, double t, double vo){
    double g=-9.8;
    return y + (vo*t) + ((.5)*g*(pow(t,2)));
}
double newV(double vo, double t ){
    double g=-9.8;
    return vo+g*t;
}


//Mis funciones, rungekutta