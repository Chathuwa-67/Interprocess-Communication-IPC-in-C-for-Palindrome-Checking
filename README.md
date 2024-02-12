# Interprocess-Communication-IPC-in-C-for-Palindrome-Checking
This repository provides a simple implementation of Interprocess Communication (IPC) in C, specifically designed for the task of palindrome checking. The project consists of two processes - a parent process and a child process - communicating with each other through IPC mechanisms to determine whether a given input word is a palindrome or not.

Features:
IPC Mechanism:

Utilizes IPC mechanisms, such as pipes, to establish communication between the parent and child processes.
Palindrome Checking:

The child process receives user input for a word.
The word is then passed to the parent process through IPC.
The parent process checks whether the received word is a palindrome or not.
C Implementation:

Written in C for simplicity and efficiency.

Follow the Instructions:

Enter a word when prompted.
The program will output whether the entered word is a palindrome or not.

Enter a word: radar
"radar" is a palindrome.

Feel free to explore, modify, and integrate this IPC-based palindrome checker into your projects. Contributions are welcome! If you encounter any issues or have suggestions for improvements, please open an issue or submit a pull request.
