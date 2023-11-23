#include <bits/stdc++.h>
using namespace std;

struct Student {
    string nm;
    int cls;
    char s;
    int id;

    Student() : cls(0), s('\0'), id(0) {}

    Student(string nm, int cls, char s, int id) {
        this->nm = nm;
        this->cls = cls;
        this->s = s;
        this->id = id;
    }
};

int main() {
    int N;
    cin >> N;
    Student* students = new Student[N]; 

    for (int i = 0; i < N; ++i) {
        string nm;
        int cls;
        char s;
        int id;
        cin >> nm >> cls >> s >> id;
        students[i] = Student(nm, cls, s, id);
    }

    for (int i = 0; i < N / 2; ++i) {
        swap(students[i].s, students[N - 1 - i].s);
    }

    for (int i = 0; i < N; ++i) {
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << endl;
    }

    delete[] students; 
    return 0;
}
