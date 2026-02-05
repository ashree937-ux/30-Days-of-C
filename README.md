# 30-Days of C

🧮 Calculator in C (Menu-Driven)
A console-based calculator application written in C, built to strengthen core programming fundamentals such as functions, loops, conditionals, and modular code structure.
This project intentionally prioritizes clarity and correctness over complexity, making it ideal for academic use and foundational learning.

🚀 Features
🔹 Basic Arithmetic Operations
Addition
Subtraction
Multiplication
Division
Highlights:
Supports multiple operands per calculation
Uses = to terminate input (calculator-style input flow)
Converts string input to floating-point values using strtof()
Includes basic division-by-zero checks
🔹 Power & Modulus Operations
Power calculation using pow()
Modulus calculation using fmod()
Prevents invalid operations such as modulus by zero
🔹 Menu-Driven Interface
Simple and clear menu navigation
Separate functions for each operation group
Allows repeated operations without restarting the program
🔹 Calculation History
Stores results in a fixed-size array
View previously calculated results
Clear history when needed
Designed using simple global state for learning purposes

🧠 Design Philosophy
This project was built with learning-first decisions, not feature overload.
✔ Modular function design
✔ Clear control flow
✔ Focus on logic and fundamentals
✔ Readable and maintainable structure
Intentionally Avoided
Expression evaluation with BODMAS (requires stacks)
Dynamic memory allocation (malloc, calloc)
Macros (#define)
GUI components
Over-engineered abstractions
These choices keep the project aligned with the current academic learning stage.

🛠️ Technologies & Libraries Used
stdio.h    // Input and output
string.h  // String handling
stdlib.h  // strtof()
math.h    // pow(), fmod()

▶️ How to Compile & Run(in Bash)
Compile :
gcc calculator.c -o calculator -lm
Run :
./calculator

📂 Project Structure
calculator.c   // Main source file
README.md      // Project documentation

⚠️ Known Limitations
No operator precedence (BODMAS not implemented)
One operation type per calculation
Console-based only
Fixed-size history (no persistence across runs)
Input validation is basic (learning-focused)
These limitations are intentional and appropriate for the scope of this project.

📈 Possible Future Enhancements
(Not part of the current scope)
Expression evaluation using stacks
Improved input validation
Persistent history storage
GUI-based version in another language

✅ Conclusion
This project demonstrates:
Strong understanding of C fundamentals
Effective use of functions and loops
Thoughtful scope control
Clean, readable, and maintainable code
It serves as a solid academic project and a reliable foundation for more advanced programming concepts in the future.

🙌 Author
Built as part of a learning journey in C programming and problem-solving fundamentals.
