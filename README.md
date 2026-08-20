# CS 210 Portfolio

## Corner Grocer Item-Tracking Program

This repository contains my Corner Grocer project completed for CS 210: Programming Languages at Southern New Hampshire University.

## Project Reflection

### Summarize the project and what problem it was solving.

The Corner Grocer Item Tracker is a C++ program designed to analyze purchase records and determine how frequently different items were purchased. The program reads item data from an input file and allows the user to search for the frequency of a specific item, view a list of all items and their purchase frequencies, or display the data as a histogram using asterisks.

### What did you do particularly well?

I think I did particularly well with the organization of the program and input validation. I separated the program into `ItemTracker.h`, `ItemTracker.cpp`, and `main.cpp`, which helped keep the class definition, implementation, and main program logic organized. I also used encapsulation by keeping the itemFrequency map private and allowing the data to be accessed and modified through the class's public functions. For the menu, I included input validation for both non-numeric and out-of-range values so that invalid input would display an error message rather than causing the program to behave unexpectedly.

### Where could you enhance your code?

One area I could improve is the way the program handles files and errors. The program checks whether the input file opens successfully, but additional error handling could be added for the backup file and other unexpected file-related problems. I could also make the program more adaptable by allowing the input and output filenames to be provided to the program rather than having them directly specified in the code. These changes would make the program more flexible and better able to handle errors without requiring changes to the source code.

### Which pieces of the code did you find most challenging to write, and how did you overcome this?

I think one of the more challenging parts of this project was making sure the program read the input file correctly and stored the frequencies of the items in the map. I also had to take time to figure out the best way to handle input validation for the menu. I overcame this by breaking the program down into smaller functions and testing the program output as I worked.

### What skills from this project will be particularly transferable to other projects or coursework?

Several skills from this project will transfer to future programming projects, including object-oriented programming, encapsulation, file input and output, data structures, input validation, and organizing a larger program across multiple files.

### How did you make this program maintainable, readable, and adaptable?

I made the program maintainable and readable by separating different responsibilities between the ItemTracker class and main.cpp. The header file defines the class and its functions, while ItemTracker.cpp contains their implementation, and main.cpp primarily handles the program menu and user interaction. I also used descriptive function and variable names and included comments to explain the purpose of different sections of the code. Keeping the itemFrequency map private also helps make the program more maintainable because the frequency data is managed through the class rather than being accessed directly throughout the program.
