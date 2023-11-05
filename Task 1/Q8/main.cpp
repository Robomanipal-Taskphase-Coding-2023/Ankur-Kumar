#include <iostream>
#include <vector>

using namespace std;

void input( vector< vector<int>>& arr, int &r, int &c)
{
    for ( int i = 0; i < r; i ++)
    {
        cout << "Enter row " << i << " values:\n";

        for( int j = 0; j < c; j++)
        {
            int k;
            cin >> k;
            arr[i][j] = k;
        }
    }
}

void transpose(vector< vector<int>>& arr, int &r, int &c, vector< vector<int>>& arr2, int &r2, int &c2) 
{ 
    int i, j; 
    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c; j++) 
        {
            arr[i][j] = arr2[j][i]; 
            cout << arr[i][j];
        }
        cout << "\n";
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

    cout << "Enter rumber of rows: \n";
    int r2;
    cin >> r2;

    cout << "Enter number of columns:\n";
    int c2;
    cin >> c2;

    vector< vector<int> > arr2(r2, vector<int>(c2));

    input(arr,r,c);

    input(arr2, r2, c2);

    if (c != r2)
    {
        cout << "Matrix multiplication no possble!";
    }

    
    // multiply(arr, r, c, arr2, r2, c2);
    else
    {
    vector< vector<int> > result(r, vector<int>(c2));
    int j=0;

    for (int i=0; i<r; i++)

    {  

        for(j=0; j<c2; j++)

         {  
             result[i][j] = 0;
            for (int k = 0; k < c2; k++) 
            { 
                result[i][j] = result[i][j] + arr[i][k]*arr2[k][j] ;

                
            } 
            cout << result[i][j] << "   ";
         }
        
        cout << "\n";
    }
    }

    transpose(arr,r,c, arr,c,r);
    
}
/*
void multiply(vector< vector<int>>& arr, int &r, int &c, vector< vector<int>>& arr2, int &r2, int &c2)
{
    vector< vector<int> > result(r, vector<int>(c2));
    int j=0;

    for (int i=0; i<3; i++)

    {  

        for(j=0; j<3; j++)

         {  
             result[i][j] = 0;
            for (int k = 0; k < 3; k++) 
            { 
                result[i][j] = result[i][j] + arr[i][k]*arr2[k][j] ;

                
            } 
            cout << result[i][j] << "   ";
         }
        
        cout << "\n";
    }
}
*/
