
# include <iostream>
# include "Environment.h"
# include <Eigen/Dense>

using namespace Eigen;
using namespace std;
/* namespace*/

int main() {

    double dt = 0.1; // time step
    
    // matrix A

    MatrixXd A(2,2);
    A << 1, dt,
         0, 1;

    // matrix B

    MatrixXd B(2,1);
    B << 0,
         dt;

    double task_length = 100;

    // initial state
    VectorXd x_0(2);
    
    x_0 << 0,
           1;

    environment env(A, B);

    VectorXd x = x_0;

    // constant input
    VectorXd u(1); 

    u << 0.5;

    for(int i = 0; i < task_length; i++) {
        
        x = env.stateUpdate(x, u);

    }

    cout << "Final state after " << task_length << " steps: " << x[0] << ", " << x[1] << endl;

    cout << "Hello, World!" << endl;
    return 0;
    
}