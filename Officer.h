/**
 * @file Officer.h
 * @author Tucker Self
 * @date 2023-11-17
 * @brief prototype file for Officer class
 * 
 * contains prototypes and variables for Officer class
 */
#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

class Officer : public Employee {
 private:
  double evilness;
 public:

/**
 * prints the stored data
 *
 * @pre data is properly stored in all values
 * @return void 
 * @post the stored data
 * 
 */
  void print();
  

/**
 * calculates pay based off of hourlyRate, evilness, and hoursWorked
 *
 * @pre data is initialized in hourlyRate, evilness, and hoursWorked
 * @return double total pay to the Officer
 * @post 
 * 
 */
  double calculatePay();
  

/**
 * basic constructor for Officer class
 *
 * @pre 
 * @post evilness set to 500, other data set to -1
 * 
 */
  Officer();
  

/**
 * constructor for Officer class
 *
 * @param int ID Officer id
 * @param int years year employed
 * @param double hourlyRate hourly pay
 * @param float hoursWorked number of hours worked
 * @param double evilness how evil the officer is
 * @pre all data is of valid types
 * @post data is initialized
 * 
 */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
