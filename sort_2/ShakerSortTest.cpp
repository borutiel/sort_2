#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "ShakerSort.h"


TEST_CASE() {
	int Array[5] = { 2, 6, 5, 3, 9 };
	int c = 5;
	ShakerSort(Array, c);
	for (int i = 0; i < c - 1; i++) {
		REQUIRE(Array[i] <= Array[i + 1]);
	}
	int Array2[5] = {};
	ShakerSort(Array2, c);
	for (int i = 0; i < c - 1; i++) {
		REQUIRE(Array2[i] <= Array2[i + 1]);
	}
	double Array3[5] = { 2.3, 5, -1, 8, -20 };
	ShakerSort(Array3, c);
	for (int i = 0; i < c - 1; i++) {
		REQUIRE(Array3[i] <= Array3[i + 1]);
	}

}
int main(int argc, char* argv[]) {

	Catch::Session session;


	int returnCode = session.applyCommandLine(argc, argv);
	if (returnCode != 0) {
		return returnCode;
	}

	int result = session.run();


	return result;
}