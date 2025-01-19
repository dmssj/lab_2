#include <iostream> //цикл с пред и пост
#include <cmath>

int main() {
    const double R = 1530;
    const double C = 0.81e-7;
    const double pi = 3.14;
    double L[] = {0.05, 0.06, 0.07, 0.08, 0.09, 0.1, 0.2, 0.3, 0.4, 0.5};
    double T;
    std::cout << "L\tT\n";

    for (int i = 0; i < 10; i++) {
        double t1 = 1 / (L[i] * C);
        double t2 = pow((R / (2 * L[i])), 2);
        T = 2000 * pi / sqrt(t1 - t2);
        std::cout << L[i] << "\t";
        std::cout << ((int)(T * 1000)) / 1000.0 << "\n";
    }

    return 0;
}
