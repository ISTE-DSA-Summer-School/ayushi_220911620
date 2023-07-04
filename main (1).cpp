/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i,j;
   for (int i = 1; i <= 9; i++)
  {
    // leading spaces
    for (int j = 1; j < i; j++)
      cout << "  ";
    for (int j = 1; j <= 9 - i + 1; j++)
      cout << "* ";
    cout << endl;
  }
    return 0;
    

   
}
