#include <iostream>
#include <string>

using namespace std;

int main() {
    const int MAX_ATTEMPTS = 3; // Inpunt max attempt
    string correct_password = "111222"; // PIN or Password for an account
    string password_input;
    int attempts = 0;

    while (attempts < MAX_ATTEMPTS) {
        cout << "Masukkan PIN / Password: "; // Input PIN / Password
        cin >> password_input;

        if (password_input == correct_password) {
            cout << "Login Berhasil" << endl; // Login Succes
            break; 
        } else {
            cout << "Password / PIN salah, coba lagi" << endl; // Login Fail
            attempts++; 
        }
    }

    if (attempts == MAX_ATTEMPTS) {
        cout << "Anda telah mencapai batas percobaan" << endl; // Notifies user of reaching max attempts after 3 failures.

        cout << "Akun telah ter-Blokir, mohon menghubungi Customer Service" << endl;
    }

    return 0; 
}

