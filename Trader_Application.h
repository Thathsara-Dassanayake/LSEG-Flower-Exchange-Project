#ifndef TRADER_APPLICATION_H
#define TRADER_APPLICATION_H

#include <iostream>
#include <vector>
#include <sstream>
#include <iterator>
#include <cctype>
#include <fstream>
#include <algorithm>
#include "Exchange_Application.h"

using namespace std;

// Global variables for CSV headers
extern string exec_header;
extern string order_header;

// Splits a given string by lines
vector<string> split(const string &str);

// Converts a string to lowercase characters
string toLowercase(const string &str);

// Displays the execution results
void print_execs();

// Displays the list of orders
void print_orders();

// Saves the execution data to a CSV file
void writeCSV(const string fileName);

// Reads lines from a CSV file and returns them as a pair of header and data
pair<string, vector<string>> readCSVLines(const string &fileName);

// Entry point for the trader application
int main();

#endif // TRADER_APPLICATION_H
