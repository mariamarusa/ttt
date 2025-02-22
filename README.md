
**Цель:**
Разработать консольное приложение, которое позволяет пользователям возможность добавлять информацию о смартфонах, просматривать все добавленные смартфоны, а также завершать программу.

**Оглавление**
1. Введение
2. Структура данных
3. Основные функции
4. Подробное описание функций
5. Результат запуска программы
6. Заключение

**Введение**
Программа реализует простейшую систему для ввода и вывода информации о смартфонах. Пользователи могут добавлять новые записи, включая производителя, объем памяти и цену, а также просматривать список всех добавленных смартфонов.

**Структура данных**
В программе используется структура Smartphone, которая содержит следующие поля:
- *manufacturer:* строка, представляющая производителя смартфона.
- *memorySize:* целое число, указывающее объем встроенной памяти в гигабайтах.
- *price:* целое число, обозначающее цену смартфона в рублях.

**Основные функции**
Программа включает несколько ключевых функций:
1. *inputSmartphone:* позволяет пользователю вводить данные о смартфоне.
2. printSmartphone: выводит информацию о конкретном смартфоне.
3. menu: отображает меню с доступными опциями для пользователя.

**Подробное описание функций**
- *inputSmartphone:* Эта функция запрашивает у пользователя данные о новом смартфоне: производителя, объем памяти и цену. Введенная информация сохраняется в переданном по ссылке объекте Smartphone.
  
- *printSmartphone:* Принимает объект Smartphone и выводит его свойства на экран, включая производителя, объем памяти и цену.
  
- *menu:* Выводит на экран доступные опции для пользователя, позволяя выбрать действие, которое будет выполнено.
 
**Результат запуска программы:**
Меню:
1. Добавить смартфон
2. Вывести информацию о всех смартфонах
3. Завершить программу
Ваш выбор: 1
Введите производителя: рhone
Введите объем встроенной памяти (в ГБ): 128
Введите цену: 2334444
Смартфон добавлен!
Меню:
1. Добавить смартфон
2. Вывести информацию о всех смартфонах
3. Завершить программу
Ваш выбор: 2
Информация о смартфонах:
Производитель: рhone
Объем памяти: 128 ГБ
Цена: 2334444 руб.

Меню:
1. Добавить смартфон
2. Вывести информацию о всех смартфонах
3. Завершить программу
Ваш выбор: 3


**Заключение**
Выполненная работа представляет собой функциональную программу для управления информацией о смартфонах. Она позволяет эффективно собирать и обрабатывать данные о различных моделях, предоставляя удобный интерфейс для добавления новых устройств и просмотра существующих записей. Такой подход облегчает ведение каталога смартфонов и делает процесс работы с ним более организованным