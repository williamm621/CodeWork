#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double scoreTotal1; // Using double for decimal answers
	double scoreTotal2;
	double scoreTotal3;
	double scoreAverage; // Score average of all 3 tests
	double scoreTotalofAllTests; // Total Sum of all tests

	cout << "Test Score #1 "; // Test Score 1
	cin >> scoreTotal1;

	cout << "Test Score #2 "; // Test Score 2
	cin >> scoreTotal2;

	cout << "Test Score #3 "; // Test Score 3
	cin >> scoreTotal3;

	cout << "=========" << endl;


	cout << setprecision(4) << "Sum of total scores is " << scoreTotal1 + scoreTotal2 + scoreTotal3 << endl;

	scoreTotalofAllTests = scoreTotal1 + scoreTotal2 + scoreTotal3; // Formula for Sum of All Tests

	scoreAverage =
		scoreTotalofAllTests / 3; // Formula of Score average

	cout << setprecision(4) << "Average of scores is " << scoreAverage << endl; // Average of all test scores

	return 0;
}