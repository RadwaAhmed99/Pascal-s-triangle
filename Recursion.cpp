#include <iostream>
#include<stdlib.h>

using namespace std;

int Pascaltriangle(int row, int col) {
  if
    (col == 0 || col == row) return 1;
  else
   return Pascaltriangle(row - 1, col - 1) + Pascaltriangle(row - 1, col);
}
int main()
{
    cout<<Pascaltriangle(6,2);
}
