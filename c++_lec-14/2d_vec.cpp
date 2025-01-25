// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int r,c;
//     cin >> r >> c;
//     vector<vector<int>> vec(r, vector<int>(c));
//     for(int i=0; i<vec.size(); i++) {
//         for(int j=0; j<vec[i].size(); j++) {
//             cin >> vec[i][j];
//         }
//     }
    
//     for(int i=0; i<vec.size(); i++) {
//         for(int j=0; j<vec[i].size(); j++) {
//             cout << vec[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << "The entered matrix is:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}