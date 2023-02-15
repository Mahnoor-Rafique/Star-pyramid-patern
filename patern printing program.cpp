//preprocessor directive
#include <iostream>
using namespace std;
//main function
int main()
//opening braces
 {
//declare variables
    int m,n,rows;
//print the number of rows
    cout << "Enter number of rows: ";
    //take the input from user
    cin >> rows;
//outer loop
    for(int m = 1; m <= rows; ++m) 
	{
		//inner loop
        for(int n = 1; n <=m; ++n) 
		{
			//print star patern
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}
//closing braces
