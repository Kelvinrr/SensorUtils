#include "CSMSensorModel.h"

#include "RasterGM.h"

#include "sensorcore.h"
#include "SensorMath.h"

/**
 * Construct a CSMSensorModel
 *
 */
CSMSensorModel::CSMSensorModel(csm::RasterGM *pointer){
  csm::RasterGM m_model = *pointer;
};

CartesianPoint CSMSensorModel::imageToGround(ImagePoint &imagePoint, double elev){
  // CSM needs to also have an elev above the sphere.
  return m_model->imageToGround(&imagePoint, 0)
  }

ImagePoint CSMSensorModel::groundToImage(CartesianPoint &groundPoint){
  return ImagePoint{0,0,0};
  }

CartesianVector CSMSensorModel::groundToLook(CartesianPoint &groundPoint){
  return CartesianVector{0,0,0};
  }

double CSMSensorModel::imageTime(ImagePoint &imagePoint){
  return 0.0;
  }

CartesianPoint CSMSensorModel::getSensorPosition(ImagePoint &imagePoint){
  return CartesianPoint{0,0,0};
  }


CartesianPoint CSMSensorModel::getIlluminationDirection(CartesianPoint &imagePoint){
  return CartesianPoint{0,0,0};
  }
