#include "Course.h"
#include<iostream>

using namespace std;

Course::Course(int id,string name,int credits) {
    this->id = id;
    this->name = name;
    this->credits = credits;
}
int Course::getId(){
    return id;
}
string Course::getName(){
    return name;
}
int Course::getCredits(){
    return credits;
}
bool Course::hasStudent(Student student) {
    for (int i : students) {
        if (i == student.getId()) {
            return true;
        }
    }
    return false;
}

bool Course::addStudent(Student student) {
if(!hasStudent(student)){
  students.push_back(student.getId());
  return true;
}
return false;
}
void Course::dropStudent(Student student) {
    students.erase(remove(students.begin(),students.end(),student.getId()),students.end());
}
void Course::printDetails() {
    cout<<"Course ID: "<<id<<", "<<"Name: "<<name<<", "<<"Credits: "<<credits<<endl;
    cout<<"Enrolled Students: ";
    for (int i = 0; i < students.size(); i++) {
        cout<<students[i]<<" ";
    }


}

