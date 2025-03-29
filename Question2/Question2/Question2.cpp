#include <iostream>
using namespace std;

int main()
{
	double randomnum1 = rand();
	double randomnum2 = rand();

	double answer = randomnum1 + randomnum2;

	cout << randomnum1 << " + " << randomnum2 << "=";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	cout << answer;
}
