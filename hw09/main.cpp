#include <iostream>
#include "funciones.h"
using namespace std;
double* RK(double dt, double  t, double vo,double yo){
    double TT;
    double XX;
    double X=newX(yo,t,vo);
    double* TX=new double[2];
    double k1 = newV(X,t)*dt;
    double k2 = newV(X+k1/2,t+dt/2)*dt;
    double k3 = newV(X+k2/2,t+dt/2)*dt;
    double k4 = newV(X+k3,t+dt)*dt;

    TT=t+dt;
    XX=X+(k1+2*k2+2*k3+k4)/6;
    TX[0]=TT;
    TX[1]=XX;
    return TX;
    }
int main(){
    //Para y_o=8.5m y v_o=20m/s
    double dt= 0.01;
    double yo= 8.5; //m
    double vo= 20; //m/s
    double t=tVuelo(vo);
    double to=0;
        
    double y=newX(yo,to,vo);
    double v=newV(vo,to);
    
    int c= t/dt;
    double * Tiempo= new double[c];
    double * Altura=new double[c];
    
    double cc= t/dt;
    int a=0; 
    double tt=0;
    while(a<c and tt<cc){  
    
    double* RK4=RK(dt,tt,vo,yo);
   
    Tiempo[a]=RK4[0];
    Altura[a]=RK4[1];
    tt+=.01;
    a+=1;
    }
    int i=0;
    
    while(i<c){

    cout << Tiempo[i] <<" "<<  Altura[i] <<endl;
    i++;
    }
    return 0;
}