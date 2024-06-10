#include <iostream>
#include <fstream>
#include <ctime>
#include <chrono>
using namespace std;
ofstream log;
ifstream logCheck;
class dataLogger
{
public:
    void addDate()
    {
        auto now = chrono::system_clock::now();
        time_t now_time_t = chrono::system_clock::to_time_t(now);
        tm *local_time = localtime(&now_time_t);
        log << '\n'
            << '\n'
            << local_time->tm_mday << "-" << (local_time->tm_mon + 1) << "-" << (local_time->tm_year + 1900) << "            " << local_time->tm_hour << ":" << local_time->tm_min << ":" << local_time->tm_sec << '\n'
            << "\n";
    }
    void begin(string OutFile, bool NewFile)
    {
        logCheck = ifstream(OutFile);
        if (!logCheck.good() || NewFile)
        {
            log = ofstream(OutFile);
        }
        else
        {
            log = ofstream(OutFile, ios::app);
        }
        addDate();
    }
    void add(string LogText)
    {
        log << LogText;
    }
    void end()
    {
        log.close();
    }
};