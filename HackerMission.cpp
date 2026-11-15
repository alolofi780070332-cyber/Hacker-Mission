
#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice;
    int score = 0;
    string playerName;
    string answer;
    int attempts;
    bool completed;

    // MAIN MENU
    cout << "============================" << endl;
    cout << "       HACKER MISSION" << endl;
    cout << "============================" << endl;
    cout << "1. Start Mission" << endl;
    cout << "2. Instructions" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 2) {
        cout << "Solve all 4 security challenges." << endl;
        cout << "You have 3 attempts for each level." << endl;
        return 0;
    }
    else if (choice == 3) {
        cout << "GOOD LUKE!" << endl;
        return 0;
    }
    else if (choice != 1) {
        cout << "Invalid Choice!" << endl;
        return 0;
    }

    // PLAYER INFORMATION
    cout << "Enter Hacker Name: ";
    cin >> playerName;

    cout << "Welcome, " << playerName << endl;
    cout << "Your Initial Score: " << score << endl;

    // LEVEL 1: LOGIN SYSTEM
    attempts = 0;
    completed = false;

    cout << "\n===== LEVEL 1: LOGIN SYSTEM =====" << endl;
    cout << "Encrypted Code: EHVH" << endl;
    cout << "Hint: Shift 3 steps backward." << endl;

    while (attempts < 3 && completed == false) {
        cout << "Enter the secret code: ";
        cin >> answer;

        if (answer == "BESE") {
            cout << "Access Granted!" << endl;
            score = score + 10;
            completed = true;
        }
        else {
            attempts++;
            cout << "Access Denied!" << endl;
            cout << "Attempts left: " << 3 - attempts << endl;
        }
    }

    if (completed == false) {
        cout << "Mission Failed!" << endl;
        cout << "Final Score: " << score << endl;
        return 0;
    }

    // LEVEL 2: FIREWALL BYPASS
    attempts = 0;
    completed = false;

    cout << "\n===== LEVEL 2: FIREWALL BYPASS =====" << endl;
    cout << "Binary Code:" << endl;
    cout << "01001110 01010101 01010011 01010100" << endl;
    cout << "Hint: Convert Binary to ASCII." << endl;

    while (attempts < 3 && completed == false) {
        cout << "Enter the secret word: ";
        cin >> answer;

        if (answer == "NUST") {
            cout << "Firewall Bypassed!" << endl;
            score = score + 20;
            completed = true;
        }
        else {
            attempts++;
            cout << "Access Denied!" << endl;
            cout << "Attempts left: " << 3 - attempts << endl;
        }
    }

    if (completed == false) {
        cout << "Mission Failed!" << endl;
        cout << "Final Score: " << score << endl;
        return 0;
    }

    // LEVEL 3: DATA ENCRYPTION
    attempts = 0;
    completed = false;

    cout << "\n===== LEVEL 3: DATA ENCRYPTION =====" << endl;
    cout << "Encrypted Code: NEMEY" << endl;
    cout << "Hint: Reverse the word." << endl;

    while (attempts < 3 && completed == false) {
        cout << "Enter the secret code: ";
        cin >> answer;

        if (answer == "YEMEN") {
            cout << "Data Decrypted Successfully!" << endl;
            score = score + 30;
            completed = true;
        }
        else {
            attempts++;
            cout << "Access Denied!" << endl;
            cout << "Attempts left: " << 3 - attempts << endl;
        }
    }

    if (completed == false) {
        cout << "Mission Failed!" << endl;
        cout << "Final Score: " << score << endl;
        return 0;
    }

    // LEVEL 4: DIGITAL VAULT
    attempts = 0;
    completed = false;

    cout << "\n===== LEVEL 4: DIGITAL VAULT =====" << endl;
    cout << "Encrypted Code: 8EDO" << endl;
    cout << "Hint: Reverse the word and shift 3 steps backward." << endl;

    while (attempts < 3 && completed == false) {
        cout << "Enter the original word: ";
        cin >> answer;

        if (answer == "LAB8") {
            cout << "Digital Vault Unlocked!" << endl;
            score = score + 40;
            completed = true;
        }
        else {
            attempts++;
            cout << "Access Denied!" << endl;
            cout << "Attempts left: " << 3 - attempts << endl;
        }
    }

    if (completed == false) {
        cout << "Mission Failed!" << endl;
        cout << "Final Score: " << score << endl;
        return 0;
    }

    // FINAL RESULT
    cout << "\n============================" << endl;
    cout << "    MISSION COMPLETED!" << endl;
    cout << "============================" << endl;
    cout << "Congratulations, " << playerName << "!" << endl;
    cout << "You completed all levels." << endl;
    cout << "Your Final Score: " << score << "/100" << endl;
    cout << "You are an Elite Hacker!" << endl;

    return 0;
}
