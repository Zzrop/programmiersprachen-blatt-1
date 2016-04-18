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


	return 1;

}

TEST_CASE("größter gemeinsamer teiler","gcd"){

	REQUIRE(gcd(2,4) == 2);
	REQUIRE(gcd(6,9) == 3);
	REQUIRE(gcd(3,7) == 1);
}

TEST_CASE("berechnung der quersumme","checksum"){

	REQUIRE(checksum(223) == 6);
	REQUIRE(checksum(100) == 1);
	REQUIRE(checksum(115071) == 15);
}


int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
