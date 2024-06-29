#include <iostream>
#include <random>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dis(0.0, 1.0);

    for (int i = 0; i < 10; ++i) {
        double random_number = dis(gen);
        std::cout << random_number << std::endl;
    }

    return 0;
}
