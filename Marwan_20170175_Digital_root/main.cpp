#include <iostream>
using namespace std ;

//This function process is that if the number entered from the user less than 10 (one digit) return this number (digital root)
// And if the number is greater than 10 (more than one digit) the function gives the sum of digits until the number be one digit
 int digital_root( int x )
{
    // Base Case
    if ( x < 10 )
        return x ;

    x = x % 10 + digital_root( x / 10 ) ;

    return  digital_root( x ) ;
}

int main()
{
    cout << digital_root( 1729 ) << endl;
    cout << digital_root( 7 ) << endl;

    return 0;
}
