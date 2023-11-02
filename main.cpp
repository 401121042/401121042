#include <iostream>

using namespace std;

int main()
{
    float a, alpha;
    cout << "please enter a number :\n" ;
    cin >> a ;
    alpha = a ;
    for( int cun = 0 ;  cun <5 ; cun++)
        {
        alpha = alpha/2 + a/(alpha*2) ;
    }
    cout << "the sqrt of :" << a << " \n is :"  << alpha ;
    return 0;
}
