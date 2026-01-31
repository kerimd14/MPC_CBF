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
The prefix env:: means:
“This function belongs to the env class.”
*/

env::env(const MatrixXd& A, const MatrixXd& B, const VectorXd& x0)
    : A_(A), B_(B), x0_(x0) {}


// PEOPLE ON STACK say not to use this and use underscored to differentiate member variables from parameters
// env::env(const MatrixXd& systemA, const MatrixXd& systemB) {
//         this-> A = systemA;
//         this-> B = systemB;
// }


// return x0 to reset the environment
VectorXd env::reset()
{
    return x0_;
}

VectorXd env::stateUpdate(const VectorXd& x, const VectorXd& u) const
{
    return A_ * x + B_ * u;
}


