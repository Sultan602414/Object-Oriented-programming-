#include <iostream>
#include "Deep.h"

using namespace std;

int main()
{
    Deep d1 (10, 20 , 30);
//    d1.setvalue(10, 20);
    Deep d2 = d1;
    d1.print();
    cout << endl;
    d2.print();
    cout << endl;
    d1.print();


    return 0;
}
