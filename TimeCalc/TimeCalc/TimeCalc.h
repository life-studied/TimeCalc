#pragma once
#include <chrono>
class TimeCalc
{
private:
    std::chrono::time_point<std::chrono::high_resolution_clock> start_time{}; // ��¼��ʼʱ��
    std::chrono::duration<double> elapsed_time{}; // ��¼����ʱ��

public:
    void start() {
        start_time = std::chrono::high_resolution_clock::now(); // ��¼��ʼʱ��
    }

    void end() {
        auto end_time = std::chrono::high_resolution_clock::now(); // ��¼����ʱ��
        elapsed_time = end_time - start_time; // ����ʱ���
    }

    double getRes() const {
        return elapsed_time.count(); // ��������ʱ�䣨�룩
    }
};

