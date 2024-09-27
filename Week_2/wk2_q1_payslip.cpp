#include <iostream>
#include <iomanip> //this is to use the functions setw and std where i'll be using when making the table format for this employee payslip
using namespace std;

//wk_2_q1_payslip
//Ratu Faiha Salsabilla Rahmadina_532756

int main()
{
string name; 
double Name; 
double BaseSalary; 
double GrossSalaryPercentage; 
double TaxRate = 0.20; //20% tax rate off the gross salary
double Installment; 
double Insurance; 

//employee details
cout << "Enter employee's name: ";
getline(cin,name);

cout << "Enter Base Salary: Rp. ";
cin >> BaseSalary;

cout << "Enter Gross Salary Percentage: ";
cin >> GrossSalaryPercentage;

cout << "Enter Installment amount: Rp. ";
cin >> Installment;

cout << "Enter Insurance amount: Rp. ";
cin >> Insurance;

double GrossSalary = (GrossSalaryPercentage/100.0)*BaseSalary; //this calculates the gross salary which is a percentage of the base salary

double tax = 0.20*GrossSalary; //this calculates the tax rate, which is 20% of the employee's gross salary

double NetSalary = GrossSalary - tax - Installment - Insurance; //this calculates the net salary of the employee by deducting the respected data

//Below I am going to attempt in making the 'pay slip for employees' in a table format 
//setw defines the width of the output
cout << fixed << setprecision(2); //this sets the format to 2 decimal places
cout << endl;
cout << "---------------------------" << endl;
cout << "| Payslip for Employee    |" << endl;
cout << "---------------------------" << endl;
cout << "| Name: " << name << endl;
cout << "| Base Salary: " << "Rp. " << BaseSalary << endl;
cout << "| Gross Salary: " << GrossSalary << "%" << endl;
cout << "| Tax Rate (20%): " << "Rp. " << TaxRate << endl;
cout << "| Installment amount: " << "Rp. " << Installment << endl;
cout << "| Insurance amount: " << "Rp. " << Insurance << endl;
cout << "---------------------------" <<endl;
cout << "| Net Salary: " << "Rp. " << NetSalary << endl; 
cout << "---------------------------" << endl;

return 0;
}