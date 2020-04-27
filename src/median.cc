/* Copyright 2020 Bricen Bennett csce240 */

#include <inc/median.h>

namespace csce240 {

Median::Median() : std::list<double>() {}

Median::~Median() {}

void Median::Collect(double best) {
  arr[count_] = best;
  count_++;
    for (int i = 0; i < count_; ++i) {
      if (arr[i] < arr[i+1]) {
        double tmp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = tmp;
      }
    }
}

double Median::Calculate() const {
  if (count_ % 2 == 0) {
    return arr[count_/2] + arr[count_/2 + 1] / count_;
  } else {
    return arr[count_/2];
  }
}
}  // namespace csce240
