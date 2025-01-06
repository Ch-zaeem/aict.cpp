#include <iostream>
using namespace std;

const int MAX_SEATS = 5;
const int MAX_PROGRAMS = 3;   // Maximum number of programs
const int MAX_STUDENTS = 5;   // Maximum number of students

int main() {
    // Program details (Arrays for each program)
    string programNames[MAX_PROGRAMS];
    short programMinEligibilities[MAX_PROGRAMS];
    short programAvailableSeats[MAX_PROGRAMS] = {0, 0, 0};
    int programCount = 0;

    // Student details (Arrays for each student)
    string studentNames[MAX_STUDENTS];
    string studentEmails[MAX_STUDENTS];
    string studentPhones[MAX_STUDENTS];
    string studentCNICs[MAX_STUDENTS];
    short studentMarksObtained[MAX_STUDENTS];
    short studentTotalMarks[MAX_STUDENTS];
    short studentPercentages[MAX_STUDENTS];
    string studentPreferredProgram1[MAX_STUDENTS];
    string studentPreferredProgram2[MAX_STUDENTS];
    string studentAdmissionStatus[MAX_STUDENTS];
    string studentRejectionReasons[MAX_STUDENTS];
    int studentCount = 0;

    cout << "--- University Admission Management System ---\n";
    cout << "1. Login as Admin\n";
    cout << "2. Apply as Student\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;

    switch (choice) {
        case 1: { // Admin login
            string username, password;
            cout << "\n--- Admin Login ---\n";
            cout << "Enter username: ";
            cin >> username;
            cout << "Enter password: ";
            cin >> password;
            if (username == "admin" && password == "admin123") {
                cout << "Login successful!\n";
                cout << "\n--- Admin Dashboard ---\n";
                cout << "1. Add a New Program\n";
                cout << "2. View Application Status\n";
                cout << "Enter your choice: ";
                int adminChoice;
                cin >> adminChoice;
                switch (adminChoice) {
                    case 1: // Add a new program
                        if (programCount >= MAX_PROGRAMS) {
                            cout << "Program limit reached. Cannot add more programs.\n";
                        } else {
                            string programName;
                            short programMinEligibility;
                            cout << "\n--- Add a New Program ---\n";
                            cout << "Enter program name: ";
                            cin >> programName;
                            cout << "Enter minimum eligibility percentage: ";
                            cin >> programMinEligibility;
                            if (programMinEligibility < 0 || programMinEligibility > 100) {
                                cout << "Invalid percentage. Program not added.\n";
                            } else {
                                programNames[programCount] = programName;
                                programMinEligibilities[programCount] = programMinEligibility;
                                programAvailableSeats[programCount] = MAX_SEATS;
                                programCount++;
                                cout << "Program added successfully!\n";
                            }
                        }
                        break;

                    case 2: // View application statuses
                        if (studentCount == 0) {
                            cout << "No applications to show.\n";
                        } else {
                            cout << "\n--- Application Status ---\n";
                            for (int i = 0; i < studentCount; i++) {
                                cout << "Name: " << studentNames[i] << "\n";
                                cout << "Status: " << studentAdmissionStatus[i] << "\n";
                                if (studentAdmissionStatus[i] == "Rejected") {
                                    cout << "Reason: " << studentRejectionReasons[i] << "\n";
                                }
                            }
                        }
                        break;

                    default:
                        cout << "Invalid choice.\n";
                        break;
                }
            } else {
                cout << "Invalid credentials.\n";
            }
            break;
        }

        case 2: { // Student application
            if (studentCount >= MAX_STUDENTS) { // Allowing only a limited number of students
                cout << "Student limit reached. Cannot accept more applications.\n";
            } else {
                cout << "\n--- Student Application Form ---\n";
                cout << "Enter your name: ";
                cin >> studentNames[studentCount];
                cout << "Enter your email: ";
                cin >> studentEmails[studentCount];
                cout << "Enter your phone number: ";
                cin >> studentPhones[studentCount];
                cout << "Enter your CNIC: ";
                cin >> studentCNICs[studentCount];
                cout << "Enter your marks obtained: ";
                cin >> studentMarksObtained[studentCount];
                cout << "Enter total marks: ";
                cin >> studentTotalMarks[studentCount];
                if (studentMarksObtained[studentCount] < 0 || studentTotalMarks[studentCount] <= 0 ||
                    studentMarksObtained[studentCount] > studentTotalMarks[studentCount]) {
                    cout << "Invalid marks entered. Application not submitted.\n";
                } else {
                    studentPercentages[studentCount] = (studentMarksObtained[studentCount] * 100) / studentTotalMarks[studentCount];
                    cout << "Enter your 1st preferred program: ";
                    cin >> studentPreferredProgram1[studentCount];
                    cout << "Enter your 2nd preferred program: ";
                    cin >> studentPreferredProgram2[studentCount];

                    bool admitted = false;
                    for (int i = 0; i < programCount; i++) {
                        if ((studentPreferredProgram1[studentCount] == programNames[i] &&
                             studentPercentages[studentCount] >= programMinEligibilities[i] &&
                             programAvailableSeats[i] > 0)) {
                            studentAdmissionStatus[studentCount] = "Accepted";
                            programAvailableSeats[i]--;
                            admitted = true;
                            break;
                        }
                    }

                    if (!admitted) {
                        studentAdmissionStatus[studentCount] = "Rejected";
                        studentRejectionReasons[studentCount] = "Does not meet eligibility or no seats available.";
                    }

                    cout << "\n--- Admission Status ---\n";
                    if (studentAdmissionStatus[studentCount] == "Accepted") {
                        cout << "Congratulations " << studentNames[studentCount] << "! You have been accepted.\n";
                    } else {
                        cout << "Sorry " << studentNames[studentCount]
                             << ", your application was rejected. Reason: "
                             << studentRejectionReasons[studentCount] << "\n";
                    }
                    studentCount++;
                }
            }
            break;
        }

        case 3:
            cout << "Exiting the system. Goodbye!\n";
            break;

        default:
            cout << "Invalid choice. Please try again.\n";
            break;
    }

    return 0;
}
