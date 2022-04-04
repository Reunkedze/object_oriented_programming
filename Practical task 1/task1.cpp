#include <iostream>

using namespace std;

class Power {
public:
	float num1{ 0 };
	float num2{ 1 };

	void set()
	{
		cout << "Enter number 1 of class Power: ";
		cin >> this->num1;
		cout << "Enter number 2 of class Power: ";
		cin >> this->num2;
	}

	void calculate()
	{
		cout << this->num1 << " ^ " << this->num2 << " = " << pow(this->num1, this->num2);
	}
};

int main(int argc, const char** argv)
{
	Power model;

	model.set();
	cout << "Number 1 of class Power is " << model.num1 << endl;
	cout << "Number 2 of class Power is " << model.num2 << endl;
	model.calculate();

	return 0;
}