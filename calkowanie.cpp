#include <iostream>
#include <cmath>
#include "ui_mainwindow.h"
#include "mainwindow.h"
#include <QApplication>
#include "pobudzenie.h"

using namespace std;

const double krok_calk = 0.1;

class Calkowanie{

double wart_a, wart_b, wart_A;
int u;

void warto_param(double x, double y, double z){

    x = wart_a;
    y = wart_A;
    z = wart_b;



    //wart_a = setValue(parametr_a);
    //parametr_a->value();


}
/*
void pobudzenie(){
    if(currentValue(sygnal_u) = 0){
        u = wartosc;
    }
}
*/

void calk(){
    double *tab_y = new double[1000];
    double *tab_z = new double[1000];

    for(int i=0; i<1000; i++){

            tab_y[0] = 0;
            tab_z[0] = 0;

            tab_y[i+1] = tab_y[i] + krok_calk * (tab_z[i]);
            // w nawiasie i albo i+1 w nastepnej linijce
            tab_z[i+1] = tab_z[i] + krok_calk * (u*u*u - wart_A * pow(wart_a, (2/3)) * tab_y[i] - wart_b * tab_z[i]);

    }


}

};
