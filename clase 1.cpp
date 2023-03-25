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
            int x{ mod };



            while (r != 1)
            {



                q = x / op1;
                c = a - q * b;

                if (c < 0)
                {
                    c = mod + c;
                }

                a = b;
                b = c;

                r = x % op1;

                x = op1;
                op1 = r;



                if (op1 == 0)
                {
                    cout << "No se puede sacar inversa." << endl;
                }

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

    modular a(7, 26, 2); 

    cout << a.inversa();

}
