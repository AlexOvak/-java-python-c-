#include <bits/stdc++.h>
using namespace std;

#include <iostream>

int main()
{
	int numbers[4]{1,2,3,4};    // делаем массив из 4 элементов
	int first = numbers[0];		// получаем первый элемент
	std::cout << first << std::endl;	// 1
	numbers[0] = 34;					// изменяем значение элемента
	std::cout << numbers[0] << std::endl; // 34
}
