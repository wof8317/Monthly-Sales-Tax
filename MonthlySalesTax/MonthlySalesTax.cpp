// A C++ program to calculate the monthly sales tax for a business
#include <iostream>
#include <iomanip> // used for setprecision() and setw()
using namespace std;

int main()
{
	// initialized variables needed for input/output and calculations
	string month = "";
	double year = 0;
	double totalSales = 0;
	cout << "---------------------------------------------------------------------" << endl;
	cout << "This company must file a monthly sales tax report listing the sales" << endl;
	cout << "from the month and the amount of sales tax collected.";
	cout << "\nPlease input data when asked to find the monthly sales tax. Thanks." << endl;
	cout << "---------------------------------------------------------------------" << endl;
	// user will input the month, year, and total sales collected with tax
	cout << "Please enter the month of sales. ";
	cin >> month;
	cout << "Please enter the year of sales. ";
	cin >> year;
	cout << "Please enter the total register sales Collected. $ ";
	cin >> totalSales;
	// all calculations done below for the final values
	double sales = totalSales / 1.06;
	double countyTax = sales * 0.02;
	double stateTax = sales * 0.04;
	double totalTax = countyTax + stateTax;
	/* Output all results from input and calculations into 2 decimal places, hence the "setprecision(2)".
	   Note that I used "fixed" after setting the precision. This is because that without it, all values will
	   output in expanded notation instead of fixed decimal places. eg: $1.2e+05 instead of $123456.00.s
	*/
	cout << "\n\nFor " << month << ", " << year << endl;
	cout << "------------------------------------" << endl;
	cout << setprecision(2) << fixed;
	cout << "Total Collected" << setw(6) << "$" << setw(12) << totalSales << endl;
	cout << "Sales" << setw(16) << "$" << setw(12) << sales << endl;
	cout << "County Sales Tax" << setw(5) << "$" << setw(12) << countyTax << endl;
	cout << "State Sales Tax" << setw(6) << "$" << setw(12) << stateTax << endl;
	cout << "Total Sales Tax" << setw(6) << "$" << setw(12) << totalTax << endl;
	return 0;
}