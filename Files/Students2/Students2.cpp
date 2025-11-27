#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student
{
    string lastName;
    string firstName;
    string middleName;
    char gender;
    string dateOfBirth;
};

int peopleCount(const string& fileName)
{
    ifstream f(fileName);
    if (f.is_open())
    {
        int lines = 0;
        string line;
        while (getline(f, line))
        {
            lines++;
        }
        f.close();
        return lines / 6;
    }
    return -1;
}

Student* getStudentsFromFile(const string& fileName, int count)
{
    ifstream f(fileName);
    if (f.is_open())
    {
        auto students = new Student[count];
        int index = 0;
        string lastName;
        string firstName;
        string middleName;
        string gender;
        string dateOfBirth;
        string avgMark;
        while (getline(f, lastName))
        {
            getline(f, firstName);
            getline(f, middleName);
            getline(f, gender);
            getline(f, dateOfBirth);
            getline(f, avgMark);
            students[index].lastName = lastName;
            students[index].firstName = firstName;
            students[index].middleName = middleName;
            students[index].gender = gender[0];
            students[index].dateOfBirth = dateOfBirth;
            students[index].avgMark = stod(avgMark);
            index++;
        }
        f.close();
        return students;
    }
    return nullptr;
}

void printStudents(Student* students, int count)
{
    if (students != nullptr)
    {
        for (int i = 0; i < count; i++)
        {
            cout << students[i].firstName << " " <<
                students[i].lastName << " " <<
                students[i].middleName << " " <<
                students[i].dateOfBirth << " " <<
                students[i].gender << " " << 
                students[i].avgMark <<
                endl;
        }
    }
}

int main()
{
    //setlocale(LC_CTYPE, "");
    system("chcp 1251");
    const string dbName = "..\\AddStudents\\Students1.txt";
    int count = peopleCount(dbName);
    std::cout << "Кол-во студентов: " <<
        count << "\n";
    if (count > 0)
    {
        Student* students = getStudentsFromFile(dbName, count);
        printStudents(students, count);
        delete[] students;
    }
}