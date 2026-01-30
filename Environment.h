#include <Eigen/Dense>

using namespace Eigen;

// struct makes members public by default (A and B should be accessible)
struct environment {
    // Define system matrices A and B
    // State update function
    // struct because variable A and B are public by default

    MatrixXd A;
    MatrixXd B;

        // Constructor declaration
        // Takes A and B as constant references (no copies)
        environment(const MatrixXd& systemA, const MatrixXd& systemB);

        //Arguemnts passed by constant reference to avoid copying   
        // const at the end means this function does not modify A and B
        VectorXd stateUpdate(const VectorXd& x_k, const VectorXd& u_k) const;
    


};