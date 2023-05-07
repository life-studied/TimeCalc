#pragma once
#include <chrono>
class TimeCalc
{
private:
    std::chrono::time_point<std::chrono::high_resolution_clock> start_time{}; // 记录开始时间
    std::chrono::duration<double> elapsed_time{}; // 记录运行时间

public:
    void start() {
        start_time = std::chrono::high_resolution_clock::now(); // 记录开始时间
    }

    void end() {
        auto end_time = std::chrono::high_resolution_clock::now(); // 记录结束时间
        elapsed_time = end_time - start_time; // 计算时间差
    }

    double getRes() const {
        return elapsed_time.count(); // 返回运行时间（秒）
    }
};

