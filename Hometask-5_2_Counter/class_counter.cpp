
#include "class_counter.h"

Counter::Counter() : count(1) { }

Counter::Counter(int custom_count) : count(custom_count) { }

void Counter::increment() { count++; }

void Counter::decrement() { count--; }

int Counter::getCounter() const { return count; }