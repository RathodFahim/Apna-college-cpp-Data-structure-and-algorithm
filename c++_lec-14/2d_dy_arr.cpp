#include <iostream>
using namespace std;

int main(){
  int rows,cols;
  cout << "Enter the number of rows \n";
  cin >> rows;
  cout << "Enter the number of cols \n";
  cin >> cols;
  
  int **matrix = new int*[rows];
  
  for(int i=0; i<rows; i++) {
   matrix[i] = new int[cols];
  }
  
  for(int i=0; i<rows; i++) {
    for(int j=0; j<cols; j++) {
      cin >> matrix[i][j];
      cout << matrix[i][j] << " ";
    }
    
    cout << endl;
  }
}