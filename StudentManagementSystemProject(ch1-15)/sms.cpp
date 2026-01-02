#include <iostream>
#include <fstream>
using namespace std;

/* ================= STRUCT ================= */
struct Student {
    string name;
    int roll_num;
    float cgpa;
};

/* ================= ADD STUDENTS ================= */
Student* addStudent(int &count){
    cout << "Enter number of students you want to add: ";
    cin >> count;

    cin.ignore();

   // dynamic array of structure
    Student* students = new Student[count];

    // input data
    for(int i=0; i<count; i++) {
        cout << "Enter Student (" << i+1 << ") data : \n";
    
        cout << "Name: ";
        getline(cin, students[i].name);

        cout << "Roll Number: ";
        cin >> students[i].roll_num;

        cout << "CGPA: ";
        cin >> students[i].cgpa;

        cin.ignore();
    }
   return students;
}

/* ================= VIEW STUDENTS ================= */
void viewStudent(Student* students, int count){
    if(students == NULL || count == 0) {
        cout << "NO Students available.\n";
        return;
    }

    cout << "\n----- Student List -----\n";
    for(int i=0; i<count; i++) {
        cout << "\nStudent " << i+1 << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Roll Number: " << students[i].roll_num << endl;
        cout << "CGPA: " << students[i].cgpa << endl;
    }
    
}

/* ================= SEARCH STUDENT ================= */
void searchStudent(Student* students, int count) {
    if(students == nullptr) {
        cout << "\nNo data available.\n";
        return;
    }

    int roll;
    cout << "Enter Roll number to search: ";
    cin >> roll;
    
    for(int i=0; i<count; i++) {
        if(students[i].roll_num == roll) {
            cout << "\nStudent Found!\n";
            cout << "Name: " << students[i].name << endl;
            cout << "CGPA: " << students[i].cgpa << endl;
            return;
        }
    }
    cout << "\nStudent not Found!\n";
}

/* ================= FILE SAVE ================= */
void savetoFile(Student *students, int count) {
    ofstream fsave("sms.txt");

    for(int i=0; i<count; i++) {
        fsave << students[i].name << endl;
        fsave << students[i].roll_num << endl;
        fsave << students[i].cgpa << endl;
    }

    fsave.close();
    cout << "Data saved to file successfully.\n";
}

/* ================= FILE LOAD ================= */
void loadfromFile(Student* students, int count) {
    ifstream fin("sms.txt");

    if(!fin) {
        cout << "\nFile not found.\n";
        return;
    }


    cout << "Enter number of students in file: ";
    cin >> count;
    cin.ignore();

    students = new Student[count];

    for (int i = 0; i < count; i++) {
        getline(fin, students[i].name);
        fin >> students[i].roll_num;
        fin >> students[i].cgpa;
        fin.ignore();
    }

    fin.close();
    cout << "Data loaded successfully.\n";
}

/* ================= MAIN ================= */
int main() {
    Student* students = nullptr;
    int totalStudents = 0;

  
        while(true) {
        cout << "1. Add Student\n";
        cout << "2. View All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Analytics (Average, Top scorer)\n";

        int choice;
        cout << "\nEnter your Choice: "; 
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nAdding student: \n";
            delete[] students;
            students = addStudent(totalStudents);
            break;
        case 2:
            viewStudent(students, totalStudents);
            break;
        case 3:
            cout << "\nSearch Student: \n";
            searchStudent(students, totalStudents);
            break;
        case 4: 
            savetoFile(students, totalStudents);
            break;
        case 5:
            delete[] students;
            loadfromFile(students, totalStudents);
            break;
        default:
            cout << "\nInvalid choice.\n";
            break;
        }

        char exitChoice;
        cout << "\nDo you want to leave? (y/n): ";
        cin >> exitChoice;

        if(exitChoice == 'y' | exitChoice == 'Y') {
            cout << "\nExiting............\n";
            break;
        }
    }
   
    delete[] students;
    return 0;
}