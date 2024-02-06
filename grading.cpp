#include <iostream>
#include <string>

// Define the Course class
class Course {
public:
    std::string course_code;
    std::string course_name;
};

// Define the Grade class
class Grade {
public:
    int mark;
    char the_grade;

    // Method to calculate the grade based on the mark
    void calculateGrade() {
        if (mark > 69)
            the_grade = 'A';
        else if (mark > 59)
            the_grade = 'B';
        else if (mark > 49)
            the_grade = 'C';
        else if (mark > 39)
            the_grade = 'D';
        else
            the_grade = 'E';
    }
};

// Define the Student class
class Student {
public:
    std::string reg_number;
    std::string name;
    int age;
    Course course;
    Grade grade;

    // Method to set the grade and calculate it
    void setGrade(int mark) {
        grade.mark = mark;
        grade.calculateGrade();
    }
};

int main() {
    const int MAX_STUDENTS = 40;
    Student students[MAX_STUDENTS];
    int num_students = 0;

    // Add a student
    Student s1;
    s1.reg_number = "REG001";
    s1.name = "John Doe";
    s1.age = 20;
    s1.course.course_code = "CSE101";
    s1.course.course_name = "Introduction to Computer Science";
    s1.setGrade(85); // Assuming a mark of 85
    students[num_students++] = s1;

    // Edit student details
    students[0].age = 21;

    // Add marks and calculate grade
    students[0].setGrade(75); // Update the mark and calculate grade

    // Display student details
    std::cout << "Student Details:" << std::endl;
    std::cout << "Registration Number: " << students[0].reg_number << std::endl;
    std::cout << "Name: " << students[0].name << std::endl;
    std::cout << "Age: " << students[0].age << std::endl;
    std::cout << "Course Code: " << students[0].course.course_code << std::endl;
    std::cout << "Course Name: " << students[0].course.course_name << std::endl;
    std::cout << "Mark: " << students[0].grade.mark << std::endl;
    std::cout << "Grade: " << students[0].grade.the_grade << std::endl;

    return 0;
}
