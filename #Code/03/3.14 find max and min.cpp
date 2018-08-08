/*
* filename: 3.14 find max and min.cpp
* property: exercise
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int a[5] = {9, 6, 3, 8, 5};
    for(int i = 0; i < 5; i++)
        cout << a[i] << " ";

    cout << endl;

    sort(a, a + 5);
    for(int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl << "max = " << a[4];
    cout << endl << "min = " << a[0];
    return 0;
}
