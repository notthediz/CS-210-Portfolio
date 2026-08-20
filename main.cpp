#include <iostream>
#include <string>
#include <limits>
#include "ItemTracker.h"

int main()
{
    
    ItemTracker tracker;
    tracker.ReadInputFile();
    tracker.CreateBackupFile();

    int userChoice = 0;

    while (userChoice != 4)
    {
        std::cout << "\nCorner Grocer Item Tracker" << std::endl;
        std::cout << "1. Look up an item" << std::endl;
        std::cout << "2. Display all item frequencies" << std::endl;
        std::cout << "3. Display item frequency histogram" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";

        // Input validation for non-numeric inputs
        if (!(std::cin >> userChoice))
        {
            std::cout << "Invalid input. Please enter a number from 1 to 4."
                << std::endl;

            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            continue;
        }

        // Searches for and displays frequency of specific items
        if (userChoice == 1)
        {
            std::string item;
            std::cout << "Enter the item you want to search for: ";
            std::cin >> item;

            int frequency = tracker.GetItemFrequency(item);

            std::cout << frequency << std::endl;
        }

        // Displays all items and frequencies
        else if (userChoice == 2)
        {
            tracker.PrintAllFrequencies();
        }

        // Displays frequency histogram
        else if (userChoice == 3)
        {
            tracker.PrintHistogram();
        }

        // Exits program
        else if (userChoice == 4)
        {
            std::cout << "Goodbye!" << std::endl;
        }

        // Input validation for numeric choices outside of range
        else
        {
            std::cout << "Invalid choice. Please select an option from 1 to 4."
                << std::endl;
        }
    }

    return 0;
}