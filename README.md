 **Implementation of Array-Based List ADT for Library Book Management**

## Description

=> This experiment demonstrates the implementation of a **List Abstract Data Type (ADT)** using an array in the C programming language.
=> The program manages a list of books in a library and performs basic operations such as insertion, deletion, and display.
=> Initially, the books **"AI Basics", "Data Science", "Python 101", "Algorithms", and "Machine Learning"** are stored in the array.
=> A new book, **"Cyber Security"**, is inserted at position 3, and the damaged book **"Python 101"** is removed from the list.
=> The final updated list is then displayed.

## Objectives

* To understand the concept of List ADT.
* To implement an array-based list using C.
* To perform insertion and deletion operations.
* To maintain the order of elements in the list.
* To display the updated list after modifications.

## Features

* Stores book titles using an array.
* Inserts a new book at a specified position.
* Deletes a book by searching its name.
* Displays the final list of books.
* Demonstrates element shifting during insertion and deletion.

## Technologies Used

* **Programming Language:** C
* **Compiler:** GCC / Turbo C / Code::Blocks / VS Code with MinGW

## Input Data

Initial Books:

1. AI Basics
2. Data Science
3. Python 101
4. Algorithms
5. Machine Learning

Operations Performed:

* Insert **Cyber Security** at position 3.
* Delete **Python 101**.

## Final Output

```text
Final List of Books:

1. AI Basics
2. Data Science
3. Cyber Security
4. Algorithms
5. Machine Learning
```

## Algorithm Summary

1. Create an array to store book names.
2. Insert initial books into the array.
3. Shift elements and insert "Cyber Security" at position 3.
4. Search and delete "Python 101".
5. Shift remaining elements after deletion.
6. Display the updated list.

## Applications

* Library management systems.
* Student record management.
* Inventory systems.
* Contact management applications.

## Result

The Array-Based List ADT was successfully implemented in C to perform insertion and deletion operations, and the final list of books was displayed correctly.
