#pragma once
#include <map>
#include <string>


class ItemTracker
{
public:
    // Reads items from input file and counts frequencies
    void ReadInputFile();

    // Returns frquencies of items
    int GetItemFrequency(const std::string& item);

    // Displays each item and its frequency
    void PrintAllFrequencies();

    // Displays items with astericks representing frequencies
    void PrintHistogram();

    // Creates backup file containing item list and frequencies
    void CreateBackupFile();

private:
    // Stores items as a key and purchase frequency as values
    std::map<std::string, int> itemFrequency;
};