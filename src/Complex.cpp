#include "Complex.hpp"

Complex::Complex(const double& real, const double& imaginary)
{
  this->m_Real      = real;
  this->m_Imaginary = imaginary;
}

Complex::Complex(const Complex& rhs)
{
  this->m_Real      = rhs.m_Real;
  this->m_Imaginary = rhs.m_Imaginary;
}

Complex& Complex::operator=(const Complex& rhs)
{
  this->m_Real      = rhs.m_Real;
  this->m_Imaginary = rhs.m_Imaginary;
  return *this;
}

double Complex::getReal() const
{
  return this->m_Real;
}

double Complex::getImag() const
{
  return this->m_Imaginary;
}

double Complex::abs() const
{
  return sqrt(this->m_Real * this->m_Real + this->m_Imaginary * this->m_Imaginary);
}
