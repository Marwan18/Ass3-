#include <iostream>

using namespace std;

//Prototype of the function
int sum_of_digit (int n) ;

int main()
{
    int num = 111;
    int result = sum_of_digit(num);
	cout << "The sum of digits for " << num << " is" << " " <<  result << endl ;
    return 0;
}
// This function take from the whole number each digit and return the sum of digits
int sum_of_digit(int n)
{
    // Base Case
	if (n == 0)
	return 0;
	else
	return (n % 10 + sum_of_digit(n / 10));
}
