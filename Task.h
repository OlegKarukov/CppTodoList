//
// Created by paefarinov on 19.11.2021.
//

#ifndef UNTITLED_TASK_H
#define UNTITLED_TASK_H

#include<string>
#include "TaskStatus.h"
#include <ctime>
#include <chrono>
using namespace std;

class Task {
public:
    Task();
    Task(string name, string description);
    string display();
    void setName(string name);
    string getName();
    void setDescription(string desk);
    string getDescription();
    void setStatus(TaskStatus status);
    TaskStatus getStatus();
private:
    string name;
    string description;
    int dueTo;
    time_t CreateTime;
    TaskStatus status = ACTIVE;
};

#endif //UNTITLED_TASK_H
