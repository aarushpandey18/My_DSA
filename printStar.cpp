#include <iostream>
using namespace std;
int main() {
    int n=10;
      for(int i= 1; i<=n; i++){ // outer loop(lines)
        int m=5;
        for(int j =1; j<=m; j++){ // inner loop(row)
            cout << "*" << " ";
        }
        cout << endl;
      }
            

return 0; 
}