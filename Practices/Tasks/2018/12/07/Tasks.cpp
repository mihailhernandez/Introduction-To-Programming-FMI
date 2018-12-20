#include <iostream>
#define GRADES 4
#define STUDENTS 3
#define COLUMNS 3

void print_grades(double grades[GRADES])
{
    for (int i = 0; i < GRADES; i++)
    {
        std::cout << grades[i] << std::endl;
    }
}

void calculate_grades(double grades[GRADES])
{
    for (int i = 0; i < GRADES; i++)
    {
        grades[i] += 2;
    }
}

void print_grades_of_student(double student_grades[STUDENTS][COLUMNS], int faculty_number)
{
    for (int i = 0; i < COLUMNS; i++)
    {
        if (student_grades[i][0] == faculty_number)
        {
            std::cout << "Grades of " << faculty_number << ": "
                      << student_grades[i][1] << ", "
                      << student_grades[i][2] << std::endl;
        }
    }
}

void print_student_fac_num_with_high_grades(double student_grades[STUDENTS][COLUMNS])
{
    int average = 0;
    for (int i = 0; i < STUDENTS; i++)
    {
        if ((student_grades[i][1] + student_grades[i][2]) / 2 >= 4.5)
        {
            std::cout << student_grades[i][0] << std::endl;
        }
    }
}

int main()
{
    double grades[GRADES] = {1.5, 3, 3, 4}; 
    double student_grades[STUDENTS][COLUMNS] = 
        { 
            {45000, 4.2, 5.5}, 
            {45001,   2, 3.5},
            {45002,   6,   6}
        };

    print_grades(grades);
    calculate_grades(grades);
    print_grades(grades);

    print_grades_of_student(student_grades, 45000);
    print_grades_of_student(student_grades, 45001);
    print_grades_of_student(student_grades, 45002);

    print_student_fac_num_with_high_grades(student_grades);

    return 0;
}   

