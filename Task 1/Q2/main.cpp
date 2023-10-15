
#include <iostream>
using namespace std;


void input(int mat[100][100], int a, int b)
{
    for( int i =0; i < a; i++)
    {
        for ( int j = 0;  j < b; j++)
        cin >> mat[i][j]
    }
    
}

int multiply(int m[a][b], int n[c][d])
{   
    int result[a][d];

    int j=0;

    for (int i=0; i<a; i++)

    {   result[i][j] = 0;

        for(j=0; j<d; j++)

        {
            for (int k = 0; k < c; k++) 
            { 
                result[i][j] += mm[i][k] * n[k][j]; 
            } 
  
            cout << result[i][j] << "  ";
        }
        
        cout << "\n";
    }

}

int main()
{

    int r1;
    int c1;
    int r2;
    int c2;

    cout << "Enter r1 c1 r2 c2 \n \n";

    cin >> r1;
    cin >> c1;
    cin >> r2;
    cin >> c2;

    int m1[r1][c1];
    int m2[r2][c2];

    if(c1 != r2)
    {
        cout << "Matrix multiplication not possible!";
    }

    input(m1,r1,c1);
    input(m2,r2,c2);

    multiply(m1,m2);

}



