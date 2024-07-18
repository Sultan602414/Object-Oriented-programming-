#include<iostream>
using namespace std;
int main(){
	int x=0;
	cin>>x;
	while(x>=0){
		x-=2;	
	}
if (x == 0 || x == -2) {
    cout << "IT'S AN EVEN NUMBER" << endl;
}
else {
    cout << "IT'S AN ODD NUMBER" << endl;
}

}
