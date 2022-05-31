#include <iostream>
#include "persona.h"
using namespace std;

int main()
{
    cout << "Mi primer proyecto en Git!" << endl;
    Persona p;
    p.nombre = "Bryan";
    p.edad = 19;
    cout<< "Nombre : " <<p.nombre <<endl;
    cout<< "edad : " <<p.edad <<endl;
    return 0;
}
