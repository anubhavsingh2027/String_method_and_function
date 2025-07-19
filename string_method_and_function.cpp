#include <iostream>
#include <string>     // for std::string
#include <cctype>     // for character-level functions
#include <cstring>    // for C-style string operations
using namespace std;

int main() {
    // ------------------ 1. std::string Member Functions ------------------ //
    string s = "Hello";

    // Length of the string - O(1)
    cout << "Size: " << s.size() << endl;

    // Check if empty - O(1)
    cout << "Is Empty: " << s.empty() << endl;

    // Capacity allocated - O(1)
    cout << "Capacity: " << s.capacity() << endl;

    // Reserve capacity - O(n)
    s.reserve(100);
    cout << "Reserved capacity: " << s.capacity() << endl;

    // Resize string - O(n)
    s.resize(10, '*');  // Pads with '*'
    cout << "After resize: " << s << endl;

    // Clear string - O(1)
    s.clear();
    cout << "After clear, empty: " << s.empty() << endl;

    s = "Hello";

    // Character access - O(1)
    cout << "At(1): " << s.at(1) << ", operator[]: " << s[1] << endl;

    // Front and back - O(1)
    cout << "Front: " << s.front() << ", Back: " << s.back() << endl;

    // Push back - Amortized O(1)
    s.push_back('!');
    cout << "After push_back: " << s << endl;

    // Pop back - O(1)
    s.pop_back();
    cout << "After pop_back: " << s << endl;

    // Append using append() and += - O(m)
    s.append(" World");
    s += "!";
    cout << "After append: " << s << endl;

    // Insert at position - O(n)
    s.insert(5, ",");
    cout << "After insert: " << s << endl;

    // Erase a range - O(n)
    s.erase(5, 1);
    cout << "After erase: " << s << endl;

    // Replace part of string - O(n)
    s.replace(6, 5, "Universe");
    cout << "After replace: " << s << endl;

    // Swap with another string - O(1)
    string temp = "Swapped";
    s.swap(temp);
    cout << "After swap: s=" << s << ", temp=" << temp << endl;

    // Substring from position - O(len)
    string sub = temp.substr(0, 4);
    cout << "Substring: " << sub << endl;

    // Find first and last occurrence - O(n)
    size_t pos1 = temp.find("p");
    size_t pos2 = temp.rfind("p");
    cout << "Find: " << pos1 << ", RFind: " << pos2 << endl;

    // Compare two strings - O(min(n, m))
    cout << "Compare s with temp: " << s.compare(temp) << endl;

    // Convert to C-string - O(1)
    const char* c_str = s.c_str();
    cout << "C-String: " << c_str << endl;

    // Iterators - O(1)
    cout << "Begin char: " << *s.begin() << ", RBegin char: " << *s.rbegin() << endl;

    // ------------------ 2. <cctype> Character Functions ------------------ //
    char ch = 'A';

    // Check character type - All O(1)
    cout << "\nCharacter Functions:\n";
    cout << "isalpha('A') : " << isalpha(ch) << endl;
    cout << "isdigit('1') : " << isdigit('1') << endl;
    cout << "isalnum('$') : " << isalnum('$') << endl;
    cout << "islower('a') : " << islower('a') << endl;
    cout << "isupper('Z') : " << isupper('Z') << endl;
    cout << "isspace(' ') : " << isspace(' ') << endl;
    cout << "ispunct('!') : " << ispunct('!') << endl;
    cout << "isprint('\\n'): " << isprint('\n') << endl;
    cout << "isgraph('#') : " << isgraph('#') << endl;
    cout << "iscntrl('\\n'): " << iscntrl('\n') << endl;
    cout << "isxdigit('F'): " << isxdigit('F') << endl;

    // Convert case - O(1)
    cout << "tolower('G') : " << (char)tolower('G') << endl;
    cout << "toupper('g') : " << (char)toupper('g') << endl;

    // ------------------ 3. <cstring> String Functions ------------------ //
    cout << "\nC-Style String Functions:\n";
    char a[100] = "CStyle";
    char b[100] = "String";

    // strlen - O(n)
    cout << "strlen(a): " << strlen(a) << endl;

    // strcpy - O(n)
    strcpy(a, b);
    cout << "After strcpy: " << a << endl;

    // strncpy - O(n)
    strncpy(a, "Short", 3);
    a[3] = '\0';  // null-terminate
    cout << "After strncpy: " << a << endl;

    // strcat - O(n+m)
    strcat(a, "Test");
    cout << "After strcat: " << a << endl;

    // strncat - O(n)
    strncat(a, "123", 2);
    cout << "After strncat: " << a << endl;

    // strcmp - O(n)
    cout << "strcmp: " << strcmp("abc", "abd") << endl;

    // strncmp - O(n)
    cout << "strncmp: " << strncmp("abc", "abd", 2) << endl;

    // strchr - O(n)
    char* found = strchr(a, 'e');
    cout << "strchr: " << (found ? found : (char*)"Not Found") << endl;

    // strrchr - O(n)
    found = strrchr(a, 't');
    cout << "strrchr: " << (found ? found : (char*)"Not Found") << endl;

    // strstr - O(n*m)
    found = strstr(a, "Te");
    cout << "strstr: " << (found ? found : (char*)"Not Found") << endl;

    // memset - O(n)
    memset(a, '*', 5);
    a[5] = '\0';
    cout << "After memset: " << a << endl;

    // memcpy - O(n)
    char src[] = "Source";
    char dest[20];
    memcpy(dest, src, strlen(src) + 1);
    cout << "After memcpy: " << dest << endl;

    // memmove - O(n)
    char overlap[] = "123456789";
    memmove(overlap + 2, overlap, 5); // overlapping regions
    cout << "After memmove: " << overlap << endl;

    // memcmp - O(n)
    cout << "memcmp: " << memcmp("abc", "abd", 3) << endl;

    return 0;
}
