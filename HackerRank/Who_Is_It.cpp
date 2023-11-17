#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    char section;
    int marks;
};

int main() {
    int T;
    cin >> T;

    while (T--) {
        Student students[3];
        for (int i = 0; i < 3; ++i) {
            cin >> students[i].id >> students[i].name >> students[i].section >> students[i].marks;
        }

        // Find the student with the highest marks, or the lowest ID in case of a tie
        Student topStudent = students[0];
        for (int i = 1; i < 3; ++i) {
            if (students[i].marks > topStudent.marks ||
                (students[i].marks == topStudent.marks && students[i].id < topStudent.id)) {
                topStudent = students[i];
            }
        }

        // Print the details of the student with the highest marks
        cout << topStudent.id << " " << topStudent.name << " " << topStudent.section << " " << topStudent.marks << endl;
    }

    return 0;
}
