#include <iostream>
#include <string>

using namespace std;

int main() {
    const int MAX_ATTEMPTS = 3; // Inpunt max attempt
    string correct_password = "23456"; // Set Password
    string password_input;
    int attempts = 0;

    while (attempts < MAX_ATTEMPTS) {
        cout << "Masukkan password: "; // Input Password
        cin >> password_input;

        if (password_input == correct_password) {
            cout << "Login Berhasil" << endl; // Login Succes
            break; 
        } else {
            cout << "Password salah, coba lagi" << endl; // Login Fail
            attempts++; 
        }
    }

    if (attempts == MAX_ATTEMPTS) {
        cout << "Anda telah mencapai batas percobaan" << endl; // Max attempt
    }

    return 0; 
}

