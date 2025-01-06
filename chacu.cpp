#include <iostream>
#include <string>
using namespace std;

const int MAX_SEATS = 5;

int main() {
    // Program details
    string programName1, programName2, programName3;
    short programMinEligibility1, programMinEligibility2, programMinEligibility3;
    short programAvailableSeats1 = 0, programAvailableSeats2 = 0, programAvailableSeats3 = 0;
    int programCount = 0;

    // Student details
    string studentName, studentEmail, studentPhone, studentCNIC;
    short studentMarksObtained, studentTotalMarks, studentPercentage;
    string studentPreferredProgram1, studentPreferredProgram2;
    string studentAdmissionStatus, studentRejectionReason;
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
                        if (programCount >= 3) {
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
                                if (programCount == 0) {
                                    programName1 = programName;
                                    programMinEligibility1 = programMinEligibility;
                                    programAvailableSeats1 = MAX_SEATS;
                                } else if (programCount == 1) {
                                    programName2 = programName;
                                    programMinEligibility2 = programMinEligibility;
                                    programAvailableSeats2 = MAX_SEATS;
                                } else if (programCount == 2) {
                                    programName3 = programName;
                                    programMinEligibility3 = programMinEligibility;
                                    programAvailableSeats3 = MAX_SEATS;
                                }
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
                            cout << "Name: " << studentName << "\n";
                            cout << "Status: " << studentAdmissionStatus << "\n";
                            if (studentAdmissionStatus == "Rejected") {
                                cout << "Reason: " << studentRejectionReason << "\n";
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
            if (studentCount >= 1) { // Allowing only one student application at a time
                cout << "Student limit reached. Cannot accept more applications.\n";
            } else {
                cout << "\n--- Student Application Form ---\n";
                cout << "Enter your name: ";
                cin >> studentName;

                cout << "Enter your email: ";
                cin >> studentEmail;

                cout << "Enter your phone number: ";
                cin >> studentPhone;

                cout << "Enter your CNIC: ";
                cin >> studentCNIC;

                cout << "Enter your marks obtained: ";
                cin >> studentMarksObtained;

                cout << "Enter total marks: ";
                cin >> studentTotalMarks;

                if (studentMarksObtained < 0 || studentTotalMarks <= 0 ||
                    studentMarksObtained > studentTotalMarks) {
                    cout << "Invalid marks entered. Application not submitted.\n";
                } else {
                    studentPercentage = (studentMarksObtained * 100) / studentTotalMarks;

                    cout << "Enter your 1st preferred program: ";
                    cin >> studentPreferredProgram1;

                    cout << "Enter your 2nd preferred program: ";
                    cin >> studentPreferredProgram2;

                    if ((studentPreferredProgram1 == programName1 &&
                         studentPercentage >= programMinEligibility1 &&
                         programAvailableSeats1 > 0)) {
                        studentAdmissionStatus = "Accepted";
                        programAvailableSeats1--;
                    } else if ((studentPreferredProgram1 == programName2 &&
                                studentPercentage >= programMinEligibility2 &&
                                programAvailableSeats2 > 0)) {
                        studentAdmissionStatus = "Accepted";
                        programAvailableSeats2--;
                    } else if ((studentPreferredProgram1 == programName3 &&
                                studentPercentage >= programMinEligibility3 &&
                                programAvailableSeats3 > 0)) {
                        studentAdmissionStatus = "Accepted";
                        programAvailableSeats3--;
                    } else {
                        studentAdmissionStatus = "Rejected";
                        studentRejectionReason =
                            "Does not meet eligibility or no seats available.";
                    }

                    cout << "\n--- Admission Status ---\n";
                    if (studentAdmissionStatus == "Accepted") {
                        cout << "Congratulations " << studentName << "! You have been accepted.\n";
                    } else {
                        cout << "Sorry " << studentName
                             << ", your application was rejected. Reason: "
                             << studentRejectionReason << "\n";
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

