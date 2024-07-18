#include<iostream>

using namespace std;
class oop{
	private:
		int nos;
		int total_q;
		int total_a;
	protected:
			int A_o_R[6]={1,2,3,4,5,6};
			int A_o_q[6];
			int qiuz_no;
			
	
		public:
		oop(){
			cout<<"ENTER QUIZ NO: ";
			cin>>qiuz_no;
		}	
					
		void quiz_result(){
			
			for(int i=0;i<6;i++){
			 A_o_q[i]=2*i+7;			 
			}
			
		}
			void display(){
			for(int i=0;i<6;i++){
			cout<<"MARKS OF STUDENT "<<A_o_R[i]<<" is "<<A_o_q[i]<<" in quiz "<<qiuz_no<<endl;		 
			}
			}
			
			
		
};
class oop_lab{
	
};
class PF{
	
};
class PF_lab {
	 
};
class ammar: public PF_lab,public oop_lab{
	
};
class raffy: public oop,public PF,public oop_lab{
	
};

int main(){
oop year2022;
year2022.quiz_result();
year2022.display();	
	
}
