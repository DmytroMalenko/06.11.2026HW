#include <iostream>
using namespace std;

bool sameText(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) return false;
        i++;
    }
    return a[i] == b[i];
}

bool isLetter(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

void caesar(char line[], int key) {
    for (int i = 0; line[i] != '\0'; i++) {
        char c = line[i];

        if (c >= 'a' && c <= 'z') {
            line[i] = 'a' + (c - 'a' + key) % 26;
        }
        else if (c >= 'A' && c <= 'Z') {
            line[i] = 'A' + (c - 'A' + key) % 26;
        }
    }
}

int main()
{
	/* Task 1

    FILE* f1 = nullptr;
    FILE* f2 = nullptr;

    fopen_s(&f1, "file1.txt", "r");
    fopen_s(&f2, "file2.txt", "r");

    if (f1 == nullptr || f2 == nullptr) {
        cout << "File isn't found!\n";
        return 0;
    }

    char line1[200];
    char line2[200];
    int num = 1;      
    bool equal = true; 

    while (true) {
        bool ok1 = fscanf_s(f1, "%[^\n]\n", line1, 200) == 1;
        bool ok2 = fscanf_s(f2, "%[^\n]\n", line2, 200) == 1;

        if (!ok1 && !ok2) break;     

        if (!ok1) line1[0] = '\0';  
        if (!ok2) line2[0] = '\0';    

        if (!sameText(line1, line2)) {
            equal = false;
            cout << "Line " << num << " is different:\n";
            cout << "  file1: " << line1 << endl;
            cout << "  file2: " << line2 << endl;
        }
        num++;
    }

    if (equal) {
        cout << "Files are equal\n";
    }

    fclose(f1);
    fclose(f2);

     */


    /* Task 2 

    FILE* in = nullptr;
    FILE* out = nullptr;

    fopen_s(&in, "text.txt", "r");
    if (in == nullptr) {
        cout << "text.txt not found!\n";
        return 0;
    }
    fopen_s(&out, "stats.txt", "w");

    int symbols = 0, lines = 0, vowels = 0, consonants = 0, digits = 0;
    char line[256];

    while (fscanf_s(in, "%[^\n]\n", line, 256) == 1) {
        lines++;

        for (int i = 0; line[i] != '\0'; i++) {
            char c = line[i];
            symbols++;

            if (c >= '0' && c <= '9') {
                digits++;
            }
            else if (isLetter(c)) {
                if (isVowel(c)) vowels++;
                else consonants++;
            }
        }
    }

    fprintf_s(out, "Symbols: %d\n", symbols);
    fprintf_s(out, "Lines: %d\n", lines);
    fprintf_s(out, "Vowels: %d\n", vowels);
    fprintf_s(out, "Consonants: %d\n", consonants);
    fprintf_s(out, "Digits: %d\n", digits);

    fclose(in);
    fclose(out);

    cout << "Done! Check stats.txt\n";
    */



    /* Task 3

    FILE* in = nullptr;
    FILE* out = nullptr;

    fopen_s(&in, "original.txt", "r");
    if (in == nullptr) {
        cout << "original.txt isn't found!\n";
        return 0;
    }
    fopen_s(&out, "encrypted.txt", "w");

    int key;
    cout << "Enter key: ";
    cin >> key;

    char line[256];

    while (fscanf_s(in, "%[^\n]\n", line, 256) == 1) {
        caesar(line, key);               
        fprintf_s(out, "%s\n", line);      
    }

    fclose(in);
    fclose(out);

    cout << "Check encrypted.txt\n";
     */
}
