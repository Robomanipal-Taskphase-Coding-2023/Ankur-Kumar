#include <iostream>
using namespace std;

int main()
{
    string s1;
    string* s2;

    cout << "Enter a word!";

    cin >> s1;
    s2 = &s1;

    cout << "Value at s1 is:    " << s1;
    cout << "\n\n Value at s2 is:   " << s2;
    cout << "\n\n Value at *s2:     " << *s2;


}

