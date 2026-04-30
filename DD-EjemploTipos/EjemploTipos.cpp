/*
    ____________________________
   |           -TP1-            |
   | Grupo 3                    |
   | AyED (AED)                 |
   | K1053                      |
   | 222.942-0                  |
    ----------------------------
*/

#include <iostream>
#include <cassert> // Uso cassert porque voy a usar la función assert.
#include <string> // Uso string porque voy a operar con cadenas de caráteres.
#include <windows.h> // Porque quiero usar UTF-8 para usar signos de puntuación sin causar problemas de legibilidad.
using namespace std;

int main()
{
    // IGNORAR (NO ES PARTE DE LA CONSIGNA):
    SetConsoleOutputCP(CP_UTF8); // Configuro el terminal para soportar UTF-8.



    /* OPERACIONES CON int */
    assert(8 + 25 == 33);
    assert(7 - 6 == 1);
    assert(4 * 4 == 16);
    assert(8 / 2 == 4);
    assert(9 / 2 == 4); // Redondea a 4 ya que no admite números con coma.
    assert(10 % 2 == 0); // La operación % deja como salida el resto de la división de ambos números.
    assert(5 % 2 == 1); // Porque el resto de dividir 5 entre 2 es 1.
    assert(2 > 1);
    assert(1 < 2);
    assert(2 == 2);
    assert(8 >= 8);
    assert(8 <= 9);
    assert(8 >= 7);



    /* OPERACIONES CON bool */
    // Operación con AND.
    assert((false && false) == false); // La && tiene mayor "jerarquía semántica" que el ==, por lo que puse paréntsis para (A && B).
    assert((false && true) == false);
    assert((true && false) == false);
    assert((true && true) == true);
    // Operación con OR.
    assert(false || false == false);
    assert(false || true == true);
    assert(true || false == true);
    assert(true || true == true);



    /* OPERACIONES CON char */
    assert(8 + 'p' == 120); // Porque p es 112 en el código ASCII.
    assert(48 == '0');
    assert('a' != 'A');
    assert('A' + 'B' == 131);
    


    /* OPERACIONES CON string */
    assert("Ejemplo"s +"Práctico"s == "EjemploPráctico"s);
    assert(std::string("Hola")[0] == 'H');
    assert(std::string("Hola").at(1) == 'o');
    assert(std::string("Hola").front() == 'H');
    assert(std::string("Hola").back() == 'a');



    /* OPERACIONES CON unsigned */
    assert(4u >= 3u);
    assert(4u > 3u);
    assert(4u >= 4u);
    assert(4u <= 5u);
    assert(4u < 5u);
    assert(4u <= 4u);
    assert(4u == 4u);
    assert(4u + 5u == 9u);
    assert(10u - 6u == 4u);
    assert(10u / 2u == 5u);
    assert(2u * 2u == 4u);



    /* OPERACIONES CON double */
    assert(10.8 + 4.2 == 15);
    assert(2.5 - 0.5 == 2);
    assert(5.0 / 2.0 == 2.5);
    assert(8.2 * 10.0 == 82);

    return 0;
}
