#include <iostream>
#include "OO.h"
using namespace std;

int main()
{
    OO obj1 , obj2 , obj3;
    obj1.data(5,4);
    obj2.data(2,3);
    obj3 = obj1+obj2;
    obj3.print();
    cout << endl << 2 + 3;
    return 0;
}
