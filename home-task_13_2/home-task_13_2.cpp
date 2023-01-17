#include <iostream>
using namespace std;
//Задание 1.
//Используя два указателя на массив целых
//чисел, скопировать один массив в другой.Использовать
//в программе арифметику указателей для продвижения
//по массиву, а также оператор разыменования.
const int SIZE = 6;
void f1() {
    int arr[SIZE]{ 4,6,1,0,1,9 };
    int arr1[SIZE];
    int* ptr = arr;
    int* ptr2 = arr1;
    cout << "Первый массив" << endl;
    for (int i = 0; i < SIZE; i++)
        cout << *(ptr + i) << " ";
    cout << endl;
    cout << "Второй массив" << endl;
    for (int i = 0; i < SIZE; i++) {
        *(ptr2 + i) = *(ptr + i);
        cout << *(ptr2 + i) << " ";
    }
    cout << endl;
}
//Задание 2. 
//Используя указатель на массив целых чисел,
//изменить порядок следования элементов массива на
//противоположный.
//Использовать в программе арифметику указателей
//для продвижения по массиву, а также оператор разыменования.
void f2() {
    int arr[SIZE]{ 4,6,1,0,1,9 };
    int* ptr = arr;
    int temp;
    cout << "Первый массив" << endl;
    for (int i = 0; i < SIZE; i++)
        cout << *(ptr + i) << " ";
    cout << endl;
    cout << "Второй массив " << endl;
    for (int i = 0, j = SIZE - 1; i < SIZE; i++, j--) {
        temp = *(ptr + i);
        temp = *(ptr + j);
        cout << *(ptr + j) << " ";
    }
    cout << endl;
}
//Задание 3. 
//Используя два указателя на массивы целых
//чисел, скопировать один массив в другой так, чтобы во
//втором массиве элементы находились в обратном порядке.
//Использовать в программе арифметику указателей
//для продвижения по массиву, а также оператор разыменования.
void f3() {
    int arr[SIZE]{ 4,6,1,0,1,9 };
    int arr1[SIZE];
    int* ptr = arr;
    int* ptr2 = arr1;
    cout << "Первый массив" << endl;
    for (int i = 0; i < SIZE; i++)
        cout << *(ptr + i) << " ";
    cout << endl;
    cout << "Второй массив" << endl;
    for (int i = 0, j = SIZE; i < SIZE; i++, j--) {
        *(ptr2 + i) = *(ptr + j - 1);
        cout << *(ptr2 + i) << " ";
    }
    cout << endl;
}
int main()
{
    setlocale(LC_ALL, "");
    //Задание 1.
    cout << "Home task #13.2.1\n\n";
    f1();
    system("pause");
    system("cls");
    //Задание 2.
    cout << "Home task #13.2.2\n\n";
    f2();
    system("pause");
    system("cls");
    //Задание 3.
    cout << "Home task #13.2.3\n\n";
    f3();
}