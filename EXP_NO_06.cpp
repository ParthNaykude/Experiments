#include<iostream>
#include<cmath>
using namespace std;

class Circle {
private:
    int centerA, centerB, radius;

public:
    Circle() {
        centerA= 0;
        centerB = 0;
        radius = 0;
    }

    Circle(int ca, int cb) {
        centerA = ca;
        centerB = cb;
    }

    Circle(int ca, int cb, int r) {
        centerA = ca;
        centerB = cb;
        radius = r;
    }

    void setCenter(int ca, int cb) {
        centerA = ca;
        centerB = cb;
    }

    void setRadius(int r) {
        radius = r;
    }

    double calcArea() const {
        return M_PI * radius * radius;
    }

    double calcCircumference() const {
        return 2 * M_PI * radius;
    }
};

class Line {
private:
    int a1, b1, a2, b2;
    double slope, intercept;

public:
    Line() {
        a1 = 0;
        b1 = 0;
        a2 = 0;
        b2 = 0;
        slope = 0;
        intercept = 0;
    }

    Line(int a1, int b1, int a2, int b2) {
        a1 = a1;
        b1 = b1;
        a2 = b2;
        b2 = b2;
        calculateSlopeAndIntercept();
    }

    void setPoints(int a1, int b1, int a2, int b2) {
        a1 = a1;
        b1 = b1;
        a2 = a2;
        b2 = b2;
        calculateSlopeAndIntercept();
    }

    void calculateSlopeAndIntercept() {
        slope = static_cast<double>(b2 - b1) / (a2 - a1);
        intercept = b1 - slope * a1;
    }

    double getSlope() {
        return slope;
    }

    double getIntercept() {
        return intercept;
    }
};

int main() {

    Circle c1(0, 0, 13);
    cout << "For Circle :" << endl;
    cout << "Area: " << c1.calcArea() << endl;
    cout << "Circumference: " << c1.calcCircumference() << endl << endl;

    Line l1(11, 12, 13, 14);
    cout << "For Line :" << endl;
    l1.calculateSlopeAndIntercept();
    double slope = l1.getSlope();
    double intercept = l1.getIntercept();

    cout << "Slope: " << slope << endl;
    cout << "Intercept: " << intercept << endl;

    return 0;
}
