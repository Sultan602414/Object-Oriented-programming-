#include <iostream>
using namespace std;
class sum{
	int a ,b;
	public:
		void setvalue(int x,int y){
			a=x;
			b=y;
		}
		friend sum subtrct_of_numbers(sum n1,sum n2);
		friend sum sum_of_numbers(sum n1,sum n2);
		void printnumber(){
			cout<<"your number is ("<<a<<","<<b<<")"<<endl;
		}
};
sum sum_of_numbers(sum n1,sum n2){
	sum n3  ;
	n3.setvalue((n1.a+n2.a), (n1.b+n2.b));
	return n3;
}
sum subtrct_of_numbers(sum n1,sum n2){
	sum n3 ;
	n3.setvalue((n1.a-n2.a), (n1.b-n2.b));
	return n3;
}
int main(){
	sum s1,s2,sum,sub;
	s1.setvalue(4,4);
	s1.printnumber();
	s2.setvalue(1,6);
	s2.printnumber();
	sum=sum_of_numbers(s1,s2);
	cout<<"the sum of ";
	sum.printnumber();
	sub=subtrct_of_numbers(s1,s2);
	cout<<"the subtraction of ";
	sub.printnumber();
}
