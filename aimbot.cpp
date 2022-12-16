// Aimbot.cpp
#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    int x, y;
};
 
// Function to calculate distance
float distance(Point a, Point b)
{
    // Calculating distance
    return sqrt(pow((a.x - b.x), 2) + 
                pow((a.y - b.y), 2) * 1.0);
}
 
// Returns true if target point is in range
bool isTargetInRange(Point shooter, Point target, float range)
{
    // calculating distance between 
    // shooter and target
    float dist = distance(shooter, target);
 
    // Checking if target is in range
    if (dist <= range)
        return true;
    else
        return false;
}
 
// Returns true if target point is in sight
bool isTargetInSight(Point shooter, Point target, float range)
{
    // calculating distance between 
    // shooter and target
    float dist = distance(shooter, target);
