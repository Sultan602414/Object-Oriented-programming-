#include <iostream>
#include <cmath>
using namespace std;
class distance{
    private:
    int a,b,c,d,dist;
    distance(){
    	a=4;b=5;c=5;d=9;
    
    dist = pow(c-a,2) + pow(d-b,2);
    dist=sqrt(dist);
    
    }
    void print(){
        cout<<"THE DISTANCE is "<< dist;
    }
};
int main() {
	
   distance d1();
   d1.print;
    

    return 0;
}