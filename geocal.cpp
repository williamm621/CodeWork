
#include <iostream> // Beginning of program
#include <cmath> // The use of <cmath> helps the program perform math operations such as calculating the area of shapes, which will be a circle, rectangle and triangle 
#include <string> // The usage of <string> is converted in characters, which is used for single or double floats
using namespace std;



int main()
{
	// The user will be greeted with a menu in which give them the option to choose the following letters: A, B, C, or D. All options calculate the area, however, of different shapes. D simply ends the program.
	cout << "\t   *****************************" << endl;
	cout << "\t" << "   *****" << "Geometry Calculator" << "*****" << endl;
	cout << "\t   *****************************" << endl;
	cout << "\t A. Calculate the Area of a Circle\n\n";
	cout << "\t B. Calculate the Area of a Rectangle\n\n";
	cout << "\t C. Calculate the Area of a Triangle\n\n";
	cout << "\t D. Quit\n\n";

	const float pi = 3.14159; // The constant float is used when decimal numbers are needed, that way pi won't be considered as a whole number. Rather than 3, it would come out to 3.14159 when multiplied. However, when multiplied it will round up to the whole number.
	char userChoice;
	char userchoice2;
	char continue2;
	//
	do {


		cout << "What would you like to calculate?\n";
		cout << "Please enter a choice between A, B, C, or D.\n";
		cin >> userChoice;



		if ((userChoice == 'A' || userChoice == 'a') || (userChoice == 'B' || userChoice == 'b') || (userChoice == 'C' || userChoice == 'c') || (userChoice == 'D' || userChoice == 'd')) // The user chooses one of the options, will then send them to any of the following to look for the area of the shape they've chosen
		{


			if (userChoice == 'A' || userChoice == 'a') //Area of circle
			{
				float radius;
				float posRadius;
				float circleArea;

				cout << "Please enter a radius to calculate the area of a circle: ";
				cin >> radius;

				if (radius < 0)
				{
					posRadius = radius * -1;
					circleArea = pi * pow(radius, 2);
					cout << "\nThe radius given was turned to positive since a measurement can never be negative, so the area of the circle is " << circleArea << endl;
				}

				else
				{
					circleArea = pi * pow(radius, 2);
					cout << "\nThe area of the circle with the given value of " << radius << " is " << circleArea << endl;
				}

				cout << "\ncontinue? (Y/N) ";
				cin >> continue2;

			}

			{
				float length;
				float width;
				float recArea;

				cout << "Please enter a length and a width to calculate the area of a rectangle.\n";
				cout << "Length: "; // Area of rectangle
				cin >> length;
				cout << "Width: ";
				cin >> width;

				if (length < 0 || width < 0)
				{
					cout << "Please try again using a positive numbers."; //If user types anything other than a number, it'll tell them to try again
				}
				else
				{
					recArea = length * width;
					cout << "\nThe area of the triangle with the given length of " << length << " and width of " << width << " is " << recArea << endl;
				}

				cout << "\nContinue? (Y/N) ";
				cin >> continue2;


			}

			if (userChoice == 'C' || userChoice == 'c') //Area of triangle
			{
				float baseLength;
				float heightOfTriangle;
				float areaOfTriangle;

				cout << "Please enter a base length and a height to calculate the area of a triangle.\n";
				cout << "Base length: ";
				cin >> baseLength;
				cout << "Height: ";
				cin >> heightOfTriangle;

				if (baseLength < 0 || heightOfTriangle < 0)
				{
					cout << "Please try again using positive numbers.";
				}
				else
				{
					areaOfTriangle = baseLength * heightOfTriangle;
					areaOfTriangle = areaOfTriangle / 2;
					cout << "\nThe area of a triangle with the given base of " << baseLength << " and height of " << heightOfTriangle << " is " << areaOfTriangle << endl;
				}

				cout << "\nContinue? (Y/N) ";
				cin >> continue2;

			}

			if (userChoice == 'D' || userChoice == 'd') // If the user decides to end the program, then they will receive the following message: "Have a good day"
			{
				cout << "\nHave a good day";
			}

		}
		else
		{
			cout << "\nPlease select a valid option between A, B, C, or D.";
		}
	}

	while (continue2 == 'Y' || continue2 == 'y');
	// If the user would like to continue, they receive a piece of the intro asking if they would like to go again. This does not mean it's the end of the loop, however, it can be the start of the loop


	system("pause>0");
} //End of program