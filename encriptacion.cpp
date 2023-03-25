#include "encriptacion.hpp"
#include <iostream>

using namespace std;

    modular::modular(int _op1, int _mod, int _op2 = 0)
    {
        op1 = _op1;
        op2 = _op2;
        mod = _mod;

        op1 %= mod;
        op2 %= mod;

    }

    int modular::suma()
    {
        return (op1 + op2) % mod;

    }

    int modular::resta()
    {

        return (op1 - op2 + mod) % mod;

    }

    int modular::multiplicacion()
    {
        return (op1 * op2) % mod;
    }

    int modular::inversa()
    {

        int a{ 0 };
        int b{ 1 };
        int q{ -1 };
        int c{ -1 };
        int r{ -1 };
        int x{ mod };



        while (r != 1)
        {



            q = x / op1;
            c = a - q * b;

            while (c < 0)
            {
                c = mod + c;

            }

            //cout << "a = " << a << endl;
            //cout << "b = " << b << endl;
            //cout << "c = " << c << endl;
            //cout << "q = " << q << endl;

            a = b;
            b = c;

            r = x % op1;

            //cout << "r = " << r << endl << endl;

            x = op1;
            op1 = r;

        }

        return c;

    }

    modular::~modular() {
        op1 = 0;
        op2 = 0;
        mod = 0;
    }

    //interfaz

    interfaz::interfaz() 
    {
        opt = -1;

    }

    int interfaz::menu_principal()
    {
        while (opt != 1 && opt != 2 && opt != 3)
        {

            cout << "\n\n\t---------MENU PRINCIPAL---------\n\n";
            cout << "\t\t[1] Encripta\n";
            cout << "\t\t[2] Desencripta\n";
            cout << "\t\t[3] salir\n\n";

            cout << "\t>>>";
            cin >> opt;

            if (!cin.good()) 
            {
                cout << "\n\tIngrese un valor valido\n";
                cin.clear();
            }

            switch (opt)
            {
            case 1:
                return 1;
            case 2:
                return 2;
            case 3 :
                return 3;
    
            default:
                break;
            }

        }



    }
