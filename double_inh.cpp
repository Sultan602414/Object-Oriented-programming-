#include <iostream>
using namespace std;
class p1
{public:
	p1(){
		
		cout<<"i am papa 1"<<endl;
		
	}
};
class p2
{public:
	p2(){
		
		cout<<"i am papa 2"<<endl;
	}
};
class child : public p1,public p2
{ public:
	child(){
			
		cout<<"i am  child of them"<<endl;
	}
};

int main() 
{
	child c1;
	
}
