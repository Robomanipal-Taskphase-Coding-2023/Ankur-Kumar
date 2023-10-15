// 14.	Implement the Euclidean algorithm to find the greatest common divisor of two numbers. 

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }

    return (gcd( b%a , a));
}

int main()
{
    int n;
    int m;

    cout << "Enter two number: \n";
    cin >> n;
    cin >> m;

    if( m > n)
        cout << "Gretest Common Diviser:    " << gcd(m,n);
    
    else
        cout << "Gretest Common Diviser:    " << gcd(n,m);

}

