#pragma once

#include <vector>
#include <map>
#include <set>
#include <string>
#include <iostream>
using namespace std;

class StudentDatabase {
private:
    vector<string> courses;
    map<string, int> grades;
    set<string> professors;
    map<string, int> credits;

public:
  
    void addCourse(string& course, int credit) {
        courses.push_back(course);
        credits[course] = credit;
    }

    void addGrade(string& student, int grade) {
        grades[student] = grade;
    }

    void addProfessor(string& name) {
        professors.insert(name);
    }

  
    vector<tring> getCourses()  {
        return courses;
    }

    std::map<std::string, int> getGrades() const {
        return grades;
    }

    std::set<std::string> getProfessors() const {
        return professors;
    }

    std::map<std::string, int> getCredits() const {
        return credits;
    }

    // Methods to print data
    void printCourses() const {
        std::cout << "Courses: [";
        for (size_t i = 0; i < courses.size(); ++i) {
            std::cout << courses[i];
            if (i != courses.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "]" << std::endl;
    }

    void printGrades() const {
        std::cout << "Grades: {";
        for (auto it = grades.begin(); it != grades.end(); ++it) {
            std::cout << it->first << ": " << it->second;
            if (std::next(it) != grades.end()) {
                std::cout << ", ";
            }
        }
        std::cout << "}" << std::endl;
    }

    void printProfessors() const {
        std::cout << "Professors: {";
        int count = 0;
        int size = professors.size();
        for (auto it = professors.begin(); it != professors.end(); ++it) {
            std::cout << *it;
            if (count != size - 1) {
                std::cout << ", ";
            }
            ++count;
        }
        std::cout << "}" << std::endl;
    }

    void printCredits() const {
        std::cout << "Credits: {";
        for (auto it = credits.begin(); it != credits.end(); ++it) {
            std::cout << it->first << ": " << it->second;
            if (std::next(it) != credits.end()) {
                std::cout << ", ";
            }
        }
        std::cout << "}" << std::endl;
    }
};
