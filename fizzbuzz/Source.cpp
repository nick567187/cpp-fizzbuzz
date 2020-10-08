#define CATCH_CONFIG_MAIN
#include "catch.hpp"
using namespace std::string_literals;

std::string fizzBuzz(int num)
{
	std::string result;
	if (num % 3 == 0)
	{
		result += "fizz";
	}

	if (num % 5 == 0)
	{
		result += "buzz";
	}

	if (result.empty())
	{
		result = std::to_string(num);
	}

	return result;
}

void checkFizzBuzz(int num, std::string expectedResult)
{
	std::string result = fizzBuzz(num);
	REQUIRE(result == expectedResult);
}

TEST_CASE("FizzBuzz should be called")
{
	std::string result = fizzBuzz(1);
}

TEST_CASE("FizzBuzz should output number when not a multiple of 3 or 5")
{
	checkFizzBuzz(1, "1");
	checkFizzBuzz(2, "2");
	checkFizzBuzz(4, "4");
}

TEST_CASE("FizzBuzz should output `fizz` when a multiple of 3")
{
	checkFizzBuzz(3, "fizz");
}

TEST_CASE("FizzBuzz should output `buzz` when a multiple of 5")
{
	checkFizzBuzz(5, "buzz");
}


TEST_CASE("FizzBuzz should output `fizzbuzz` when a multiple of 3 and 5")
{
	checkFizzBuzz(15, "fizzbuzz");
}