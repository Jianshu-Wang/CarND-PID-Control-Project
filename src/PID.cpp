#include "PID.h"

using namespace std;



/**
 * TODO: Complete the PID class. You may add any additional desired functions.
 */

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
  /**
   * TODO: Initialize PID coefficients (and errors, if needed)
   */

  this -> Kp = Kp_;
  this -> Ki = Ki_;
  this -> Kd = Kd_;
  int_cte = 0;
  pre_cte = 0;

}

void PID::UpdateError(double cte) {
  /**
   * TODO: Update PID errors based on cte.
   */
  int_cte += cte;
  p_error = Kp * cte;
  i_error = Ki * int_cte;
  d_error = Kd * (cte - pre_cte);
  pre_cte = cte;
}

double PID::TotalError() {
  /**
   * TODO: Calculate and return the total error
   */

  

  return -(p_error + d_error + i_error);  // TODO: Add your total error calc here!
}