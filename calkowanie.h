#ifndef CALKOWANIE_H
#define CALKOWANIE_H

#include <QMainWindow>
#include <QDebug>
#include <cmath>

#endif // CALKOWANIE_H

const double CZAS_SYGALU = 100;
const double ILOSC_PUNKTOW = 1000;

class Calkowanie
{
    public:
        double parametr_a, parametr_b, parametr_A;
        int u = 1 ; // narazie tak potem z funki pobudzenie
        double krok_calk;

        void krok_calkowania()
        {
            krok_calk = CZAS_SYGALU / ILOSC_PUNKTOW;
        }

        void calk()
        {
            double *tab_y = new double[1000];
            double *tab_z = new double[1000];

            for(int i=0; i<1000; i++)
            {
                tab_y[0] = 0;
                tab_z[0] = 0;

                tab_y[i+1] = tab_y[i] + krok_calk * (tab_z[i]);
                // w nawiasie i albo i+1 w nastepnej linijce
                tab_z[i+1] = tab_z[i] + krok_calk * (u*u*u - parametr_A * pow(parametr_a, (2/3)) * tab_y[i] - parametr_b * tab_z[i]);
            }
        }
};
