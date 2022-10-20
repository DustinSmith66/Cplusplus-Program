class BankingApp {

public:
	double GetAnnualInterest();
	double GetInitAmt();
	double GetMonthlyDep();
	int GetNumYears();

	void DisplayMenu();
	void PrintData();
	void PrintNoMonthly();
	void PrintMonthly();
	void DisplayReports();
	void MenuChoice();

private:
	double annualInterest = 0;
	double initAmt = 0;
	double monthlyDep = 0;
	int numYears = 1;

	double* annualInterestPtr = &annualInterest;
	double* initAmtPtr = &initAmt;
	double* monthlyDepPtr = &monthlyDep;
	int* numYearsPtr = &numYears;

}; 
