#ifndef _READ_CSV_H
#define _READ_CSV_H 1

#include <eigen3/Eigen/Dense>
#include <vector>
#include <fstream>
#include <iostream>


template<typename M>
M load_csv(const std::string & path) 
{
    std::ifstream indata;
    indata.open(path);
    std::string line;
    std::vector<double> values;
    size_t rows = 0;
    while (std::getline(indata, line)) 
    {
        std::stringstream lineStream(line);
        std::string cell;
        while (std::getline(lineStream, cell, ',')) 
        {
            values.push_back(std::stod(cell));
        }
        ++rows;
    }
    return Eigen::Map <const Eigen::Matrix <typename M::Scalar, M::RowsAtCompileTime, M::ColsAtCompileTime, Eigen::RowMajor> >(
        values.data(), rows, values.size()/rows);
}


#endif
