#include <iostream>
#include "funcs.h"

int main()
{
    //Task A
    Coord3D pointPa = {3, 4, 5};
    std::cout << "Length of pointPa(3,4,5): " << length(&pointPa) << "\n\n"; //7.07107

    //Task B
    Coord3D pointP = {20, 0, 0};
    Coord3D pointQ = {10, 0, 0};

    std::cout << "Address of P(20,0,0): " << &pointP << std::endl;
    std::cout << "Address of Q(10,0,0): " << &pointQ << std::endl;

    Coord3D *ans = fartherFromOrigin(&pointP, &pointQ);

    std::cout << "The point with the memory address " << ans << " is farther." << "\n\n"; // So which point is farther?

    //Task C
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};
    std::cout << "Original: pos = ("<< pos.x << "," << pos.y << "," << pos.z << ")\n";
    move(&pos, &vel, 2.0); // object pos gets changed
    std::cout << "After velocity of vel = (1,-5,0.2) and dt = 2, pos = (" << pos.x << "," << pos.y << "," << pos.z << ")\n\n";
    // prints: 2 -10 100.4

    double x, y, z;
    x = 10;
    y = 20;
    z = 30;
    // std::cout << "Enter position: ";
    // std::cin >> x >> y >> z;
    Coord3D *ppos = createCoord3D(x, y, z);
    std::cout << "Created position coordinate memory address " << &ppos << "\n";

    deleteCoord3D(ppos); // release memory
    std::cout << "Deleting position coordinate.\n";
    return 0;
}
