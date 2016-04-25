#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

int gcd(int a, int b){

	while(b != 0){
		int c = a%b;

		a=b;
		b=c;
	}

	return a;
}

int checksum(int a){
	int b = 0;

	while(a!=0){
		b = b+(a%10);
		a = (a-(a%10))/10; 
	}

	return b;


}

int sumMultiples(){

	int c = 0;

	for(int i = 1; i <= 1000; i++){
		if(i%3 == 0){
			c = c+i;
		}

		else if(i%5 == 0){
			c = c+i;
		}
	}

	return c;
}

int sumMultiplesnum(int a){

	int c = 0;

	for(int i = 1; i <= a; i++){
		if(i%3 == 0){
			c = c+i;
		}

		else if(i%5 == 0){
			c = c+i;
		}
	}

	return c;
}

float fract(float a){

	int b = a;

	a= a-b;

	return a;
}

float surfacez(float a, float b){

	 return 2*(M_PI)*pow(a,2.0)+2*(M_PI)*a*b;
}

float volumez(float a,float b){

	return (M_PI)*pow(a,2.0)*b;
}


TEST_CASE("größter gemeinsamer teiler","gcd"){

	REQUIRE(gcd(2,4) == 2);
	REQUIRE(gcd(6,9) == 3);
	REQUIRE(gcd(3,7) == 1);
}

TEST_CASE("berechnung der quersumme","checksum"){

	REQUIRE(checksum(123) == 6);
	REQUIRE(checksum(100) == 1);
	REQUIRE(checksum(115071) == 15);
}

TEST_CASE("addition der durch 3 und 5 teilbaren Zahlen","sumMultiples"){

	REQUIRE(sumMultiplesnum(3) == 3);
	REQUIRE(sumMultiplesnum(5) == 8);
	REQUIRE(sumMultiplesnum(9) == 23);
	REQUIRE(sumMultiplesnum(11) == 33);
	REQUIRE(sumMultiples() == 234168);

}

TEST_CASE("berechnung des nachkomma-anteils","fract"){

	REQUIRE(fract(4.0/3.0) == Approx(0.33333));
	REQUIRE(fract(1.0/3.0) == Approx(0.33333));
	REQUIRE(fract(3.0/4.0) == Approx(0.75));

}

TEST_CASE("Zylinder funktionen","surfacez/volumez"){

	REQUIRE(surfacez(1.0,3.0) == Approx(25.133));
	REQUIRE(volumez(1.0,3.0) == Approx(9.42478));

	REQUIRE(surfacez(0.5,1.0) == Approx(4.71238));
	REQUIRE(volumez(0.5,1.0) == Approx(0.785398));

}
int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
