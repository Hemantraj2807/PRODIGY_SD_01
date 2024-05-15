#include <iostream>
using namespace std;

int main() {
    cout<<"TEMPERATURE CONVERSION SYSTEM"<<endl;
    
    while(true){
    double temp;
	cout<<"Enter The Value of Temperature: ";
	cin>>temp;
    
    cout<<"Enter the unit of Temperature(C, F, K): ";

	string unit;
	cin>>unit;

	if(unit=="C"){

		double kelvin = temp + 273.15;
		cout<<"The Temperature in Kelvin is: "<<kelvin<<"K"<<endl;

		double Fahrenheit = (temp * 9/5) + 32;
		cout<<"The Temperature in Fahrenheit is: "<<Fahrenheit<<"°F"<<endl;
		break;
	}else if(unit=="K"){
		double celsius = temp - 273.15;
		cout<<"The Temperature in Celsius is: "<<celsius<<"°C"<<endl;

		double Fahrenheit = (temp - 273.15)*9/5 + 32;
		cout<<"The Temperature in Fahrenheit is: "<<Fahrenheit<<"°F"<<endl;
		break;
	}else if(unit=="F"){
		double celsius = (temp - 32)*5/9;
		cout<<"The Temperature in Celsius is: "<<celsius<<"°C"<<endl;

		double kelvin = (temp - 32) * 5/9 + 273.15;
		cout<<"The Temperature in Kelvin is: "<<kelvin<<"K"<<endl;
		break;
	}else{
		cout<<"Invalid Text"<<endl;
		
	}
 }

    return 0;
}