#pragma once
#include <iostream>
#include <Windows.h>
#include <iostream>
#include <string>
#include<sstream>
#include"Date.h"
#include"Time.h"
#include"Program.h"
using namespace std;
class ProgramSchedule {
private:
	Program* programs; // масив об'єктів класу Program
	int size; // розмір масиву
public:
	ProgramSchedule(int size) {
		this->size = size;
		programs = new Program[size];
	}

	~ProgramSchedule() {
		delete[] programs;
	}

	// Гетер та сетер для елемента масиву programs
	Program& operator[](int index) {
		return programs[index];
	}

	// Виведення всіх програм у розкладі
	void display() const {
		for (int i = 0; i < size; i++) {
			programs[i].display();
			cout << endl;
		}
	}
};
