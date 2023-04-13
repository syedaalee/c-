/*
* ALEENA FATIMA
* 220558
*/
#include <iostream>
#include <string>

using namespace std;

struct Course {
    int course_ID;
    string course_title;
    int credit_hrs;
};

class CourseList {
private:
    Course courses[5];
    int numCourses;

public:
    CourseList() {
        numCourses = 0;
    }

    void addACourse() {
        if (numCourses < 5) {
            Course newCourse;
            cout << "Enter course ID: ";
            cin >> newCourse.course_ID;
            cout << "Enter course title: ";
            cin >> newCourse.course_title;
            cout << "Enter credit hours: ";
            cin >> newCourse.credit_hrs;
            courses[numCourses++] = newCourse;
            cout << "Course added successfully!" << endl;
        }
        else {
            cout << "Error: Maximum number of courses reached" << endl;
        }
    }

    void updateACourse() {
        int courseID;
        bool found = false;
        cout << "Enter course ID to update: ";
        cin >> courseID;
        for (int i = 0; i < numCourses; i++) {
            if (courses[i].course_ID == courseID) {
                cout << "Enter new course title: ";
                cin >> courses[i].course_title;
                cout << "Enter new credit hours: ";
                cin >> courses[i].credit_hrs;
                found = true;
                cout << "Course updated successfully!" << endl;
                break;
            }
        }
        if (!found) {
            cout << "Error: Course not found" << endl;
        }
    }

    void deleteACourse() {
        int courseID;
        bool found = false;
        cout << "Enter course ID to delete: ";
        cin >> courseID;
        for (int i = 0; i < numCourses; i++) {
            if (courses[i].course_ID == courseID) {
                for (int j = i; j < numCourses - 1; j++) {
                    courses[j] = courses[j + 1];
                }
                numCourses--;
                found = true;
                cout << "Course deleted successfully!" << endl;
                break;
            }
        }
        if (!found) {
            cout << "Error: Course not found" << endl;
        }
    }

    void searchAndDisplayACourse() {
        int courseID;
        bool found = false;
        cout << "Enter course ID to search for: ";
        cin >> courseID;
        for (int i = 0; i < numCourses; i++) {
            if (courses[i].course_ID == courseID) {
                cout << "Course found:" << endl;
                cout << "ID: " << courses[i].course_ID << endl;
                cout << "Title: " << courses[i].course_title << endl;
                cout << "Credit hours: " << courses[i].credit_hrs << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Error: Course not found" << endl;
        }
    }

    void displayAllCourses() {
        if (numCourses == 0) {
            cout << "No courses found" << endl;
        }
        else {
            for (int i = 0; i < numCourses; i++) {
                cout << "Course " << i + 1 << ":" << endl;
                cout << "ID: " << courses[i].course_ID << endl;
                cout << "Title: " << courses[i].course_title << endl;
                cout << "Credit hours: " << courses[i].credit_hrs << endl
                    << endl;
            }
        }
    }
};
/*
int main() {
CourseList myCourseList;
while (true) {
    cout << "Press 1 to add a Course" << endl;
    cout << "Press 2 to update a Course" << endl;
    cout << "Press 3 to delete a Course" << endl;
    cout << "Press 4 to search and display a Course" << endl;
    cout << "Press 5 to display all Courses" << endl;
    cout << "Press e to exit the program" << endl;

    char choice;
    cin >> choice;

    switch (choice) {
        case '1':
            myCourseList.addACourse();
            break;
        case '2':
            myCourseList.updateACourse();
            break;
        case '3':
            myCourseList.deleteACourse();
            break;
        case '4':
            myCourseList.searchAndDisplayACourse();
            break;
        case '5':
            myCourseList.displayAllCourses();
            break;
        case 'e':
            cout << "Exiting program..." << endl;
            return 0;
        default:
            cout << "Invalid choice" << endl;
            break;}}}

*/