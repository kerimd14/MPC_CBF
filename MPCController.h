

#include <iostream>
#include <Eigen/Dense>
//#include "SystemModel.h"
using namespace Eigen;

// conversion to Sparse Matrix
struct CSPC {

}

class MPCController {
    // Define system matrices A and B
    // State update function
    // struct because variable A and B are public by default
public:
    MatrixXd A;
    MatrixXd B;

    
private:


};
/* Enviroment Class

Needs an Matrix A and Matrix B to define the system

State Update Equation:
x(k+1) = A*x(k) + B*u(k)

*/



/*


Model Predictive Control Class



*/

