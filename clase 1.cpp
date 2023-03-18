#include <iostream>

using namespace std;

int calModular( int opt1 , int opt2, int mod, int operacion = 0) 
{
    opt1 %= mod;
    opt2 %= mod;

    if (operacion == 0) 
    {
        return (opt1 + opt2) % mod;

    }
    else if (operacion == 1)
    {
        return (opt1 - opt2 + mod) % mod;
    
    }
    else if (operacion == 2)
    {
        return (opt1 * opt2) % mod;
   
    }
    else 
    {
        return 0;
    
    }
    
}

int inversa(int op, int mod) 
{
    int a = 0;
    int b = 1;

    int q;
    int c;
    int r;
    int x{ op }, y{mod};


    while (true) {

        r = y - (x % y);
        q = y / x;
        c = calModular(a , b, mod, 1) * b;

        a = b;
        y = x;
        x = r;
        b = c;

        cout << "\n" << c << ", " << q;

        if (r == 1) {
            break;
        }

    }

    return c;

}

int main()
{
    cout << "Clase 1 18/03/2023 Jean Marc\n\n";

    cout << "Calculadora modular:\n";


    cout << calModular(36, 43, 2, 1);

    cout << inversa(15, 26);


    
}
