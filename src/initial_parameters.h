//parameter_setup.h

#ifndef PARAMETERS
#define PARAMETERS

#include <eigen3/Eigen/dense>


struct InitialParameters{

const Eigen::MatrixXd natural_params;
const Eigen::MatrixXd dirichlet_alpha;

};


inline std::ostream& operator<<(std::ostream& os, InitialParameters p)
{
     os << "Natural Params" << std::endl
        << p.natural_params << std::endl
        << "Dirichlet Alpha" << std::endl
        << p.dirichlet_alpha << std::endl;
    return os;
}

InitialParameters load_prior_parameters_from_file(const std::string & input_dir);















#endif