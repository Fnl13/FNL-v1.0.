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

// ������� � ���������
int Dil_pr(int a, int b) {
    return a % b;
};

// �������
int Div(int a, int b) {
    div_t result1 = div(a, b);
    return a, b;
};

// ���������� ������
int Squ(int a) {
    int c = sqrt(a);
    return c;
};

// �������
int Cos(int a) {
    double c = cos(a);
    return c;
};

// �����
int Sin(int a) {
    double c = sin(a);
    return c;
};

// �������
int Tan(int a) {
    double c = tan(a);
    return c;
};

// ���������
int Cot(int a) {
    double c = tan(a);
    return c;
};

// ���� ������
int Mor(int a, int b) {
    return a > b;
}

// ���� ������
int Les(int a, int b) {
    return a < b;
}

// ���������� � �������
int Deg(int a, int b) {
    int c = a * b;
    return c * b;
}

// ���������������� ��������
int Tran(int a, int b) {
    int c = a * b;
    return c = b * a;
}

// ������������� ��������
int Dist(int c, int a, int b) {
    return c * (a + b);
}

// �������� 2
int Log2(int a) {
    double c = log(a);
    return c;
}

// �������� 10
int Log10(int a) {
    double c = log10(a);
    return c;
}

// ���������� ��������� �������������� 
int Per_rect(int a, int b) {
    return (a + b) * 2;
}

// ���������� ��������� ��������
int Per_box(int a) {
    return a * 4;
}

// ���������� ��������� ������������
int Per_tri(int a, int b, int c) {
    return a + b + c;
}

// ���������� ��������� ����� �� �������
int Per_cir_r(int a) {
    return a * 3.1415;
}

// ���������� ��������� ����� �� ��������
int Per_cir_d(int a) {
    return a * 3.1415;
}

// ���������� ������� ��������������
int Sq_rect(int a, int b) {
    return a * b;
}

// ���������� ������� ��������
int Sq_box(int a) {
    return a * a;
}

// ���������� ������� ������������
int Sq_tri(int a, int b) {
    return 0.5 * a * b;
}

// ���������� ������� ����� �� �������
int Sq_cir_r(int a) {
    int c = a * 2;
    int d = c * 2;
    return d * 3.1415;
}

// ���������� ������� ����� �� ��������
int Sq_cir_d(int a) {
    int c = a / 2;
    int d = c * 2;
    return d * 3.1415;
}

// ����������
int Dis(int v, int t) {
    int s = v * t;
    return s;
}

// ��������
int Spe(int s, int t) {
    int v = s / t;
    return v;
}

// �����
int Tim(int s, int v) {
    int t = s / v;
    return t;
}

// ���������
int Est(int a, int b) {
    int t = a - b;
    return t;
}

// ���������
int Con(int a, int b) {
    int t = a + b;
    return t;
}





