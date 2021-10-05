#ifndef CPU_H
#define CPU_H
#include<vector>
#include<string>
#include <QString>





class CPU
{
public:
    const static int NUM_CPU_STATES = 10;
    enum CPUStates
    {
        S_USER = 0,
        S_NICE,
        S_SYSTEM,
        S_IDLE,
        S_IOWAIT,
        S_IRQ,
        S_SOFTIRQ,
        S_STEAL,
        S_GUEST,
        S_GUEST_NICE
    };
    typedef struct CPUData
    {
        std::string cpu;
        size_t times[NUM_CPU_STATES];
    } CPUData;

    CPU();
    void ReadStatsCPU(std::vector<CPUData> & entries);
    size_t GetIdleTime(const CPUData & e1, const CPUData & e2);
    size_t GetActiveTime(const CPUData & e1, const CPUData & e2);
    size_t GetIdleTime(const CPUData & e);
    size_t GetActiveTime(const CPUData & e);

    QString PrintStats(const std::vector<CPUData> & entries1, const std::vector<CPUData> & entries2);



};

#endif // CPU_H
