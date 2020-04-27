/* Copyright 2020 Bricen Bennett csce240 */

#include <inc/mean.h>

namespace csce240 {

Mean::Mean() {
}

Mean::~Mean() {}

void Mean::Collect(double best) {
  total_ += best;
  count_++;
}

double Mean::Calculate() const {
  return total_ / count_;
}

}  // namespace csce240
