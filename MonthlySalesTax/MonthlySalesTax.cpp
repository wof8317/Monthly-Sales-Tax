#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	string month = "";
	double year = 0;
	double totalSales = 0;
	cout << "---------------------------------------------------------------------" << endl;
	cout << "This company must file a monthly sales tax report listing the sales" << endl;
	cout << "from the month and the amount of sales tax collected.";
	cout << "\nPlease input data when asked to find the monthly sales tax. Thanks." << endl;
	cout << "---------------------------------------------------------------------" << endl;
	cout << "Please enter the month of sales. ";
	cin >> month;
	cout << "Please enter the year of sales. ";
	cin >> year;
	cout << "Please enter the total register sales Collected. $ ";
	cin >> totalSales;
	double sales = totalSales / 1.06;
	double countyTax = sales * 0.02;
	double stateTax = sales * 0.04;
	double totalTax = countyTax + stateTax;
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