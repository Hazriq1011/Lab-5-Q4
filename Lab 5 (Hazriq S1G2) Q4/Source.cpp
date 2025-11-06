#include <iostream>
using namespace std;

int main()

{
	double eye1, nose_chin1;
	cout << "Enter values in cm." << endl;
	cout << "Enter eye distance and nose to chin distance for image 1 :" << endl;
	cin >> eye1 >> nose_chin1;

	double eye2, nose_chin2;
	cout << "Enter eye distance and nose to chin distance for image 2 :" << endl;
	cin >> eye2 >> nose_chin2;

	double eye3, nose_chin3;
	cout << "Enter eye distance and nose to chin distance for image 3 :" << endl;
	cin >> eye3 >> nose_chin3;

	double ratio_1, ratio_2, ratio_3;
	ratio_1 = eye1 / nose_chin1;
	ratio_2 = eye2 / nose_chin2;
	ratio_3 = eye3 / nose_chin3;

	double diff_1_2, diff_1_3, diff_2_3;
	diff_1_2 = abs(ratio_1 - ratio_2);
	diff_1_3 = abs(ratio_1 - ratio_3);
	diff_2_3 = abs(ratio_2 - ratio_3);

	if (diff_1_3 >= diff_1_2 && diff_2_3 >= diff_1_2)
	{
		cout << " Best  matches is between image 1 and image 2 "; 
	}

	else if (diff_1_2 >= diff_1_3 && diff_2_3 >= diff_1_3)
	{
		cout << " Best  matches is between image 1 and image 3 ";

	}

	else
	{
		cout << " Best  matches is between image 2 and image 3 ";
	}

	return 0;

}