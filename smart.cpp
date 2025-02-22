#include <iostream>
#include <vector>
#include <string>

// Структура для хранения информации о смартфоне
struct Smartphone {
    std::string manufacturer; 
    int memorySize;           
    int price;        
};

// Функция для ввода информации о смартфоне
void inputSmartphone(Smartphone& phone) {
    std::cout << "Введите производителя: ";
    std::getline(std::cin, phone.manufacturer);  

    std::cout << "Введите объем встроенной памяти (в ГБ): ";
    std::cin >> phone.memorySize; 
    std::cin.ignore(); 

    std::cout << "Введите цену: ";
    std::cin >> phone.price;  
    std::cin.ignore(); 
}

// Функция для вывода информации о смартфоне
void printSmartphone(const Smartphone& phone) {
    std::cout << "Производитель: " << phone.manufacturer << "\n";  
    std::cout << "Объем памяти: " << phone.memorySize << " ГБ\n"; 
    std::cout << "Цена: " << phone.price << " руб.\n";  
}

// Функция для отображения меню
void menu() {
    std::cout << "Меню:\n";
    std::cout << "1. Добавить смартфон\n";
    std::cout << "2. Вывести информацию о всех смартфонах\n";
    std::cout << "3. Завершить программу\n";
    std::cout << "Ваш выбор: ";
}

int main() {
    std::vector<Smartphone> smartphones;  

    while (true) {
        menu();  

        int choice;
        std::cin >> choice;  
        std::cin.ignore(); 

        switch (choice) {
            case 1: { 
                Smartphone phone; 
                inputSmartphone(phone);
                smartphones.push_back(phone); 
                std::cout << "Смартфон добавлен!\n";
                break;
            }
            case 2: { 
                if (smartphones.empty()) { 
                    std::cout << "Нет смартфонов для отображения.\n";
                } else {
                    std::cout << "Информация о смартфонах:\n";
                    for (const auto& phone : smartphones) {  
                        printSmartphone(phone); 
                        std::cout << "\n"; 
                    }
                }
                break;
            }
            case 3: { 
                return 0; 
            }
            default: { 
                std::cout << "Неверный ввод! Попробуйте еще раз.\n";
                break;
            }
        }
    }

    return 0;
}
