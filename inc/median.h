/* Copyright Bricen Bennett 2020 csce240 */

/* This child of the Statistic class should be a concrete class---that is, it
 * should implement both Collect and Calculate methods from the parent class
 * Statistic. I will let you decide how to implement those methods.
 * 
 * The Calculate method should return the median of data gathered by the Collect
 * method. You are free to implement both methods by any means you choose.
 */

#ifndef INC_MEDIAN_H_
#define INC_MEDIAN_H_

#include <inc/statistic.h>
#include <list>
#include <iostream>
using std::cout;
using std::endl;

namespace csce240 {

class Median : public Statistic, public std::list<double> {
 public:
  Median();

  virtual ~Median();

  void Collect(double);

  double Calculate() const;
 private:
  int count_ = 0;
  double arr[20];
};

}  // namespace csce240
#endif  // INC_MEDIAN_H_
