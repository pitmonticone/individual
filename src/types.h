/*
 * types.h
 *
 *  Created on: 4 Mar 2020
 *      Author: giovanni
 */

#ifndef SRC_TYPES_H_
#define SRC_TYPES_H_

#include <memory>
#include <valarray>
#include <vector>
#include <unordered_map>
#include <Rcpp.h>

using namespace std;

/*
 * timeline_t is for storing a series of data point for a population
 */
template<class T>
using timeline_t = vector<shared_ptr<T>>;

template<class T>
using named_array_t = unordered_map<string, T>;

using state_vector_t = valarray<string>;
using variable_vector_t = valarray<double>;

using states_t = named_array_t<timeline_t<state_vector_t>>;
using variables_t = named_array_t<named_array_t<timeline_t<variable_vector_t>>>;

#endif /* SRC_TYPES_H_ */
