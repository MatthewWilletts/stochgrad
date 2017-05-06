#include <iostream>
#include <eigen3/Eigen/Dense>

#include "load_csv.h"

int main(int argc, char ** argv)
{

    for (int i = 0; i < argc; i++)
    {
        std::cout << "Arg " << i << " : " << argv[i] << std::endl;
    }

    Eigen::MatrixXd Input = load_csv<Eigen::MatrixXd>("./input/test1.csv");

    std::cout << Input << std::endl;
    return 0;
}