#include <iostream>

const unsigned short STUDENTS = 20;
const unsigned short TASKS = 20;
const unsigned short HARD_TASKS = 6;

void formula(int student[])
{
    student[1] = student[0] % TASKS + 1;
}

void set_student_task(int **student_task, void (*ptr)(int []))
{
    for (int i = 0; i < STUDENTS; i++)
        ptr(student_task[i]);
}

bool contains(int arr[], int num)
{
    for (int i = 0; i < HARD_TASKS; i++)
        if (arr[i] == num)
            return true;
    return false;
}

int* find_hard_task_students(int **student_task, int hard_tasks[])
{
    int count = 0;
    for (int i = 0; i < STUDENTS; i++)
        if (contains(hard_tasks, student_task[i][1]))
            count++;
    int *hard_tasks_students = new int[count];
    for (int i = 0, count = 0; i < STUDENTS; i++)
        if (contains(hard_tasks, student_task[i][1]))
        {
            hard_tasks_students[count++] = student_task[i][0];
            std::cout << student_task[i][0] << " has a hard task."
                      << std::endl;
        }
    return hard_tasks_students;
}

int binary_search(int arr[], int num, int start, int end)
{
    int middle = (start + end) / 2;
    if (arr[middle] == num)
        return middle;
    if (start >= end)
        return -1;
    if (num > arr[middle])
        return binary_search(arr, num, middle + 1, end);
    else
        return binary_search(arr, num, start, middle - 1);
}

int main()
{

    // TASK 1

    int **student_task;
    
    student_task = new int*[STUDENTS];

    for (int i = 45000; i < 45000 + STUDENTS; i++)
    {
        student_task[i - 45000] = new int[2];
        student_task[i- 45000][0] = i;
        student_task[i - 45000][1] = 0;
    }
    
    set_student_task(student_task, formula);

    for (int i = 0; i < STUDENTS; i++)
        std::cout << "student " << student_task[i][0]
                  << " has task " << student_task[i][1]
                  << "." << std::endl;

    // TASK 2

    int hard_tasks[HARD_TASKS] = {15, 16, 17, 18, 19, 20};
    int *hard_task_students = find_hard_task_students(student_task, hard_tasks);

    // TASK 3

    int arr_size = 100;
    int *binary_search_arr = new int[arr_size];

    for (int i = 0; i < arr_size;)
        binary_search_arr[i] = ++i;

    std::cout << binary_search(binary_search_arr, 1, 0, arr_size) << std::endl;
    std::cout << binary_search(binary_search_arr, 79, 0, arr_size) << std::endl;
    std::cout << binary_search(binary_search_arr, -100, 0, arr_size) << std::endl;
    std::cout << binary_search(binary_search_arr, 101, 0, arr_size) << std::endl;

    return 0;
}
