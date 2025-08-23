#include <iostream>
using namespace std;
int main(){
    int n=4;
    int num=1;

    for(int i=0; i<n; i++){

        for(int j=0; j<i; j++){   // print i times space 
            cout << " ";
        }

            for(int j=0; j< (n-i); j++) {  // print (n-i) nums
                cout << (i+1);

            }
            cout << endl;
   }
        
    

    return 0;
}
