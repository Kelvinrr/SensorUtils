#ifndef SensorMath_h
#define SensorMath_h

#include <vector>

#include "sensorcore.h"

using namespace std;

namespace sensormath {

  double angle(CartesianVector ray1, CartesianVector ray2);
  double dot(CartesianVector vector1, CartesianVector vector2);
  double distance(CartesianPoint& point1, CartesianPoint& point2);
  CartesianVector normalize(CartesianVector vector);
  CartesianVector subtract(CartesianVector vector1, CartesianVector vector2);
CartesianVector add(CartesianVector vector1, CartesianVector vector2);

  // TODO: convert rect2lat and lat2rect to use CartesianPoints and CartesianVectors
  vector<double> rect2lat(const vector<double> rectangularCoords);
  vector<double> lat2rect(vector<double> sphericalCoords);
}
#endif
