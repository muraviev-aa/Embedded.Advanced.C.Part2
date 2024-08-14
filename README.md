<a name="readme-top"></a>

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)
![CLion](https://img.shields.io/badge/CLion-black?style=for-the-badge&logo=clion&logoColor=white)
![CMake](https://img.shields.io/badge/CMake-%23008FBA.svg?style=for-the-badge&logo=cmake&logoColor=white)

# Программирование на Си. Продвинутый уровень.
<p align="center">
<img src="images/c.png" alt="drawing" width="300"/>
</p>

### В этом проекте рассмотрены: 

* [Побитовые операции. Указатели](#title1)

* [Структуры. Динамические типы](#title2)

* [Библиотеки языка С](#title3)

* [Алгоритмы](#title5)

-----

### <a id="title1">Часть 1</a>

<strong> &#128194; hw1. Побитовые операции. Указатели </strong> 

* <strong> 1.c </strong> В стандартный поток ввода задается натуральное число N (N > 0), после которого следует
последовательность из N целых чисел. В стандартный поток вывода напечатайте, сколько раз в этой последовательности встречается
максимум.

* <strong> 2.c </strong> На стандартном потоке ввода задается целое неотрицательное число N и последовательность
  допустимых символов в кодировке ASCII, оканчивающаяся точкой. Допустимые символы - латинские
  буквы 'a' ... 'z', 'A' ... 'Z' и пробел. Требуется закодировать латинские буквы ('a' ... 'z', 'A' ... 'Z') шифром
  Цезаря, пробелы вывести без изменения. Число N задает сдвиг в шифре. Шифр Цезаря заключается в
  следующем преобразовании. Пусть буквы алфавита пронумерованы от 0 до K - 1, где K - число
  символов в алфавите. Тогда символ с номером n кодируется символом с номером 
  p = (n + N) mod K (mod - операция взятия остатка). На стандартном потоке вывода напечатать зашифрованное сообщение,
  оканчивающееся точкой. Преобразование требуется выполнять независимо для заглавных и строчных
  латинских букв.

* <strong> 3.c </strong> На вход программе подается беззнаковое 32-битное целое число N и натуральное число K (1 ≤ K ≤ 31).
Требуется циклически сдвинуть биты числа N вправо на K битов и вывести полученное таким образом число.

* <strong> 4.c </strong> На вход программе подается беззнаковое 32-битное целое число N и натуральное число K (1 ≤ K ≤ 31).
Требуется взять K младших битов числа N и вывести полученное таким образом число.

* <strong> 5.c </strong> На вход программе подается беззнаковое 32-битное целое число N и натуральное число K (1 ≤ K ≤ 31).
Требуется взять K подряд идущих битов числа N так, чтобы полученное число было максимальным.
Программа должна вывести полученное число.

* <strong> 6.c </strong> На вход программе подается беззнаковое 32-битное целое число N. Требуется найти количество
единичных битов в двоичном представлении данного числа.

<strong> &#128194; hw1_optional.</strong> 

* <strong> 12.c </strong> Указатель на переменную, указатель, массив, структуру, функцию.

<p align="right">(<a href="#readme-top">вверх</a>)</p>

-----

### <a id="title2">Часть 2</a>

<strong> &#128194; hw2. Структуры. Динамические типы</strong> 

* <strong> 1.c </strong> Функция <strong> void * findMaxBlock(list *head)</strong>, которая в списке находит адрес блока памяти
занимающий больше всего места

<p align="center">
<img src="images/2_1.png" alt="drawing" width="550"/>
</p>

* <strong> 2.c </strong> Функция <strong> size_t totalMemoryUsage(list *head)</strong>, которая анализирует список и возвращает
сколько всего памяти используется.

<p align="center">
<img src="images/2_2.png" alt="drawing" width="550"/>
</p>

<strong> &#128194; hw2_optional.</strong> 

* <strong> 3.c </strong> Поиск утечки памяти с помощью макросов.

<p align="right">(<a href="#readme-top">вверх</a>)</p>

-----

### <a id="title3">Часть 3</a>

<strong> &#128194; hw3. Библиотеки языка С</strong> 

<strong> &#128194; hw3_optional.</strong> 

+ <strong>&#128448; 3_1 Создание статической библиотеки</strong>

+ <strong>&#128448; 3_2 Создание динамической библиотеки</strong>

+ <strong>&#128448; snake Игра змейка</strong>

* <strong> 1.c </strong> Использование библиотеки assert.h;

* <strong> 2.c </strong> Использование библиотеки time.h.

<p align="right">(<a href="#readme-top">вверх</a>)</p>

-----

### <a id="title5">Часть 5</a>

<strong> &#128194; hw3. Библиотеки языка С</strong> 

* <strong> 5.c </strong> Для заданных натуральных чисел N и K требуется вычислить количество чисел от 1 до N, имеющих в
двоичной записи ровно K нулей;

-----

<p align="right">(<a href="#readme-top">вверх</a>)</p>