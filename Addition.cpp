#include <iostream>

class Addition {
private:
    int num1, num2, sum;

public:
    // Constructor
    Addition(int a, int b) {
        num1 = a;
        num2 = b;
        sum = num1 + num2;
    }

    // Function to display the sum
    void displaySum() {
        std::cout << "Sum: " << sum << std::endl;
    }
};

int main() {
    
    Addition add(5, 2222);

    // Displaying the sum
    add.displaySum();

    return 0;
}
