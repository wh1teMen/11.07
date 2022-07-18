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
int sh(vector<int>& other) {
	int a = 0;
	for (auto& el : other) {
		a += el;
	}
	return a;
}
//class big_car :public Car {
//public:
//	void a(vector<m_car>&other) {
//		vector<big_car>q;
//		q.emplace_back(other);
//		for (auto el : q) {
//			cout << el.get_price();
//			cout << el.get_weight();
//
//		}
//	}
//};
//m_car q(m_car& other) {
//	
//	static int p, w = 0;
//	p += other.get_price();
//	w += other.get_weight();
//}


int main() {
	system("chcp 1251>nul");
	m_car car(2500, 2000);
	m_car car2(4000, 1204);
	m_car car3(5943, 4943);
	
	//cout << car.get_weight()<<"\n";
	//cout << car.get_price();
	vector<int>all_price;
	vector<int>all_weight;
	all_price.reserve(4);
	all_price.emplace_back(car.get_price());
	all_price.emplace_back(car2.get_price());
	all_price.emplace_back(car3.get_price());
	all_weight.emplace_back(car.get_weight());
	all_weight.emplace_back(car2.get_weight());
	all_weight.emplace_back(car3.get_weight());

	int p_all = 0;
	int w_all = 0;
	for (auto el:all_price) {
		p_all += el;
		
	}
	for (auto el : all_weight) {
		w_all += el;
	}
	cout <<"общая стоимость всех машине: "<<sh(all_price) << endl;
	cout << "общий вес машин: " << w_all << endl;
	//a(car);





	system("pause>nul");
	return 0;
}