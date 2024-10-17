#include "Trader_Application.h"
#include "Exchange_Application.h"

// Trader Application Main function
int main() {
    cout << getCurrentDateTimeFormatted() << endl;
    
    // Reading orders from CSV file
    string orders_fileName = "orders.csv";
    auto csvLines = readCSVLines(orders_fileName);
    vector<string> order_csvs = csvLines.second;

    // Adding orders to the system
    add_orders(order_csvs);

    // Writing executions to a CSV file
    string report_fileName = "execution_rep.csv";
    writeCSV(report_fileName);

    // For user interaction before program exit
    cout << getCurrentDateTimeFormatted() << endl;
    int a;
    cin >> a;

    return 0;
}