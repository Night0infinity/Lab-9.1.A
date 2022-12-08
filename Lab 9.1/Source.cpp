#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h> // забезпечення відображення кирилиці
using namespace std;

struct Student
{
	string prizv;
	string kurs;
	string specialnist;
	unsigned fizika;
	unsigned matematika;
	unsigned informatika;
};
void Create(Student* p, const int N);
void Print(Student* p, const int N);
double Amount(Student* p, const int N);
void MiddleAverage(Student* p, const int N);
int main()
{ // забезпечення відображення кирилиці:
	SetConsoleCP(1251); // встановлення сторінки win-cp1251 в потік вводу
	SetConsoleOutputCP(1251); // встановлення сторінки win-cp1251 в потік виводу

	int N;
	cout << "Введіть N: "; cin >> N;

	Student* p = new Student[N];
	Create(p, N);
	Print(p, N);
	MiddleAverage(p, N);
	int f = Amount(p, N);
	cout << setw(3) << right
		<< " " << f << endl;
	return 0;
}
void Create(Student * p, const int N)
{
	int posada;
	for (int i = 0; i < N; i++)
	{
		int n = 0;
		cout << "Студент № " << i + 1 << ":" << endl;
		cin.get(); // очищуємо буфер клавіатури – бо залишаються символи
		cin.sync(); // "кінець рядка", які не дають ввести наступний літерний рядок

		cout << " прізвище: "; getline(cin, p[i].prizv);
		cout << " курс: "; getline(cin, p[i].kurs);
		//cout << " курс: "; cin >> p[i].kurs;
		cout << " спеціальність: "; getline(cin, p[i].specialnist);
		//cout << " спеціальність: "; cin >> p[i].specialnist;
		cout << " Бал з фізики: "; cin >> p[i].fizika;
		cout << " Бал з математики: "; cin >> p[i].matematika;
		cout << " Бал з інформатики: "; cin >> p[i].informatika;
		cout << endl;
	}
}
void MiddleAverage(Student* p, const int N)
{
	double nlocf = 0., nlocm = 0. , nloci = 0.;
	double numf = 0, numm = 0, numi = 0;
	for (int i = 0; i < N; i++)
	{
		if (true)
		{
			nlocf += p[i].fizika;
			numf ++;
		}
	}
	double resf = nlocf / numf;
	cout << "Середній бал з фізики : " << resf << endl;

	for (int i = 0; i < N; i++)
	{
		if (true)
		{
			nlocm += p[i].matematika;
			numm++;
		}
	}
	double resm = nlocm / numm;
	cout << "Середній бал з математики : " << resm << endl;

	for (int i = 0; i < N; i++)
	{
		if (true)
		{
			nloci += p[i].informatika;
			numi++;
		}
	}
	double resi = nloci / numi;
	cout << "Середній бал з інформатики : " << resi << endl;
}
double Amount(Student* p, const int N)
{
	cout << "Кількість студентів, які отримали з фізики оцінки “5” або “4”" << endl;

	int k = 0;
	int n = 0;
	int nloc = 0;
	for (int i = 0; i < N; i++)
	{
		if (true)
		{
			n++;
			if (p[i].fizika == 5 || p[i].fizika == 4)
			{
				k++;
				nloc += k;
			}
		}
	}
	return k;
}

void Print(Student* p, const int N)
{
	cout << "==================================================================================="
		<< endl;
	cout << "__________________________________________|                Бали                   |"
		<< endl;
	cout << "|  №  |  Прізвище  | Курс | Спеціальність |  Фізика  |  Математика  | Інформатика |"
		<< endl;
	cout << "-----------------------------------------------------------------------------------"
		<< endl;
	for (int i = 0; i < N; i++)
	{
		cout << "| " << setw(3) << right << i + 1 << " ";
		cout << "| " << setw(1) << left << p[i].prizv
			<< "| " << setw(4) << right << p[i].kurs << " "
			<< "| " << setw(11) << left << p[i].specialnist
			<< "| " << setw(4) << right << p[i].fizika << " "
			<< "| " << setw(4) << right << p[i].matematika << " "
			<< "| " << setw(4) << right << p[i].informatika << " |" << endl;
	}

	
	cout << "==================================================================================="
		<< endl;
	cout << endl;
}