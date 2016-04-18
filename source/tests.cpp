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

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
