#include "Environment.h"
#include <Eigen/Dense>

using namespace Eigen;


// contstructor definition

/*
: A(systemA), B(systemB)
This is an initializer list.

It directly initializes A with systemA,
and B with systemB
*/


/*
The prefix Environment:: means:
“This function belongs to the Environment struct.”
*/
environment::environment(const MatrixXd& systemA, const MatrixXd& systemB) : A(systemA), B(systemB) {
}


VectorXd environment::stateUpdate(const VectorXd& x_k, const VectorXd& u_k) const
{
    return A * x_k + B * u_k;
}


