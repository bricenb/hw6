/* Copyright Bricen Bennett 2020 csce240 */

/* This child of the Statistic class should be a concrete class---that is, it
 * should implement both Collect and Calculate methods from the parent class
 * Statistic. I will let you decide how to implement those methods.
 *
 * The Calculate method should return the mean of data gathered by the Collect
 * method. You are free to implement both methods by any means (pun not
 * intended) you choose.
 */

#ifndef INC_MEAN_H_
#define INC_MEAN_H_

#include <inc/statistic.h>

namespace csce240 {

class Mean : public Statistic {
 public:
  Mean();

  virtual ~Mean();

  void Collect(double);

  double Calculate() const;

 private:
  int count_;
  double total_;
};
}  // namespace csce240
#endif  // INC_MEAN_H_
