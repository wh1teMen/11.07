#include<iostream>
#include<vector>
using namespace std;
class Car {
public:
	virtual void set_weight(int weight)=0;
	virtual void set_price(int price) = 0;
	virtual int get_weight() = 0;
	virtual int get_price() = 0;
};
class m_car:public Car {
public:
	m_car(){}
	m_car(int weight, int price) {
		this->weight = weight;
		this->price = price;
	}

	void set_weight(int weight) {
		this->weight = weight;
	}
	void set_price(int price) {
		this->price = price;
	}
	int get_weight() {
		return this->weight;
	}
	int get_price() {
		return this->price;
	}


private:
	int weight;
	int price;
};




class CarCollection {
public:

	virtual ~CarCollection() = default;

	void insert(Car* car) {
		data_.push_back(car);
		
	}

	
	
	
private:
	std::vector<Car*> data_;
};


int main() {
	system("chcp 1251>nul");
	m_car car1{ 100,3400 };
	m_car car2{ 102,14400 };
	CarCollection big;
	big.insert(&car1); 
	big.insert(&car2);
	
	


	system("pause>nul");
	return 0;
}