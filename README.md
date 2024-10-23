# Party Guest Name Comparison Program

## Description

The **Party Guest Name Comparison Program** is a simple C-based application designed to simulate checking names of two guests at a party. The program takes two users' full names (first name and last name), and then uses string functions such as `strlen()`, `strcpy()`, `strcat()`, and `strcmp()` to analyze the names. It checks if the two guests have the same full name, if they share the same first or last name, and displays the length of their names.

This program is designed to show practical usage of string manipulation functions in a real-life scenario, such as verifying guest lists or detecting name duplicates at a party or event.

---

## Features

- Accepts full names (first name and last name) of two guests.
- Converts names to lowercase to allow case-insensitive comparisons.
- Displays the number of characters in each full name.
- Compares the full names and informs if they are the same or different.
- Additional feature: checks if both guests share the same first name or last name.
  
---

## Applications

This program can be adapted for use in various real-world applications such as:
- **Event Management**: Ensuring no duplicate entries are made for guests.
- **Database Operations**: Normalizing and comparing names for duplicate detection.
- **Name Validation**: Checking if two names are similar or matching for systems requiring guest validation.

---

## Usage
The program will prompt you for two users' full names (first and last names separately). After entering the names, the program will:

Display the number of characters in both names.
Compare both names and tell whether they are the same or different.
Check if the two guests share the same first name or last name.
Test Cases
Below are a few sample test cases to validate the program’s behavior:

### Test Case 1: Same Full Names
Input:
```
Guest 1 First Name: Alice
Guest 1 Last Name: Johnson
Guest 2 First Name: alice
Guest 2 Last Name: johnson
```
Output:
```
Length of first guest's full name: 13 characters
Length of second guest's full name: 13 characters
alice johnson and alice johnson have the same name!
```

### Test Case 2: Different Full Names
Input:
```
Guest 1 First Name: John
Guest 1 Last Name: Smith
Guest 2 First Name: Michael
Guest 2 Last Name: Johnson
```
Output:
```
Length of first guest's full name: 10 characters
Length of second guest's full name: 15 characters
john smith and michael johnson are different guests.
```
### Test Case 3: Same First Name, Different Last Name
Input:
```
Guest 1 First Name: Emily
Guest 1 Last Name: Brown
Guest 2 First Name: Emily
Guest 2 Last Name: Williams
```
Output:
```
Length of first guest's full name: 11 characters
Length of second guest's full name: 14 characters
Both guests have the same first name: emily!
```

## Future Updates
Potential future improvements for this program could include:

Support for More Guests: Extend the program to compare the names of multiple guests, not just two.
Case-Sensitive Option: Allow the user to choose between case-sensitive or case-insensitive comparisons.
Partial Name Matching: Introduce the ability to detect partial matches between names.
Graphical User Interface (GUI): Develop a simple interface to allow users to enter names in a more user-friendly way.

---

## References
C Library String Functions: C Programming - String Handling
tolower() Function: Converting Characters to Lowercase
Event Name Checking Algorithms: Algorithm Design for Event Planning
