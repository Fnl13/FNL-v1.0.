#include <iostream>
#include "FNL.h"
using namespace std;


// +
int Sum(int a, int b) {
    return a + b;
};

// -
int Sub(int a, int b) {
    return a - b;
};

// *
int Mul(int a, int b) {
    return a * b;
};

// :
int Dil(int a, int b) {
    return a / b;
};

// Деление с процентом
int Dil_pr(int a, int b) {
    return a % b;
};

// остаток
int Div(int a, int b) {
    div_t result1 = div(a, b);
    return a, b;
};

// квадратный корень
int Squ(int a) {
    int c = sqrt(a);
    return c;
};

// косинус
int Cos(int a) {
    double c = cos(a);
    return c;
};

// синус
int Sin(int a) {
    double c = sin(a);
    return c;
};

// тангенс
int Tan(int a) {
    double c = tan(a);
    return c;
};

// котангенс
int Cot(int a) {
    double c = tan(a);
    return c;
};

// знак больше
int Mor(int a, int b) {
    return a > b;
}

// знак меньше
int Les(int a, int b) {
    return a < b;
}

// возведение в степень
int Deg(int a, int b) {
    int c = a * b;
    return c * b;
}

// переместительное свойство
int Tran(int a, int b) {
    int c = a * b;
    return c = b * a;
}

// сочетательное свойство
int Dist(int c, int a, int b) {
    return c * (a + b);
}

// логарифм 2
int Log2(int a) {
    double c = log(a);
    return c;
}

// логарифм 10
int Log10(int a) {
    double c = log10(a);
    return c;
}

// вычисление периметра прямоугольника 
int Per_rect(int a, int b) {
    return (a + b) * 2;
}

// вычисление периметра квадрата
int Per_box(int a) {
    return a * 4;
}

// вычисление периметра треугольника
int Per_tri(int a, int b, int c) {
    return a + b + c;
}

// вычисление периметра круга по радиусу
int Per_cir_r(int a) {
    return a * 3.1415;
}

// вычисление периметра круга по диаметру
int Per_cir_d(int a) {
    return a * 3.1415;
}

// вычисление площади прямоугольника
int Sq_rect(int a, int b) {
    return a * b;
}

// вычисление площади квадрата
int Sq_box(int a) {
    return a * a;
}

// вычисление площади треугольника
int Sq_tri(int a, int b) {
    return 0.5 * a * b;
}

// вычисление площади круга по радиусу
int Sq_cir_r(int a) {
    int c = a * 2;
    int d = c * 2;
    return d * 3.1415;
}

// вычисление площади круга по диаметру
int Sq_cir_d(int a) {
    int c = a / 2;
    int d = c * 2;
    return d * 3.1415;
}

// расстояние
int Dis(int v, int t) {
    int s = v * t;
    return s;
}

// скорость
int Spe(int s, int t) {
    int v = s / t;
    return v;
}

// время
int Tim(int s, int v) {
    int t = s / v;
    return t;
}

// отдаление
int Est(int a, int b) {
    int t = a - b;
    return t;
}

// сближение
int Con(int a, int b) {
    int t = a + b;
    return t;
}





