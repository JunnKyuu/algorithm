#include <iostream>

using namespace std;

int main() {
    int n, m = 0;
    
    cin >> n >> m;
    
    int arr1[n][m] = {};
    int arr2[n][m] = {};
    int arr3[n][m] = {};
    
    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < m; j ++) {
            cin >> arr1[i][j];
        }
    }
    
    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < m; j ++) {
            cin >> arr2[i][j];
        }
    }
    
    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < m; j ++) {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    
    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < m; j ++) {
            cout << arr3[i][j] << " ";
        }
        
        cout << "\n";
    }
    
    return 0;
}