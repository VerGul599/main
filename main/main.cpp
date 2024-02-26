#include <iostream> 
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double distance, time;

    std::cout << "Введите расстояние до аэропорта (в километрах): ";
    std::cin >> distance;

    std::cout << "Введите время, за которое нужно доехать (в часах): ";
    std::cin >> time;

    double speed = distance / time;

    std::cout << "Чтобы доехать до аэропорта вовремя, Вам нужно ехать со скоростью " << speed << " км/ч." << std::endl;

    return 0;
}