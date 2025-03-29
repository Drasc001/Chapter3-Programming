#include <iostream>
using namespace std;

int main()
{
	double Scupesofsugar = 1.5 / 48;
	double Scupsofbutter = 1.0 / 48;
	double Scupsofflour = 2.75 / 48;

	int howmanycookies;
	cout << "How many cookies do you need:";
	cin >> howmanycookies;

	double cupsofsugar = Scupesofsugar * howmanycookies;
	double cupsofbutter = Scupsofbutter * howmanycookies;
	double cupsofflour = Scupsofflour * howmanycookies;

	cout << " you need " << cupsofsugar << " cups of sugar\n";
	cout << " You need " << cupsofbutter << " cups of butter\n";
	cout << " You need " << cupsofflour << " cups of flour\n";
}
