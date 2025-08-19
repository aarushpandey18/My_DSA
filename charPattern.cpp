#include <iostream>
using namespace std;
int main() {
    int n =3;
    char ch = 'A'; // Har line me char bdelga 
    for(int i =0; i<n; i++ ){
        
        for(int j =0; j<n; j++){
            cout << ch << " ";
            ch = ch + 1;
        }
          cout << endl;
    }

return 0;
}
