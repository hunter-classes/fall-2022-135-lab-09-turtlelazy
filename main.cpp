#include <iostream>
#include "funcs.h"

int main()
{
    Coord3D pointPa = {10, 20, 30};
    std::cout << length(&pointPa) << std::endl; // would print 37.4166
    Coord3D pointP = {20, 0, 0};
    Coord3D pointQ = {10, 0, 0};

    std::cout << "Address of P: " << &pointP << std::endl;
    std::cout << "Address of Q: " << &pointQ << std::endl
            << std::endl;

    Coord3D *ans = fartherFromOrigin(&pointP, &pointQ);

    std::cout << "ans = " << ans << std::endl; // So which point is farther?

    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};

    move(&pos, &vel, 2.0); // object pos gets changed
    std::cout << pos.x << " " << pos.y << " " << pos.z << std::endl;
    // prints: 2 -10 100.4

    double x, y, z;
    std::cout << "Enter position: ";
    std::cin >> x >> y >> z;
    Coord3D *ppos = createCoord3D(x, y, z);

    std::cout << "Enter velocity: ";
    std::cin >> x >> y >> z;
    Coord3D *pvel = createCoord3D(x, y, z);

    move(ppos, pvel, 10.0);

    std::cout << "Coordinates after 10 seconds: "
              << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << std::endl;

    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);

    return 0;
}
