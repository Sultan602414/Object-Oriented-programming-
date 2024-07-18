#include "OO.h"

#include <iostream>
using namespace std;


void OO:: data (int x, int y)
{
    a=x;
    b=y;
}

void OO:: print ()
{
    cout << a << ", " << b;
}
OO OO::operator+(OO c)
{
    OO temp;
    temp.a = a - c.a;
    temp.b = b - c.b;
    return temp;
}
