#include <iostream>
#include <string>

double mileToKilometer(double a){
	return a*1.60934;
}

int main(){
	std::cout <<" Please enter the miles you want converted to kilometres : "
	<<std::endl ;
	double a;
	std::cin >> a;

	std::cout <<a <<" mile/s equal " <<mileToKilometer(a) <<"km " <<std::endl;


}