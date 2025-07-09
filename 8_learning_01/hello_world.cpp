#include <iostream>
using namespace std;
int main()
{
     cout << "Hello world !" << endl;

     // integer input output
     int x; // declaration
     x = 5; // assignment
     int y = 6;
     int sum = x + y;
     std::cout << x << std::endl;
     std::cout << y << '\n';
     std::cout << sum << std::endl;

     // integer (whole number without decimal)
     int age = 23;
     int year = 2025;
     int days = 7;
     cout << age << endl;
     std::cout << year << endl
               << days << endl;

     // double (number including decimal)
     double price = 10.55;
     double gpa = 3.33;
     double temperature = 32.54;
     std::cout << price << endl
               << gpa << endl
               << temperature << endl;

     // singla character
     char grade = 'B';
     char blood = 'AS';
     char currency = '$';

     std::cout << grade << endl
               << blood << endl
               << currency << endl;

     // boolean (true or false)
     bool student1 = true;
     bool student2 = false;
     bool light = true;
     bool forsale = false;
     cout << student1 << endl
          << student2 << endl
          << light << endl
          << forsale << endl;

     // string (objects that represents a sequence of text)
     std::string name = "mehedihasantsx";
     string date = "07/07/2025";
     string day = "Holiday";
     string address = "West Dhanmondi-15";
     cout << name << endl
          << date << endl
          << address << endl
          << day << endl;

     // i can also write string like below

     cout << "Hello! My name is " << name << ". Today is " << date << " and " << day << endl;

     // when i use namespace std; in after #include<iostream> then the output will be like = cout << "Hello world !" << endl; can also write like below

     // when i don't use that then the output will be like = std::cout << "Hello world !" << "\n";

     return 0;
}