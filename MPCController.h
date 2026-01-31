

#include <iostream>
#include <Eigen/Dense>

//#include "SystemModel.h"
using namespace Eigen;
using namespace std;

class MPC {

    public:
        // Define system matrices A and B
        // State update function

        // default constructor 
        MPC();

        // contructor 
        // Am, Bm, Cm - A,B,C matrices
        // phorizon - prediction horizon
        // chorizon - control horizon
        // P, Q, R - weight matrices
        // umin, umax - input constraints
        // xmin, xmax - state constraints
        // x0 - initial state
        // ref - reference trajectory
        MPC(MatrixXd Am, MatrixXd Bm, MatrixXd Cm, unsigned int phorizon
                        , unsigned int chorizon, MatrixXd P, MatrixXd Q, MatrixXd R
                        , VectorXd umin, VectorXd umax, VectorXd xmin
                        , VectorXd xmax, VectorXd x0, VectorXd ref);    





        // function to save data into a csv file to plot in python
        // refFile - file where refrence trajectory is saved to
        // inputFile - file where ctrl inputs are saved to
        // statesFile - file where states are saved to
        // outputFile - file where outputs are saved to

        void MPC::saveDataToCSV(string refFile, string inputFile
                                , string statesFile, string outputFile);
        
    private:

        // Method to build cost function
        void buildCostFunction();

        // Methods to set up constraints
        void modelconst();
        void inputconst();
        void stateconst();
        void CBFconst();

        // Method to help build matrices for optimization problem
        void  buildDiagonalMatrix();



        // internal variable k used to keep track of time step of the controller    
        unsigned int k;

        // m - number of inputs, n - number of states, r - number of outputs
        unsigned int m, n, r;
        
        MatrixXd A_, B_, C_;
        MatrixXd P_, Q_, R_;
        MatrixXd x0_;
        MatrixXd ref_;

        unsigned int p_horizon_;
        unsigned int c_horizon_;


        // store state vectors of the controlled state traectory
        MatrixXd states_; 
        // store computed inputs
        MatrixXd inputs_;
        // store output vectors of the controlled output trajectory
        MatrixXd outputs_;

        
        MatrixXd state_const_lst_;
    




    };
/* Enviroment Class

Needs an Matrix A and Matrix B to define the system

State Update Equation:
x(k+1) = A*x(k) + B*u(k)

*/



/*


Model Predictive Control Class



*/

