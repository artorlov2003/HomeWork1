//
// Created by artor on 26.09.2022.
//

#ifndef HW1_COMPLEX_H
#define HW1_COMPLEX_H


#include <string>
#include <cmath>

class Complex {
private:
    double _real;

    double _image;


public:

    // getter and setter
    double real() const {
        return _real;
    }

    double image() const {
        return _image;
    }

    // constructors
    Complex(double real, double image) {
        this->_real = real;
        this->_image = image;
    }

    Complex(double real) {
        this->_real = real;
        this->_image = 0;
    }

    // operators + -
    Complex operator+(Complex c) const {
        return {_real + c._real, _image + c._image};
    }

    friend Complex operator+(double d, Complex c) {
        return (Complex) d + c;
    }

    Complex operator+(double d) {
        return {_real + d, _image};
    }

    Complex operator-(Complex c) const {
        return {_real - c._real, _image - c._image};
    }

    friend Complex operator-(double d, Complex c) {
        return (Complex) d - c;
    }

    Complex operator-(double d) const {
        return {_real - d, _image};
    }

    // operators * /
    Complex operator*(Complex c) const {
        return {_real * c._real - _image * c._image, _real * c._image + _image * c._real};
    }

    friend Complex operator*(double d, Complex c) {
        return (Complex) d * c;
    }

    Complex operator*(double d) const {
        return {_real * d, _image * d};
    }

    Complex operator/(Complex c) const {
        double denominator = c._real * c._real + c._image * c._image;
        return {(_real * c._real + _image * c._image) / denominator,
                (_image * c._real - _real * c._image) / denominator};
    }

    friend Complex operator/(double d, Complex c) {
        return (Complex) d / c;
    }

    Complex operator/(double d) const {
        return {_real / d, _image / d};
    }

    // absolute values
    double abs() const {
        return sqrt(_real * _real + _image * _image);
    }

    // comparing operators
    bool operator==(Complex c) const {
        return _real == c._real && _image == c._image;
    }

    bool operator!=(Complex c) const {
        return !(*this == c);
    }

    bool operator==(double d) const {
        return _real == d && _image == 0;
    }

    bool operator!=(double d) const {
        return !(*this == d);
    }

    friend bool operator==(double d, Complex c) {
        return (Complex) d == c;
    }

    friend bool operator!=(double d, Complex c) {
        return (Complex) d != c;
    }

    bool operator>(Complex c) const {
        return abs() > c.abs();
    }

    bool operator<(Complex c) const {
        return abs() < c.abs();
    }

    bool operator>=(Complex c) const {
        return abs() >= c.abs();
    }

    bool operator<=(Complex c) const {
        return abs() <= c.abs();
    }

    bool operator>(double d) const {
        return abs() > d;
    }

    bool operator<(double d) const {
        return abs() < d;
    }

    bool operator>=(double d) const {
        return abs() >= d;
    }

    bool operator<=(double d) const {
        return abs() <= d;
    }

    friend bool operator>(double d, Complex c) {
        return (Complex) d > c;
    }

    friend bool operator<(double d, Complex c) {
        return (Complex) d < c;
    }

    friend bool operator>=(double d, Complex c) {
        return (Complex) d >= c;
    }

    friend bool operator<=(double d, Complex c) {
        return (Complex) d <= c;
    }

    // unary operators
    Complex operator-() const {
        return {-_real, -_image};
    }

    Complex operator+() const {
        return *this;
    }

    Complex operator=(Complex c) {
        _real = c._real;
        _image = c._image;
        return *this;
    }

    // toString
    std::string toString() const {
        return std::to_string(_real) + " + " + std::to_string(_image) + "i";
    }

    friend std::ostream &operator<<(std::ostream &os, const Complex &c) {
        os << c.toString();
        return os;
    }

};


#endif //HW1_COMPLEX_H
