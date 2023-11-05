#include <iostream>
#include <vector>

using namespace std;

void SetMatrixZeroes( vector<vector<int>>& arr)
{
    int n = arr.size();
    int m = arr[0].size();

    vector<int> row(n,0);
    vector<int> col(m,0);

    for ( int i = 0; i < arr.size(); i ++)
    {
        for ( int j = 0; j < arr[0].size(); j++)
        {
            if ( arr[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for ( int i =0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)

        if (row[i] || col[j] == 1)
            arr[i][j] = 0;
    }
}

void input( vector< vector<int>>& arr, int &r, int &c)
{
    for ( int i = 0; i < r; i ++)
    {
        cout << "Enter row " << i << "values:\n \n";

        for( int j = 0; j < c; j++)
        {
            int k;
            cin >> k;
            arr[i][j] = k;
        }
    }
}

int main()
{
    cout << "Enter number of rows:\n";
    int r;
    cin >> r;


    cout << "\nEnter number of columns:\n";
    int c;
    cin >> c;


    vector< vector<int> > arr(r, vector<int>(c));

    input(arr,r,c);

    SetMatrixZeroes(arr);

    for ( int i = 0; i < arr.size(); i++)
    {
        for ( int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
