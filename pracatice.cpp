#include "pracatice.h"
#include<iostream>
using namespace std;
practice::practice(){
	
	this -> real=10;
	this -> imag=20;
}
practice::practice(int r ,int i){
	
	this -> real=r;
	this -> imag=i;
}

void practice :: print(real,imag){
	cout<<real+imag;
}


;