#include <iostream>
#include <cmath> 
#include <cstdlib>

using namespace std;

int main() {
    double principal, interestRate;
    int compound;

    //Interaction
    std::cout << "Enter the initial principal amount: $";
    std::cin >> principal;
    std::cout << "Enter the interest rate as a decimal:";
    std::cin >> interestRate;
    std::cout << "Enter the number of times the interest is compounded per year: ";
    std::cin >> compound;

    //clear screen
#ifdef _WIN32
    system("CLS"); // Windows
#else
    system("clear"); // Linux/macOS
#endif


    //Calculation
    double amount_in_savings = principal * pow(1 + (interestRate / compound), compound);
    double interest = amount_in_savings - principal;

    //Present Results
    std::cout << "Interest Rate: " << interestRate << " %\n";
    std::cout << "Times Compounded: " << compound << endl;
    std::cout << "Principle:  $" << principal << endl;
    std::cout << "Interest: $" << interest << endl;
    std::cout << "Amount in Savings: $" << amount_in_savings << endl;


    return 0;
}

