class modular
{

public:

    int op1;
    int op2;
    int mod;

    modular(int, int, int);

    int suma();

    int resta();

    int multiplicacion();

    int inversa();

    ~modular();

};


class interfaz
{

public:

    int opt;

    interfaz();

    int menu_principal();

};