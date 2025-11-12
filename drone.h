//
// Created by ciara on 11/11/2025.
//
#include <stdbool.h>
#ifndef CDRONE_DRONE_H
#define CDRONE_DRONE_H

//  3D Vector to determine drone positions
typedef struct
{
    double x,y,z;
} droneVector;

static inline droneVector droneVecAdd(droneVector a, droneVector b)
{
    return (droneVector){a.x+b.x, a.y+b.y, a.z+b.z };
}

static inline droneVector droneVecSubtract(droneVector a, droneVector b)
{
    return (droneVector){a.x-b.x, a.y-b.y, a.z-b.z };
}

typedef struct
{
    droneVector startPos, endPos, currentPos, vel;
    double spawnTime, despawnTime, distTravelled, meanVel;
    bool hasCollided, isActive;
} Drone;
void helloDrone();

#endif //CDRONE_DRONE_H