#include <iostream>
#include <string>
using namespace std;

int main() {
    /* 
        break = break out of loop.
        continue = skip current iteration.
    */

   // Using break
    for(int i = 1; 1 <= 20; i++){
        if(i == 13){
            break;
        }
    }

    cout << "====== Gap ======";
    // Using continue
    for(int x = 1; x <= 20; x++){
        if(x == 13){
            continue;
        }
    }
    return 0;
}