#include <iostream>
using namespace std;
#include "array_lab.h"

int main()
{
    array_lab a1 (5);
    a1.p[0] = 1;
    array_lab a2 = a1;
    cout << "Original Content: " ;
    cout << a1.a << ", " << a1.p[0] << endl;
//    cout << a2.a << ", " << a2.p [0] << endl;
    cout << endl;
    cout << "Copied Content: " ;
    cout << a2.a << ", " << a2.p [0] << endl;
    cout << endl;
    a1.p [0] = 2;
    a1.a = 10;
    cout << "Original Content Changed and Deep Copied: " ;
    cout << a1.a << ", " << a1.p[0] << endl;
    cout << endl;
    cout << "Content not Changed after Deep Copy in the a2 object: " ;
    cout << a2.a << ", " << a2.p [0] << endl;


    return 0;
}
