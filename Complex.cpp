#include <iostream>
#include "Complex.h"


Complex Complex::operator+(Complex c) const {
    return {real + c.real, image + c.image};
}

Complex operator+(double d, Complex c) {
    return (Complex) d + c;
}

Complex Complex::operator+(double d) const{
    return {real + d, image};
}

Complex Complex::operator-(Complex c) const {
    return {real - c.real, image - c.image};
}

Complex operator-(double d, Complex c) {
    return (Complex) d - c;
}

Complex Complex::operator-(double d) const {
    return {real - d, image};
}

Complex Complex::operator*(Complex c) const {
    return {real * c.real - image * c.image, real * c.image + image * c.real};
}

Complex operator*(double d, Complex c) {
    return (Complex) d * c;
}

Complex Complex::operator*(double d) const {
    return {real * d, image * d};
}

Complex Complex::operator/(Complex c) const {
    double denominator = c.real * c.real + c.image * c.image;
    return {(real * c.real + image * c.image) / denominator,
            (image * c.real - real * c.image) / denominator};
}

std::ostream &operator<<(std::ostream &os, const Complex &c) {
    return os << c.real << " + " << c.image << "i" << std::endl;
}


Complex& Complex::operator=(Complex c) {
    real = c.real;
    image = c.image;
    return *this;
}

Complex Complex::operator+() const {
    return *this;
}

Complex Complex::operator-() const {
    return {-real, -image};
}

bool operator<=(double d, Complex c) {
    return (Complex) d <= c;
}

bool operator>=(double d, Complex c) {
    return (Complex) d >= c;
}

bool operator<(double d, Complex c) {
    return (Complex) d < c;
}

bool operator>(double d, Complex c) {
    return (Complex) d > c;
}

bool Complex::operator<=(double d) const {
    return abs() <= d;
}

bool Complex::operator>=(double d) const {
    return abs() >= d;
}

bool Complex::operator<(double d) const {
    return abs() < d;
}

bool Complex::operator>(double d) const {
    return abs() > d;
}

bool Complex::operator<=(Complex c) const {
    return abs() <= c.abs();
}

bool Complex::operator>=(Complex c) const {
    return abs() >= c.abs();
}

bool Complex::operator<(Complex c) const {
    return abs() < c.abs();
}

bool Complex::operator>(Complex c) const {
    return abs() > c.abs();
}

bool operator!=(double d, Complex c) {
    return (Complex) d != c;
}

bool operator==(double d, Complex c) {
    return (Complex) d == c;
}

bool Complex::operator!=(double d) const {
    return !(*this == d);
}

bool Complex::operator==(double d) const {
    return real == d && image == 0;
}

Complex Complex::operator/(double d) const {
    return {real / d, image / d};
}

bool Complex::operator==(Complex c) const {
    return real == c.real && image == c.image;
}

double Complex::abs() const {
    return sqrt(real * real + image * image);
}

bool Complex::operator!=(Complex c) const {
    return !(*this == c);
}

Complex operator/(double d, Complex c) {
    return (Complex) d / c;
}

Complex::Complex(const Complex &other) {
    this->real = other.real;
    this->image = other.image;
}

Complex::Complex(double real, double image) : real(real), image(image) {}
