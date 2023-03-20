#include <iostream>

using namespace std;

class modular 
{

    public:

        int op1;
        int op2;
        int mod;

        modular(int _op1, int _mod, int _op2 = 0)
        {
            op1 = _op1;
            op2 = _op2;
            mod = _mod;

            op1 %= mod;
            op2 %= mod;
    
        }

        int suma() 
        {
            return (op1 + op2) % mod;

        }

        int resta()
        {

            return (op1 - op2 + mod) % mod;

        }

        int multiplicacion()
        {
            return (op1 * op2) % mod;
        }

        int inversa()
        {

            int a{ 0 };
            int b{ 1 };
            int q{ -1 };
            int c{ -1 };
            int r{ -1 };



            while (r !=1)
            {

                if (op1 == 0)
                {
                    cout << "No se puede sacar inversa." << endl;
                }

                q = mod / op1;
                c = a - q * b;

                a = b;
                b = c;

                r = mod % op1;

                cout << r << endl;

                mod = op1;
                op1 = r;

            }

            return c;

        }

        ~modular() {
            op1 = 0;
            op2 = 0;
            mod = 0;
        }

};

int main()
{

    modular a(2, 2, 26); 

    cout << a.inversa();

}
