// Lab3(4).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdlib.h> 

using namespace std;

class Square
{
protected:
	double l;
public:
	Square(double l1)
	{
		l = l1;
	}
	virtual void print()
	{
		cout <<"\nl=" << l;
	}
    virtual	int Space(double l)
	{
		double s;
		s= pow(l, 2);
		cout << "\ns=" << s;
		return 0;
	}
	

};
class Cube : public Square
{
	double l2;
public:
	Cube(double l) :
		Square(l)
	{
		l2 = l;
	}
	void print()
	{
		Square::print();

		cout << " l2=" << l2;
	}
	int Space(double l)
	{
		double v;
		Square::Space(l);
		v = pow(l2, 3);
		cout << "\nv=" << v;
		return 0;
	}
	Cube & operator = (const Cube& a)
	{
		l = a.l;
		l2 = a.l;
		return *this;
	}
};

int main(int argc, char* argv[])
{
	double l,l2;
	cout << "Length=";
	cin >> l;
	Square p1(l);
	Cube p2(l);
	Square *pp;
	pp = &p1;
	pp->print();
	pp->Space(l);
	pp = &p2;
	pp->print();
	pp->Space(l);
	Cube p3(1);
	p2 = p3;
	p2.print();
	system("pause");
	return 0;
}

