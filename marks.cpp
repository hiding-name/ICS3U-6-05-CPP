// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Dec 2019
// This program takes your mark and calculates average

#include <iostream>
#include <list>


float Average(std::list<int> marks) {
    // This calculates average of the marks with a passed list

    // process
    int total = 0;
    float average = 0;
    int items = 0;

    for (int number : marks) {
        total = total + number;
        items = items + 1;
    }

    average = total / items;

    return average;
}


int main() {
    // This takes the user's marks and passes them to average() in a list

    std::list<int> marks;
    int mark = 0;
    int average;

    // Welcome user
    std::cout << "I'll calculate the average of your marks." << std::endl;
    std::cout << "Write -1 when you have put in all your marks.\n" << std::endl;

    while (mark != -1) {
        // input
        std::cout << "Mark: " << std::endl;
        std::cin >> mark;
        marks.push_back(mark);
    }

    marks.pop_back();

    average = Average(marks);

    std::cout << "\nYour average is " << average << std::endl;
}
