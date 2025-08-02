# Student Portal System - C++ File Handling Project

## 📝 Description
A console-based student management system developed during my 2nd semester (2022) at University of Central Punjab. This project demonstrates fundamental file handling operations in C++ while adhering to curriculum constraints that prohibited using functions, OOP, or advanced concepts at that stage of learning.

## 📂 Project Files
| File               | Purpose                          | Sample Content             |
|--------------------|----------------------------------|----------------------------|
| `student_portal.cpp` | Main program logic              | [View code](student_portal.cpp)             |
| `register.txt`     | Stores student credentials      | `1 maryam 1234`            |
| `reg.txt`          | Stores registration numbers     | `1 maryam`                 |
| `pswd.txt`         | Stores passwords                | `1 1234`                   |
| `result.txt`       | Stores exam results             | `1 maryam 100%`            |

## ✨ Features
### User Management
- **Student Registration** with serialized storage
- **Login Authentication** with credentials verification
- **Separate credential files** for registration numbers and passwords

### Academic Operations
- **Result Calculation** with percentage conversion
- **Individual Result Display** by registration number
- **Batch Result Printing** for all students

### System Capabilities
- **Persistent data storage** using text files
- **Error handling** for file operations
- **Menu-driven interface** for user interaction

## ⚙️ System Requirements
- C++17 compatible compiler
- Command-line interface
- 5MB disk space

## 🚀 Installation & Execution
```bash
# Clone repository
git clone https://github.com/MyProVerse/Portal_Marks_Upload_CPP.git

# Compile program
g++ student_portal.cpp -o student_portal

# Run executable
./student_portal   # Linux/macOS
student_portal.exe # Windows
