#include<iostream>
using namespace std;

class sum;  // Forward declaration

class parent {
public:
    static int a;
    static int b;

    parent(int x, int y) {
        a = x;
        b = y;
    }
//friend class sum;
    friend void sumValues(parent& p);  // Declare sumValues as a friend function
};

class sum {
public:
    void sumValues(parent& p) {
        int x = p.a;
        int y = p.b;
        cout << "Sum: " << x + y << endl;
    }
};

// Define the static members of the parent class
int parent::a = 0;
int parent::b = 0;

int main() {
    parent p(10, 20);
    sum s;
    
    s.sumValues(p);  // Call the member function
    
    return 0;
}

