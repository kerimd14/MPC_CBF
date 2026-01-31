# include <iostream>
#include "MPCController.h"
using namespace std;
/* namespace*/



// int main() {

//     return 0;
// }


MPC::MPC() {
    // default constructor definition goes here
}

MPC


MPC::stateconst() {
    // function definition goes here

    /*
        Build linear dynamics constraints:
          X_{k+1} - [A_sym X_k + B_sym U_k + b_sym] == 0, for k=0...horizon-1
    */
    state_const_lst_;

}