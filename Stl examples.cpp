#include <iostream>
#include <vector>
#include <array>
#include <string>

/*
    Создать образец паттерна компоновщик(пакет с пакетами)
    на примере автомобилей для крупного автоцетнтра
    При веревозке втомобилей из точки А в точку Б
    Мы считаем что это происходет на большегрузном тягаче 
    с платформой для перевозки легковых авто.
    Автомобили имеют свойства веса и стоимости.
    При вызове метода Общей стоимости автомобиль должен 
    Вернуть стоимость свою и всех размещённых на нём авто
    базовый клас композита должен предписывать наличие методов:
    получения общих свойств(стоимость, вес)
    добавления автомобиля в груз(*изъятия авто из груза)

    В тестовом коде создать большегруз наполненный газелькой,
    2-3 легковыми авто и в газельку надо разместить запарожец.
*/


class A {};

class User {
    int id;
    std::string name;
    User() = delete;    
public:   
    explicit User(int num,std::string name) 
        :id(num),name(name) {}
};

int main()
{
    using namespace std;
    int a;
    //float f;
    //__int16 shor;
    //vector<float> coll1;
    array<int, 10> coll2;
    vector<User> col3;
    //col3.reserve(100'000);
    //array<User, 10> coll4;
    for (int i = 0; i < 100000; i++)
    {
        col3.emplace_back(i, "long name for example");
    }
    a = col3.capacity();
    col3.shrink_to_fit();
    a = col3.capacity();

    vector<User> col5;
    col5.reserve(100'000);
    for (int i = 0; i < 100'000; i++)
    {
        col5.push_back(User(i, "long name for example"));
    }
    int arr[5];
    for (auto ae : arr) {

    }
    
    return 0;
}
