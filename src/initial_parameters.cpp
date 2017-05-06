//parameter_setup.cpp
#include "initial_parameters.h"

#include "load_csv.h"

InitialParameters load_prior_parameters_from_file(const std::string & input_dir)
{
    InitialParameters initial_params = { 
    	load_csv<Eigen::MatrixXd>( input_dir + "natural_params.csv"), // natural params
    	load_csv<Eigen::MatrixXd>( input_dir + "dirichlet_alpha.csv") // dirichlet  
    };

    return initial_params;
}