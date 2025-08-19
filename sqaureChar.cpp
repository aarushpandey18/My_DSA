#include <iostream>
using namespace std;
int main() {
    int n=2;
    for(int i=0; i<n; i++){
        char ch ='A'; // First letter hamesha A is rhega  
        for(int j=0; j<n; j++) {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }

return 0; 
}