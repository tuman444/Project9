#include <iostream>
#include <string>
#include <Windows.h>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

struct Student
{
	int id{};
	string fio{};
	char pol{};
	int age{};
	double rost{};
};
void print_student(Student st)
{

}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ofstream fout;
	ifstream fin;
	fout.open("file.txt");

	Student Ivan, Peter, Anna, Evgenii, Lena, Sonya;
	Ivan.id = 1;
	Ivan.fio = "������ ���� ��������"; //������ ���� ��������
	Ivan.pol = 'M'; // �
	Ivan.age = 18;
	Ivan.rost = 1.75;
	
	Student Nastya{ 2, "������� ��������� ������������", '�', 19, 1.77 }; // ������� ��������� ������������ �
	Student Aleksey{ 2, "�������� �������", '�', 19, 1.80 }; // �������� �������", '�'
	print_student(Ivan);
	print_student(Nastya);
	//print_student(Aleksey);
}
void print_student(Student st)
{
	ofstream fout;
	fout.open("file.txt");
	cout << st.id << " " << st.fio << " " << st.pol << " " << st.age << " " << st.rost << endl;
	fout.close();
}
