/*
* filename: 4.11 chicken.cpp
* property: test
*/

#include <iostream>

using namespace std;

int main() {
    cout << "XY\t" << "XX\t" << "L" << endl;
    int x, y, z;
    for(x = 0; x <= 20; x++) {
        for(y = 0; y <= 33; y++) {
            z = 100 - x - y;
            if(5*x + 3*y + z/3 == 100 && z % 3 == 0) 
                cout << x << "\t" << y << "\t" << z << endl;
        }
    }
    return 0;
}
