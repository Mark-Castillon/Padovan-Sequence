#include<iostream>
using namespace std;

int sum(int n)
{
	int aOne = 1, aTwo = 1, aThree = 1;
	int padovan;

	for (int i=0; i<=n; i++)
	{
		padovan = aOne + aTwo;
		aOne = aTwo;
		aTwo = aThree;
		aThree = padovan;
	}
	return padovan;
}

int term(int n)
{
    int padovan = 1, aOne = 1, aTwo = 1, aThree = 1;

    for (int i=4; i<=n; i++)
    {
        aThree = padovan + aOne;
        padovan = aOne;
        aOne = aTwo;
        aTwo = aThree;
    }
    return aThree;
}


int main()
{
	int n;
	cout << "Find the nth sum and nth term of padovan: ";
	cin >> n;
	cout << "The " << n << "th sum of padovan is " << sum(n) << "." << endl;
	cout << "The " << n << "th term of padovan is " << term(n) << "." << endl;
	return 0;
}
