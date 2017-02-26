/*expressionExample.cpp
Feb 25, 2017
Jayson Mallari
*/
#include <iostream>
using namespace std;
int main()
{
	// ############################## RECTANGLE ##############################
	double length , width, area , perimeter;

	//Ask user to enter the value of the rectangle .
	cout<<"Please enter the length follow by the width of the rectangle"<<endl;
	cin>>length;
	cin>>width;

	//Calculate the area for the rectangle .
	area = length * width;

	//Calculate the perimeter for the rectangle .
	perimeter = 2*length + 2*width;

	//Display the total area and perimeter value .
	cout<<"The area of our rectangle is : "<<area<<" , And the perimeter is"<<perimeter<<endl;

	// ############################## CIRCLE #################################
	double radius, circleArea, circumference;

	//Ask user to enter the radius
	cout<<"Please enter the radius of the circle"<<endl;
	cin>>radius;

	//Calculate the circle area .
	circleArea = 3.14 * radius * radius ;

	//Calculate the circumference .
	circumference = ( 2 * 3.14 ) * radius;

	//Display the circle area and circumference output .
	cout<< "The circle area is : "<<circleArea<<" , And the circumference is : "<<circumference<<endl;

	// ######################### String Concatenation ########################
	 string firstName , lastName ;

	 //Ask user to input their first name .
	 cout<<"First Name : "<<endl;
	 cin>>firstName;

	 //Ask user to input their last name .
	 cout<<"Last Name : "<<endl;
	 cin>>lastName;

	 //Display users full name .
	 cout<<"Welcome, "<<firstName<<" "<<lastName<<" !"<<endl;



return 0;
}
