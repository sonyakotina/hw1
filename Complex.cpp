#include "Complex.h"

Complex Complex::sum(Complex n2) {
    double rel = this->re + n2.re;
    double img = this->im + n2.im;
    return { img, rel };
}
Complex Complex::subs(Complex n2) {
    double rel = this->re - n2.re;
    double img = this->im - n2.im;
    return { img, rel };
}
Complex Complex::multi(Complex n2) {
    double rel = this->re * n2.re - this->im * n2.im;
    double img = this->re * n2.im + this->im * n2.re;
    return { img, rel };
}
Complex Complex::div(Complex n2) {
    double rel = (this->re * n2.re + this->im * n2.im) / (n2.re * n2.re + n2.im * n2.im);
    double img = (this->im * n2.re - this->re * n2.im) / (n2.re * n2.re + n2.im * n2.im);
    return { img, rel };
}
double Complex::leng() {
    return sqrt(this->re * this->re + this->im * this->im);
}
void Complex::prin(Complex n) {
    cout << n.re << ((n.im > 0) ? "+" : "") << n.im << "i" << endl;
}
