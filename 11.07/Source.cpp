#include<iostream>
#include<vector>
#include<array>
#include<string>
#include<set>
#include "Source.h"

using namespace std;

class Car {
public:
	virtual int get_weight() = 0;
	virtual int get_price() = 0;
	virtual void set_weight() = 0;
	virtual void set_price() = 0;
	virtual void add_car() = 0;
	
	


};
class mini_car  {
public:
	mini_car(int weight,int price) {
		this->weight = weight;
		this->price = price;
		int static num = 0;
		num+= weight;
	}

	int get_weight()const{
		return weight;
	}
	int get_price()const{
		return price;
	}
	void set_weight(int weight) {
		this->weight= weight;
	}
	 void set_price(int price){
		 this->price= price;
	} 

	 //void all_weight_lite_1() {

		// vector<mini_car>mass;
		// mass.emplace_back(get_weight());
		// 
	 //}
	 //void all_price_lite_1() {
		// vector<mini_car>mass;
		// mass.emplace_back(get_weight());

		// 
	 //}
	 
	/*int qwe(mini_car& other) {
		 vector<int>tmp_p;
		 tmp_p.emplace_back(other.price);
		 int a;
		 for (auto el : tmp_p) {
			 a += el;
		 }
		 return a;
	 }
	 */

	 

	 
	 
private:
	int weight;
	int price;

};



//class Big_car {
//public:
//	int get_weight()const {
//		return weight_;
//	}
//	int get_price()const {
//		return price_;
//	}
//	void set_weight(int weight) {
//		weight_ = weight;
//	}
//	void set_price(int price) {
//		price_ = price;
//	}
//	void add_car() {
//		vector<Car*>data;
//		data.emplace_back(get_price());
//
//	}
//
//
//
//private:
//	int weight_;
//	int price_;
//
//
//};


int main() {
	using namespace std;
	system("chcp 1251>null");
	mini_car car1(2000, 700);
	mini_car car2(2002, 200);
	mini_car car3(2003, 100);
	vector<int>a;
	a.reserve(5);
	a.emplace_back(car1.get_price(), car2.get_price(), car3.get_price());
	for (auto el : a) {
		cout<<el;
	}
	





	system("pause>nul");
	return 0;
}