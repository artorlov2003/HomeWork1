#pragma once

#include <string>
#include <cmath>

struct Complex {

    double real = 0;

    double image = 0;

    Complex(double real = 0, double image = 0);

    Complex(const Complex &other);

    Complex operator+(Complex c) const;

    Complex operator+(double d) const;

    Complex operator-(Complex c) const;

    Complex operator-(double d) const;

    Complex operator*(Complex c) const;

    Complex operator*(double d) const;

    Complex operator/(Complex c) const;

    Complex operator/(double d) const;

    double abs() const;

    bool operator==(Complex c) const;

    bool operator!=(Complex c) const;

    bool operator==(double d) const;

    bool operator!=(double d) const;

    bool operator>(Complex c) const;

    bool operator<(Complex c) const;

    bool operator>=(Complex c) const;

    bool operator<=(Complex c) const;

    bool operator>(double d) const;

    bool operator<(double d) const;

    bool operator>=(double d) const;

    bool operator<=(double d) const;

    Complex operator-() const;

    Complex operator+() const;

    Complex& operator=(Complex c);

};

std::ostream &operator<<(std::ostream &os, const Complex &c);

bool operator>(double d, Complex c);

bool operator<(double d, Complex c);

bool operator>=(double d, Complex c);

bool operator<=(double d, Complex c);

bool operator==(double d, Complex c);

bool operator!=(double d, Complex c);

Complex operator/(double d, Complex c);

Complex operator*(double d, Complex c);

Complex operator+(double d, Complex c);

Complex operator-(double d, Complex c);