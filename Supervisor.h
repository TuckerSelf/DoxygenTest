/**
 * @file Supervisor.h
 * @author Tucker Self
 * @date 2023-11-17
 * @brief prototype file for the Supervisor class
 * 
 * creates prototypes and variables for the Supervisor class
 */
#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"

class Supervisor : public Employee {
 private:
  int numSupervised;
 public:

/**
 * prints stored data of Supervisor class
 *
 * @pre data is stored
 * @return void 
 * @post prints the stored data
 * 
 */
  void print();
  

/**
 * calculates pay based off of Employee::calculatePay and numSupervised
 *
 * @pre data is stored in numSupervised and Employee
 * @return double amount to be payed to supervisor
 * @post 
 * 
 */
  double calculatePay();
  

/**
 * basic constructor for Supervisor class
 *
 * @pre 
 * @post all data set to -1
 * 
 */
  Supervisor();
  

/**
 * constructor for Supervisor class
 *
 * @param int ID supervisor id
 * @param int years number of years supervisor employed
 * @param double hourlyRate pay per hour
 * @param float hoursWorked number of hours worked
 * @param int numSupervised number of employees supervised
 * @pre 
 * @post all data initialized accordingly
 * 
 */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
