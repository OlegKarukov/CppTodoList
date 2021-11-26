//
// Created by paefarinov on 19.11.2021.
//
#include "Task.h"

using namespace std;

string Task::display() {
    return "name: " + name +
           "\ndescription: " + description +
           "\ndueTo: " + to_string(dueTo) +
           "\nTaskStatus: "  + (status == 0 ? "ACTIVE" : "RESOLVED")
           + "\n  " + asctime(localtime(&CreateTime));
}
Task::Task() {
    time(&CreateTime);
}
Task::Task(string name, string description) {
    time(&CreateTime);
    this->name = name;
    this->description = description;
}
void Task::setName(string name){
    this->name = name;
}
string Task::getName() {
    return name;
}
void Task::setDescription(string desk) {
    this->description = desk;
}
string Task::getDescription() {
    return description;
}
void Task::setStatus(TaskStatus status){
    this->status = status;
}
TaskStatus Task::getStatus(){
    return status;
}