#include "ShapeModelFactory.h"

#include <memory>
#include <string>

#include "BiAxialEllipsoid.h"
#include "ShapeModel.h"

/**
 * Creates a ShapeModel based on the given shape model name.
 *
 * @param shapeModelName Name of the shape model to create.
 *
 * @return std::unique_ptr<ShapeModel> Returns a managed pointer of the created ShapeModel.
 */
ShapeModel* ShapeModelFactory::create(const std::string &shapeModelName) {
  double majorAxis = 10.0; // m
  double minorAxis = 10.0; // m
  return new BiAxialEllipsoid(majorAxis, minorAxis);
}
