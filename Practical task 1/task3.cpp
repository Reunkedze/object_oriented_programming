#include <iostream>
#include <cstdint>

using namespace std;

const int stackSize{ 10 };

class Stack
{
private:
	int arr[stackSize];
	int len;

public:
	void reset()
	{
		len = 0;
		for (size_t i = 0; i < 10; i++)
		{
			arr[i] = 0;
		}
	}

	bool push(int value)
	{
		bool full{ 0 };
		bool empty{ 0 };

		if (arr[0] == 0)
		{
			empty = 1;
		}
		
		if (arr[stackSize - 1] != 0)
		{
			full = 1;
		}
		
		if (!full)
		{
			for (size_t i = 0; i < stackSize; i++)
			{
				if (arr[i] == 0)
				{
					arr[i] = value;
					break;
				}
			}
		}
		return !full;
	}

	int pop()
	{
		int result;
		if (arr[0] == 0)
		{
			cout << "Stack empty" << endl;
			return 0;
		}
		for (size_t i = 0; i < stackSize; i++)
		{
			if (arr[i] == 0)
			{
				result = arr[i - 1];
				arr[i - 1] = 0;
			}
		}
		return result;
	}

	void print()
	{
		cout << "( ";
		for (size_t i = 0; i < stackSize; i++)
		{
			if ( arr[i] != 0 )
			cout << arr[i] << " ";
		}
		cout << ")";
		cout << endl;
	}
};

int main(int argc, const char** argv)
{
	Stack stack;
	stack.reset();
	stack.print();

	stack.push(3);
	stack.push(7);
	stack.push(5);
	stack.print();

	stack.pop();
	stack.print();

	stack.pop();
	stack.pop();
	stack.print();

	return 0;
}
