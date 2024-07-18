#include <iostream>
using namespace std;
class dublicate{
	public:
	 int arr[10];
	 int x ,y,z;
	 
	 dublicate(){
	 	arr[0]=2;
	 	arr[1]=4;
		 arr[2]=8;
		 arr[3]=2;
		 arr[4]=1;
		 arr[5]=5;
		 arr[6]=2;
	 	arr[7]=1;
	 	arr[8]=8;
	 	arr[9]=9;	
	 }
	 void display(){
	 	for(int i=0;i<10;i++){
	 		cout<<arr[i]<<" ";
		 }
	}
	void shufle(int x,int y){
		int z;
		z=x;
		x=y;
		y=z;
		
	}
	void sort(int arr[]){
		for (int i=0;i<10;i++){
			for(int x=0;x<10;x++){
			
			if (arr[i]>arr[i+1]){
				shufle(arr[i],arr[i+1]);
			}
		}
	}
	}
	
};
int main(){
	dublicate db;
	db.display();
	db.sort(db.arr);
	cout<<endl;
	db.display();

}
