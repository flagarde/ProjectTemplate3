#pragma once

#include <cmath>
#include <iostream>

/**
  * @file complex.hpp
  * @author Rok Kos
  * @brief Class that represent complex number.
  */

class Complex
{
private:
  double m_Real;
  double m_Imaginary;

public:
  // Constructor
  Complex(const double& = 0, const double& = 0);
  // Copy constructor
  Complex(const Complex& rhs);
  // Destructor
  ~Complex()=default;
  // Assigment operator
  Complex& operator=(const Complex& rhs);
  // Methods
  double getReal() const;
  double getImag() const;
  double abs() const;
};
