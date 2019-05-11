#ifndef POBUDZENIE_H
#define POBUDZENIE_H

#include <QMainWindow>
#include <QDebug>
#include <cmath>

#endif // POBUDZENIE_H

#define SKOK  1
#define FALA_PROST  2
#define SINUS  3

class Pobudzenie
{
    public:
        int index_wejscia;
        double wartosc_wejscia;
        double chwila_czasu;

    private:
        void wybor_pobudzenia()
        {
            switch (index_wejscia)
            {
                case SKOK:
                    skok();
                break;

                case FALA_PROST:
                break;

                case SINUS:
                break;
            }
        }

        void skok()
        {
             if(chwila_czasu <= 0)
                wartosc_wejscia = 0;
             else
                wartosc_wejscia = 1;
        }

        void fala()
        {
            if(abs(chwila_czasu) > 0.5)
                wartosc_wejscia = 0;
             else if(abs(chwila_czasu) < 0.5)
                wartosc_wejscia = 1;
             else
                wartosc_wejscia = 0.5;
        }

        void sinus()
        {
            wartosc_wejscia = sin(chwila_czasu);
        }
};
