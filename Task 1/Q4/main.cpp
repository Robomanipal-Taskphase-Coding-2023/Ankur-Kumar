#include <bits/stdc++.h> 
using namespace std;



void arr(vactor<int>& vect, int n)
{
    int q =0;
    int r; 

    while ( q != 0)
    {
        r = n % 10;
        q = n / 10;
        vect.push_back(r);
    }
}

int main()
{
    cout << "Enter a number:\n";
    int n;
    cin >> n; 
    vector<int> vect;
    arr(vect, n);  

    for ( int i = 0; i < arr.length(); i++)
    {
        cout << vect[i];
    }
}


