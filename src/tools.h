#ifndef TOOLS_H_
#define TOOLS_H_
#include <vector>
#include "Eigen/Dense"

#define PI 3.14159265

class Tools {
public:
  /**
  * Constructor.
  */
  Tools();

  /**
  * Destructor.
  */
  virtual ~Tools();

  /**
  * A helper method to calculate RMSE.
  */
  Eigen::VectorXd CalculateRMSE(const std::vector<Eigen::VectorXd> &estimations, const std::vector<Eigen::VectorXd> &ground_truth);

  /**
  * A helper method to calculate Jacobians.
  */
  Eigen::MatrixXd CalculateJacobian(const Eigen::VectorXd& x_state);
  
  /**
  * A helper method to calculate hx, from cartesian to polar.
  */
  Eigen::VectorXd CalculateHx(const Eigen::VectorXd& x_state);
  
  /**
  * A helper method to limit angle between -pi and pi.
  */
  float LimitAngle(float c_angle);

};

#endif /* TOOLS_H_ */
