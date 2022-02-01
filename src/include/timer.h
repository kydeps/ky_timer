#ifndef KY_TIMER_TIMER_H
#define KY_TIMER_TIMER_H

#include <chrono>

namespace ky::timer {

using Timestamp = decltype(std::chrono::high_resolution_clock::now());
using Milliseconds = std::chrono::milliseconds;

Timestamp Now();

intmax_t DeltaMs(Timestamp beg, Timestamp end);

}  // namespace ky::timer

#endif  // KY_TIMER_TIMER_H
