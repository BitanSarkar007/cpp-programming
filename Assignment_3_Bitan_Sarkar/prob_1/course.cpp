// Declare a structure Course to model a PG course. It must have a name (type: const char*), the semester in which it is offered (type: unsigned short or enum), and an upper limit on the number of students who can credit the course (unsigned int)
// Each course also has a unique course id (type: unsigned int). The smallest course id is 100 and each new course gets an id equal to one plus the then largest existing course id.
// Write separate functions to
// (1) check if two courses are offered in the same semester, 
// (2) check if two courses are identical (except, possibly, for course id), 
// (3) update the details of a course, and 
// (4) print the details of a course. 
// Decide judiciously whether the parameters should be passed by value or by reference to these functions.
// Also write a suitable main() function to demonstrate a few uses of the above functions.

#include <iostream>
#include <cstring>
using namespace std;

struct Course
{
    const char *name;
    unsigned short semester;
    unsigned int max_students;
    unsigned int course_id;
};

bool same_semester(Course c1, Course c2)
{
    return c1.semester == c2.semester;
}

bool same_course(Course c1, Course c2)
{
    return strcmp(c1.name, c2.name) == 0 && c1.semester == c2.semester && c1.max_students == c2.max_students;
}

void update_course(Course &c, const char *name, unsigned short semester, unsigned int max_students)
{
    c.name = name;
    c.semester = semester;
    c.max_students = max_students;
}

void print_course(Course c)
{
    cout << "Course name: " << c.name << endl;
    cout << "Semester: " << c.semester << endl;
    cout << "Max students: " << c.max_students << endl;
    cout << "Course id: " << c.course_id << endl;
}

int main()
{
    Course c1 = {"PG", 1, 10, 100};
    Course c2 = {"PG", 1, 10, 101};
    Course c3 = {"PG", 2, 10, 102};
    Course c4 = {"PG", 1, 10, 103};

    cout << "Same semester: " << same_semester(c1, c2) << endl;
    cout << "Same course: " << same_course(c1, c2) << endl;
    cout << "Same course: " << same_course(c1, c3) << endl;

    update_course(c1, "PG", 2, 20);
    print_course(c1);

    return 0;
}
