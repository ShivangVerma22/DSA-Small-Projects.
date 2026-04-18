📧 Email Validation in C++

A simple yet powerful C++ project that validates email addresses using Regular Expressions (<regex>). This project demonstrates how pattern matching can be used to verify whether an email follows standard formatting rules.

🚀 About the Project

This project is designed to check whether a given email address is valid or invalid based on a predefined pattern.

It uses C++ STL features like:

string
regex
iostream

The validation logic is implemented in a clean and reusable function.

✨ Features
✅ Validates email format using Regex
⚡ Fast and efficient pattern matching
🧩 Simple and easy-to-understand logic
📌 Beginner-friendly C++ project
🔁 Reusable validation function (isValidEmail())

📂 File Structure
email-validation/
│── email.cpp   // Main source file
│── README.md   // Project documentation

🧠 Concept Used
🔹 Regular Expressions (Regex)

The core concept used in this project is Regex, which helps in pattern matching.

Pattern used:

^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$

What it checks:
✔ Username (letters, numbers, special chars)
✔ Presence of @ symbol
✔ Domain name
✔ Proper domain extension (like .com, .org)

⚙️ How to Run

🔧 Step 1: Compile the Code

g++ email.cpp -o email

▶️ Step 2: Run the Program
./email

💡 Example Output

Enter email ID : test@example.com
Email is valid : test@example.com

🛠️ Code Overview

isValidEmail() → Function to validate email using regex
main() → Takes input and prints result

🎯 Use Cases

Form validation systems
Login/Signup modules
Beginner-level C++ projects
Learning Regex in C++

🙌 Contribution

Feel free to fork this project and improve it!
