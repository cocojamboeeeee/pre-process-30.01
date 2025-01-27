#include <iostream>
#include <string>

using namespace std;

// Структура для Стиральной машинки
struct WashingMachine {
    string brand;
    string color;
    double width;
    double length;
    double height;
    double power;
    double spinSpeed;
    double heatingTemp;

    void display() {
        cout << "Стиральная машинка:" << endl;
        cout << "Марка: " << brand << endl;
        cout << "Цвет: " << color << endl;
        cout << "Ширина: " << width << " см" << endl;
        cout << "Длина: " << length << " см" << endl;
        cout << "Высота: " << height << " см" << endl;
        cout << "Мощность: " << power << " Вт" << endl;
        cout << "Скорость отжима: " << spinSpeed << " об/мин" << endl;
        cout << "Температура нагрева: " << heatingTemp << " °C" << endl;
    }
};

// Структура для Утюга
struct Iron {
    string brand;
    string model;
    string color;
    double minTemp;
    double maxTemp;
    bool steamSupply;
    double power;

    void display() {
        cout << "Утюг:" << endl;
        cout << "Марка: " << brand << endl;
        cout << "Модель: " << model << endl;
        cout << "Цвет: " << color << endl;
        cout << "Минимальная температура: " << minTemp << " °C" << endl;
        cout << "Максимальная температура: " << maxTemp << " °C" << endl;
        cout << "Подача пара: " << (steamSupply ? "Да" : "Нет") << endl;
        cout << "Мощность: " << power << " Вт" << endl;
    }
};

// Структура для Бойлера
struct Boiler {
    string brand;
    string color;
    double power;
    double volume;
    double heatingTemp;

    void display() {
        cout << "Бойлер:" << endl;
        cout << "Марка: " << brand << endl;
        cout << "Цвет: " << color << endl;
        cout << "Мощность: " << power << " Вт" << endl;
        cout << "Объем: " << volume << " л" << endl;
        cout << "Температура нагрева: " << heatingTemp << " °C" << endl;
    }
};

// Структура для Животного
struct Animal {
    string name;
    string species;
    string nickname;

    void input() {
        cout << "Введите название животного: ";
        cin >> name;
        cout << "Введите класс (вид): ";
        cin >> species;
        cout << "Введите кличку: ";
        cin >> nickname;
    }

    void display() {
        cout << "Животное:" << endl;
        cout << "Название: " << name << endl;
        cout << "Класс: " << species << endl;
        cout << "Кличка: " << nickname << endl;
    }

    void makeSound() {
        cout << "Животное " << nickname << " издает звук!" << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "ru");
    // Пример работы со Стиральной машинкой
    WashingMachine wm = { "LG", "Белый", 60, 60, 85, 2000, 1400, 90 };
    wm.display();
    cout << endl;

    // Пример работы с Утюгом
    Iron iron = { "Philips", "GC4930", "Синий", 120, 220, true, 2400 };
    iron.display();
    cout << endl;

    // Пример работы с Бойлером
    Boiler boiler = { "Ariston", "Белый", 1500, 80, 75 };
    boiler.display();
    cout << endl;

    // Пример работы с Животным
    Animal animal;
    animal.input();
    animal.display();
    animal.makeSound();

    return 0;
}
