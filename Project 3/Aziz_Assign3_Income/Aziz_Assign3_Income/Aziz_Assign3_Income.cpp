#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() 
{
	char Fname[35];
	char Lname[35];
	float GrossAmount, fedIncome, stateTax, SSTax, MedTax, Pension, HealthIns;

	cout << "Income Tax Calculator " << endl;
	
	cout << "\n" << endl;

	cout << "Author: Lowell Polite " << endl;
	cout << "Date: Mar. 27th, 2019 " << endl;
	cout << "Long Beach City College " << endl;
	cout << "================================" << endl;

	
	fedIncome = 15;
	stateTax = 3.5;
	SSTax = 5.75;
	MedTax = 2.75;
	Pension = 5;
	HealthIns = 75;

	cout << "\n" << endl;


	cout << "Enter your first and last name: ";
	cin >> Fname >> Lname;

	cout << "\n" << endl;

	cout << "Enter your Gross Amount: $";
	cin >> GrossAmount;
	
	cout << "\n" << endl;
	
	ofstream outputFile;
	outputFile.open("PrintTaxes.txt");

	

	if (outputFile.is_open())
	{
		outputFile << Fname << " " << Lname << endl << endl;

		outputFile << setfill('.');

		outputFile << fixed << setprecision(2);

		outputFile << setw(30) << left << "Gross Amount: " 
				   << setw(15)	<< right << "$" << GrossAmount << endl << endl;
		outputFile << setw(30) << left << "Federal Tax: " 
				   << setw(15) << right	<< "$" << (GrossAmount*fedIncome) / 100 << endl;
		outputFile << setw(30) << left << "State Tax: " 
				   << setw(15) << right << "$" << (GrossAmount*stateTax) / 100 << endl;
		outputFile << setw(30) << left <<  "Social Security Tax: " 
				   << setw(15) << right << "$" << (GrossAmount*SSTax) / 100 << endl;
		outputFile << setw(30) << left << "Medicare/Medicaid Tax: " 
				   << setw(15) << right << "$" << (GrossAmount*MedTax) / 100 << endl;
		outputFile << setw(30) << left << "Pension Plan: " 
				   << setw(15) << right << "$" << (GrossAmount*Pension) / 100 << endl;
		outputFile << setw(30) << left << "Health Insurance: " 
			       << setw(15) << right << "$" << HealthIns << endl;
		outputFile << setw(30) << left << "Net Pay: " 
				   << setw(15) << right << "$" << GrossAmount - ((GrossAmount*fedIncome / 100) + (GrossAmount*stateTax / 100) + (GrossAmount*SSTax / 100) + (GrossAmount*MedTax / 100) + (GrossAmount*Pension / 100) + (HealthIns)) << endl;		
	}

	cout << Fname << " " << Lname << endl << endl;

	cout << setfill('.');

	cout << fixed << setprecision(2);

	cout << setw(30) << left << "Gross Amount: "
		 << setw(15) << right << "$" << GrossAmount << endl << endl;
	cout << setw(30) << left << "Federal Tax: "
		 << setw(15) << right << "$" << (GrossAmount*fedIncome) / 100 << endl;
	cout << setw(30) << left << "State Tax: "
		 << setw(15) << right << "$" << (GrossAmount*stateTax) / 100 << endl;
	cout << setw(30) << left << "Social Security Tax: "
		 << setw(15) << right << "$" << (GrossAmount*SSTax) / 100 << endl;
	cout << setw(30) << left << "Medicare/Medicaid Tax: "
		 << setw(15) << right << "$" << (GrossAmount*MedTax) / 100 << endl;
	cout << setw(30) << left << "Pension Plan: "
		 << setw(15) << right << "$" << (GrossAmount*Pension) / 100 << endl;
	cout << setw(30) << left << "Health Insurance: "
		 << setw(15) << right << "$" << HealthIns << endl;
	cout << setw(30) << left << "Net Pay: "
		 << setw(15) << right << "$" << GrossAmount - ((GrossAmount*fedIncome / 100) + (GrossAmount*stateTax / 100) + (GrossAmount*SSTax / 100) + (GrossAmount*MedTax / 100) + (GrossAmount*Pension / 100) + (HealthIns)) << endl;


	outputFile.close();

	cout << "\n" << endl;

	cout << "Thank you for using this program!\n";

	cout << "\n" << endl;

	system("pause");


	return 0;
}