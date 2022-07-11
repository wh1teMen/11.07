#include<iostream>
#include<vector>
#include<array>
#include<string>
#include<set>

using namespace std;
//class User {
//	int id;
//	std::string name;
//	User() = delete;
//	
//public:
//	explicit User(int num,std::string name):id(num),name(name) {}
//	
//};
class Car {
public:
	virtual int get_weight() = 0;
	virtual int get_price() = 0;
	virtual void set_weight() = 0;
	virtual void set_price() = 0;
	
	

};
class Lite_car :public Car {
public:
	Lite_car(int weight,int price) {
		this->weight = weight;
		this->price = price;
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

	 int all_weight_lite() {

		 vector<Lite_car>mass;
		 mass.emplace_back(get_weight());
		 return;
	 }
	 
	 
	 
private:
	int weight;
	int price;

};

class Big_car :public Car {
public:
	int get_weight()const {
		return weight_;
	}
	int get_price()const {
		return price_;
	}
	void set_weight(int weight) {
		weight_ = weight;
	}
	void set_price(int price) {
		price_ = price;
	}
	void a() {
		vector<Car*>data;
		data.emplace_back(get_weight());

	}
	
	
	

private:
	int weight_;
	int price_;


};


int main() {
	using namespace std;
	system("chcp 1251>null");
	/*int a;
	float f;
	__int16 shor;
	vector<float>coll;
	array<int, 5>coll2;*/
	/*vector<User>coll3;
	for (int i = 0; i < 10000; i++)
	{
		coll3.emplace_back(i,"long name for example");
		                   
	}
	vector<User>coll4;
	for (int i = 0; i < 10000; i++)
	{
		coll4.push_back(User(i, "long name for example"));

	}
	set<int>set;
	auto itbeg = set.begin();
	auto itend = set.end();
	
	 
	vector<Car>data;*/








	system("pause>nul");
	return 0;
}