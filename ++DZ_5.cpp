#include <iomanip>
#include <conio.h>
#include <iostream>
#include <Windows.h>

using namespace std;


class Reservoir {
public:
	string name;
	double width;
	double length;
	double max_depth;
	string type;

	Reservoir() {
		name = "Вишенське озеро";
		width = 50;
		length = 70;
		max_depth = 10;
		type = "Озеро";
	}

	Reservoir(string name, double width, double length, double max_depth, string type) {
		this->name = name;
		this->width = width;
		this->length = length;
		this->max_depth = max_depth;
		this->type = type;


	}
	~Reservoir() {
		this->name.clear();
		width = 0;
		length = 0;
		max_depth = 0;
		this->type.clear();
	}

	void volume() {
		double volume;
		volume = width * length * max_depth;
		cout << " Обсяu водойми: " << volume << " метрів кубічних" << endl;
	}

	void Surface_Area() {
		double Area;
		Area = width * length;
		cout << "Площа поверхні водойми: " << Area << " метрів квадратних" << endl;
	}

	void Print()
	{
		cout << "Виведення інформації про водойму" << endl;
		cout << "|Назва водойми: " << name << endl;
		cout << "|Ширина водойми: " << width << endl;
		cout << "|Довжина водойми: " << length << endl;
		cout << "|Максимальна глибина: " << max_depth << endl;
		cout << "|Тип водойми: " << type << endl;

	}

	void AddNew()
	{
		cout << "Виведення водойми " << endl;
		cout << "|Назва водойми|" << endl;
		cin >> name;
		cout << "|Ширина водойми|" << endl;
		cin >> width;
		cout << "|Довжина водойми|" << endl;
		cin >> length;
		cout << "|Максимальна глибина|" << endl;
		cin >> max_depth;
		cout << "|Тип водойми: " << endl;
		cin >> type;
	}


};
Reservoir& CopyReservoir(Reservoir& object1, Reservoir& object2)
{
	object1.type = object2.type;
	object1.name = object2.name;
	object1.length = object2.length;
	object1.width = object2.width;
	object1.max_depth = object2.max_depth;
	return object1;
}

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	Reservoir inst1;
	inst1.AddNew();
	inst1.Print();
	inst1.volume();
	inst1.Surface_Area();
	cout << "-------------------------" << endl;
	Reservoir inst2;
	inst2.AddNew();
	inst2.Print();
	inst2.volume();
	inst2.Surface_Area();
	CopyReservoir(inst1, inst2);


	return 0;
	_getch();

}