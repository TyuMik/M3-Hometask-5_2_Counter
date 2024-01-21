#pragma once

class Counter
{
private:
    int count;

public:
    Counter();

    Counter(int custom_count);

    void increment();

    void decrement();

    int getCounter() const;
};
