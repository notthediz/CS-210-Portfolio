#include "ItemTracker.h"
#include <fstream>
#include <iostream>

// Reads input file and creats item frequency map
void ItemTracker::ReadInputFile()
{
    std::ifstream inputFile("CS210_Project_Three_Input_File.txt");

    // Verify input file opened correctly
    if (!inputFile.is_open())
    {
        std::cout << "Error: Could not open input file." << std::endl;
        return;
    }

    std::string item;

    // Reads items from the file and increments frequency in the map
    while (inputFile >> item)
    {
        itemFrequency[item]++;
    }

    inputFile.close();
}

// Displays all items and their frequencies
void ItemTracker::PrintAllFrequencies()
{
    for (const auto& item : itemFrequency)
    {
        std::cout << item.first << " " << item.second << std::endl;
    }
}

// Displays histogram of item frequencies
void ItemTracker::PrintHistogram()
{
    for (const auto& item : itemFrequency)
    {
        std::cout << item.first << " ";

        for (int i = 0; i < item.second; ++i)
        {
            std::cout << "*";
        }

        std::cout << std::endl;
    }
}

// Creates backup file containing items and their frequencies
void ItemTracker::CreateBackupFile()
{
    std::ofstream outputFile("frequency.dat");

    if (!outputFile.is_open())
    {
        std::cout << "Error: Could not create backup file." << std::endl;
        return;
    }

    for (const auto& item : itemFrequency)
    {
        outputFile << item.first << " " << item.second << std::endl;
    }

    outputFile.close();
}

// Searches the map for specific items and returns their frequencies
int ItemTracker::GetItemFrequency(const std::string& item)
{
    auto search = itemFrequency.find(item);

    if (search != itemFrequency.end())
    {
        return search->second;
    }

    return 0;
}