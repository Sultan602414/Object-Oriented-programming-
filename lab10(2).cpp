#include<iostream>
using namespace std;

class Drawable
{
public:
	virtual void Draw()
	{
		
	}

	virtual string getDescription()
	{
		return "Shape description";
	}
};

class circle : public Drawable
{
public:
	void Draw()
	{
		cout<<"Draw a Circle\n";
	}

	string getDescription()
	{
		return "This is circle\n\n";
	}
};

class square : public Drawable
{
public:
	void Draw()
	{
		cout<<"Draw a Square\n";
	}

	string getDescription()
	{
		return "This is square\n\n";
	}
};

int main()
{
Drawable *obj[2];

obj[0] = new circle;
obj[1] = new square;

for(int i=0; i<3; i++)
{
	obj[i]->Draw();
	cout<<obj[i]->getDescription();
}

}
