#include <iostream>

using namespace std;

bool isPowerOfTwo(uint64_t number);
int log2_asm(const uint64_t& x);

int main()
{
	bool flag = false,flag2 = false;
	uint64_t number, steps = 0, calcSteps = 0;
	cout << "Enter number." << endl;
	cin >> number;
	cout << endl << endl;

	do
	{
		if ((isPowerOfTwo(number)) && (flag == false))
		{
			cout << "Number before division to 1: " << number << endl << "Steps: " << steps << endl;
			calcSteps = steps + log2_asm(number);
			flag = true;
			//break; 
		}
			

		if ((number & 1) == true)
			number = number * 3 + 1;
		else
			number = number >> 1;
		steps++;
		cout << "number = " << number << endl;
	} while (number != 1);
	cout << "Total calculated Steps: " << calcSteps << endl << endl;
	return(0);
}

bool isPowerOfTwo(uint64_t number)
{
	return number && (!(number & (number - 1)));
}
int log2_asm(const uint64_t& nX)
{
	int xx = nX;
	__asm{
		mov eax,xx;
		bsr eax,eax;
		mov xx,eax;
	}
	return xx;
}
