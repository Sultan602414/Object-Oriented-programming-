#include "Deep.h"
#include <iostream>
using namespace std;

Deep :: Deep (int x, int y , int z)
{
    a = x;
    b = y;
    c = z;
}

Deep :: Deep(Deep & abc)
{
    a = abc.a;
    b = abc.b;
    c = abc.c;
    *p = 50;

}

void Deep::setvalue (int x , int y)
    {
        a =x;
        b = y;
    }
void Deep :: print ()
{
    cout << a << ", " << b << ", "<< c;
}

