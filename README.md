# 📝 C++ String and Character Functions Demonstration

## 📖 Overview
This project is a **comprehensive C++ program** that demonstrates the use of:  

1. **`std::string` member functions** from `<string>`  
2. **Character handling functions** from `<cctype>`  
3. **C-style string functions** from `<cstring>`  

The program shows **how to manipulate strings**, **access characters**, **convert case**, and **perform C-style string operations** with examples for each function.

---

## 🚀 Features
- Demonstrates all common **`std::string` operations**: `size`, `empty`, `capacity`, `resize`, `push_back`, `append`, `insert`, `erase`, `replace`, `swap`, `substr`, `find`, `compare`, etc.
- Explains **character-level functions**: `isalpha`, `isdigit`, `isalnum`, `tolower`, `toupper`, etc.
- Covers **C-style string functions**: `strlen`, `strcpy`, `strncpy`, `strcat`, `strncat`, `strcmp`, `strchr`, `strstr`, `memset`, `memcpy`, `memmove`, etc.
- Provides **example outputs** for each function.
- Notes **time complexity** where relevant.

---

## 🧠 How It Works

### 1️⃣ `std::string` Member Functions
- `size()` / `length()` → O(1)  
- `empty()` → O(1)  
- `capacity()` → O(1)  
- `reserve(n)` → O(n)  
- `resize(n, char)` → O(n)  
- `clear()` → O(1)  
- `push_back()` → Amortized O(1)  
- `pop_back()` → O(1)  
- `append()` / `+=` → O(m)  
- `insert(pos, str)` → O(n)  
- `erase(pos, len)` → O(n)  
- `replace(pos, len, str)` → O(n)  
- `swap()` → O(1)  
- `substr(pos, len)` → O(len)  
- `find()` / `rfind()` → O(n)  
- `compare()` → O(min(n, m))  
- `c_str()` → O(1)

**Example Traversal:**
```text
Original string: Hello
After resize: Hello*****
After append: Hello World!
After replace: Hello Universe!
2️⃣ <cctype> Character Functions
isalpha(ch) → Check if alphabet → O(1)

isdigit(ch) → Check if digit → O(1)

isalnum(ch) → Check alphanumeric → O(1)

islower(ch) / isupper(ch) → O(1)

isspace(ch) → O(1)

ispunct(ch) → O(1)

tolower(ch) / toupper(ch) → O(1)

Example:

text
Copy code
isalpha('A') : 1
isdigit('1') : 1
tolower('G') : g
toupper('g') : G
3️⃣ <cstring> C-Style String Functions
strlen() → O(n)

strcpy() / strncpy() → O(n)

strcat() / strncat() → O(n + m)

strcmp() / strncmp() → O(n)

strchr() / strrchr() → O(n)

strstr() → O(n*m)

memset() / memcpy() / memmove() → O(n)

memcmp() → O(n)

Example:

text
Copy code
Original C-string: CStyle
After strcpy: String
After strncpy: Sho
After strcat: ShoTest
After strncat: ShoTe123
After memset: *****  
After memcpy: Source
After memmove: 12123456789
