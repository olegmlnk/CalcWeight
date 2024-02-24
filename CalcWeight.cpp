#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double gram, kilogram, ton, milligram, pound;

	cout << "What type of weight do we have?" << endl;
	cout << "1.Gram" << endl;
	cout << "2.Kilogram" << endl;
	cout << "3.Ton" << endl;
	cout << "4.Milligram" << endl;
	cout << "5.Pound" << endl;
	cout << "============================================================================================" << endl;
	
	int choice_1;
	cout << "Your choice is: ";
	cin >> choice_1;
	switch (choice_1)
	{
	case 1:
		cout << "Enter the weight: " << endl;
		cin >> gram;
		if (gram == 1 || gram < 1)
		{
		cout << "Our weight is " << gram << " gram" << endl;
		}
		else
		{
			cout << "Our weight is " << gram << " grams" << endl;
		}
		cout << "============================================================================================" << endl;
		cout << "Our weight in grams equals to: " << endl;
		kilogram = gram / 1000;
		cout << kilogram << " in kilograms" << endl;
		ton = gram / 1000000;
		cout << ton << " in tons" << endl;
		milligram = gram * 1000;
		cout << milligram << " in milligrams" << endl;
		pound = gram / 453.59;
		cout << pound << " in pounds" << endl;
		break;
	case 2:
		cout << "Enter the weight: " << endl;
		cin >> kilogram;
		if (kilogram == 1 || kilogram < 1)
		{
			cout << "Our weight is " << kilogram << " kilogram" << endl;
		}
		else
		{
			cout << "Our weight is " << kilogram << " kilograms" << endl;
		}
		cout << "============================================================================================" << endl;
		cout << "Our weight in kilograms equals to: " << endl;
		gram = kilogram * 1000;
		cout << gram << " in grams" << endl;
		ton = kilogram / 1000;
		cout << ton << " in tons" << endl;
		milligram = kilogram * 1000000;
		cout << milligram << " in milligrams" << endl;
		pound = kilogram * 2.205;
		cout << pound << " in pounds" << endl;
		break;
	case 3:
		cout << "Enter the weight: " << endl;
		cin >> ton;
		if (ton == 1 || ton < 1)
		{
			cout << "Our weight is " << ton << " ton" << endl;
		}
		else
		{
			cout << "Our weight is " << ton << " tons" << endl;
		}
		cout << "============================================================================================" << endl;
		cout << "Our weight in tons equals to: " << endl;
		gram = ton * 1000000;
		cout << gram << " in grams" << endl;
		kilogram = ton * 1000;
		cout << kilogram << " in kilograms" << endl;
		milligram = ton * 1000000000;
		cout << milligram << " in milligrams" << endl;
		pound = ton * 2204.6;
		cout << pound << " in pounds" << endl;
		break;
	case 4:
		cout << "Enter the weight: " << endl;
		cin >> milligram;
		if (milligram == 1 || milligram < 1)
		{
			cout << "Our weight is " << milligram << " milligram" << endl;
		}
		else
		{
			cout << "Our weight is " << milligram << " milligrams" << endl;
		}
		cout << "============================================================================================" << endl;
		cout << "Our weight in milligrams equals to: " << endl;
		gram = milligram * 1000;
		cout << gram << " in grams" << endl;
		kilogram = milligram * 1000000;
		cout << kilogram << " in kilograms" << endl;
		ton = milligram * 1000000000;
		cout << ton << " in tons" << endl;
		pound = milligram * 453592.37;
		cout << pound << " in pounds" << endl;
		break;
	case 5:
		cout << "Enter the weight: " << endl;
		cin >> pound;
		if (pound == 1 || pound < 1)
		{
			cout << "Our weight is " << pound << " pound" << endl;
		}
		else
		{
			cout << "Our weight is " << pound << " pounds" << endl;
		}
		cout << "============================================================================================" << endl;
		cout << "Our weight in pound equals to: " << endl;
		gram = pound * 453.59;
		cout << gram << " in grams" << endl;
		kilogram = pound * 0.453592;
		cout << kilogram << " in kilograms" << endl;
		ton = pound * 2204.62;
		cout << ton << " in tons" << endl;
		milligram = pound * 453.59237;
		cout << milligram << " in milligrams" << endl;
		break;
	default:
		cout << "Something went wrong(" << endl;
		break;
	}
	cout << "============================================================================================" << endl;

	return 0;
}
