class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        if (password.length() < 8) return false; 

        bool hasLower = false;
        bool hasUpper = false;
        bool hasDigit = false;
        bool hasSpecial = false;

        string specialChars = "!@#$%^&*()-+";

        for (int i = 0; i < password.length(); i++) {
            char c = password[i];

            if (islower(c)) hasLower = true;
            else if (isupper(c)) hasUpper = true;
            else if (isdigit(c)) hasDigit = true;
            else if (specialChars.find(c) != string::npos) hasSpecial = true;

            if (i > 0 && password[i] == password[i - 1]) return false;
        }

        return hasLower && hasUpper && hasDigit && hasSpecial;
    }
};
