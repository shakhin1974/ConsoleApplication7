#include <iostream>
#include <string>
#include<windows.h>
#include<fstream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include <sstream>
using namespace std;
int Stroka(string s)
{
    int NumL = 0;
    string stroka;
    ifstream fin;
    fin.open(s);
    while (getline(fin, stroka))
    {
        if (!stroka.empty())
        {
            NumL++;
        }
    }
    return NumL;
}
int Probeli(string s)
{
    int NumL = 0;
    ifstream fin;
    fin.open(s);
    while (!fin.eof())
    {
        char  ch; fin.get(ch);
        if (ch == ' ') { NumL++; }
    }
    return NumL;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ofstream fout;
    ifstream fin;
    int a = Stroka("student.txt");
    int b = Probeli("student.txt");
    cout << "Stroka = " << a
        << " Probeli = " << b << endl;
    int c = a + b;
    fin.open("student.txt");
    vector<string> student;
    for (size_t i = 0; i < c; i++)
    {
        string s1;
        fin >> s1;
        student.push_back(s1);
    }
    fin.close();
    // алгоритм Филина Дмитрия Антоновича и Сидорова Дмитрия Александровича
    vector <int> vozr;
    int Num = 10;
    for (int i = Num - 6; i < student.size(); i = i += Num)
    {
        if (student[i] != "0") {
            vozr.push_back(stoi(student[i].c_str()));
        }
    }
    vector<int> Array;
    vozr.swap(Array);
    for (size_t i = 0; i < Array.size(); i++)
    {
        cout << Array[i] << " ";
    }
    fin.open("student.txt");
    vector<string> predm;
    for (size_t i = 0; i < 10; i++)
    {
        string i1; fin >> i1; predm.push_back(i1);
    }
    // алгоритм Степанова Давида Эдуардовича
    int Num1 = 10; for (int i = Num1 - 4; i < 7; i = i++) {
        predm.erase(predm.begin(), predm.end() - 4); for (size_t j = 0; j < 10; j++)
        {
            string i1; fin >> i1; predm.push_back(i1);
        }
    }
     
    for (size_t i = 0; i < 4; i++) { cout << predm[i]; }
    fin.close();
    /*

    vector<int> Array;
    for (int i = 0; i < c; i++)
    {
        string s;
        fin >> s;
        Array.push_back(getx(i, s));
    }
    fin.close();

    for (size_t i = 0; i < c; i++)
    {
        cout << Array[i];
    }
    /*
    fin.open("student.txt");
    int* vozr = new int[c];
    int Num = 10;
    for (int i = Num - 6; i < c; i = i += Num)
    {
        vozr[i] = stoi(student[i]);

    }
    fin.close();
    */

    /*
    fin.open("student.txt");
vector<string> predm; for (size_t i = 0; i < 10; i++) { string i1; fin >> i1; predm.push_back(i1); }
int Num1 = 10; for (int i = Num1 - 4; i < 7; i = i ++) { predm.erase(predm.begin(), predm.end()-4); for (size_t j = 0; j < 10; j++)
        { string i1; fin >> i1; predm.push_back(i1); } }
    for (size_t i = 0; i < 4; i++) { cout << predm[i]; }
     fin.close();
    /*
 int a = Stroka("student.txt");
 int b = Probeli("student.txt");
 int c = a + b;
 int d = b / a + 1;
 cout << "Кол-во строк = " << a << endl;
 cout << "Кол-во пробелов = " << b << endl;
 cout << "Koл-во столбцов = " << d << endl;

 vector<string> stud;
 fin.open("student.txt");

 for (size_t i = 0; i < c; i++)
 {   string s;
     fin >> s;
     stud.push_back(s); }
 fin.close();

 string array[42];
 int Num = 6;
 for (int i = Num - 3; i < c; i = i+=Num)
 {

       array[i] = stud[i];


 }
 for (size_t i = 0; i < c; i++)
 {
     cout << array[i]<<" ";
 }

 /*
 vector<string> stud3;
    fin.open("student.txt");
    for (size_t i = 0; i < a; i++)
    {
        string s;
        getline(fin, s);
        stud3.push_back(s);
    }
    fin.close();
    sort(stud3.begin(), stud3.end());
    for (size_t i = 0; i < a; i++)
    {
        cout << stud3[i] << endl;
    }
   */
}