#include <iostream>

class UpAndDownCounter {
private:
    int count; 
public:
    
    UpAndDownCounter() {
        count = 0;
    }

    void countUp() {
        if (count < 20) {
            count++;
        }
    }

    void countDown() {
        if (count > 0) {
            count--;
        }
    }

    
    int getCount() const {
        return count;
    }
};

int main() {
    UpAndDownCounter counter;

    for (int i = 0; i < 20; i++) {
        counter.countUp();
        std::cout << "Count: " << counter.getCount() << std::endl;
    }

    for (int i = 0; i < 20; i++) {
        counter.countDown();
        std::cout << "Count: " << counter.getCount() << std::endl;
    }

    return 0;
}