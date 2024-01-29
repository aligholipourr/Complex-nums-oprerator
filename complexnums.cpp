#include <iostream>
using namespace std;

class Complex
{
public:

	Complex(float r, float i)
	{
		real = r;
		imag = i;
	};
	void set(float r, float i)
	{
		real = r;
		imag = i;
	}
	void disp()
	{
		cout << real << " + " << imag << "i" << endl;
	}
	Complex sum(Complex num1)
	{
		real = real + num1.real;
		imag = imag + num1.imag;
		
	return	Complex(real,imag);
		
	}
	Complex sub(Complex num1)
	{
		float temp1,temp2;
		temp1 = real - num1.real;
		temp2 = imag - num1.imag;
		return	Complex(temp1, temp2);
	}
private:
	float real;
	float imag;
};
int main()
{
	Complex o1(2, 3);
	Complex o2(1, 4);
    Complex o3=	o1.sum(o2);
	o1.set(3, 6);
	Complex o4 = o1.sub(o2);
	o1.disp();
	o2.disp();
	o3.disp();
	o4.disp();
}
