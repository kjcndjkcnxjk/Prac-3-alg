#ifndef TRUCKLOADS_H
#define TRUCKLOADS_H

#include <cmath>

class Truckloads{
private:
    int numCrates;
    int loadSize;
public:
    Truckloads();
    int numTrucks(int numCrates, int loadSize);
};


#endif