#include <iostream>
#include <vector>

class Car {
public:
    virtual void bar() = 0;
};

class ExactCar:public Car {
public:
    void bar() {
    }
};

class CarCollection {
public:

    virtual ~CarCollection() = default;
    virtual ~CarCollection() {
        for (auto&& car : data_) {
            delete car;
        }
    }


    void insert(Car* car) {
        data_.push_back(car);
    }

    (Car*&) operator[](int i) {
        return data_[i];
    }

private:
    std::vector<Car*> data_;
};

int main()
{
    std::cout << "Hello World!\n";
}