
#include <iostream>
#include "Point3D.h"

using namespace std;

int main() {

    Point3D p1(2, 3, 4);
    Point3D p2(5, 6, 7);
    

    cout << "Premier point :" << endl;
    cout << "X = " << p1.getX() << endl;
    cout << "Y = " << p1.getY() << endl;
    cout << "Z = " << p1.getZ() << endl;

    cout << "\nDeuxieme point :" << endl;
    cout << "X = " << p2.getX() << endl;
    cout << "Y = " << p2.getY() << endl;
    cout << "Z = " << p2.getZ() << endl;

    return 0;
}
