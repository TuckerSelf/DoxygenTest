/**
 * @file Employee.h
 * @author Tucker Self
 * @date 2023-11-17
 * @brief Employee class prototype file
 * 
 * creates prototypes and variables for the data in the Employee class
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
 private:
  int ID; //employee ID
  int years;
  
 protected:
  double hourlyRate;
  float hoursWorked;
 public:
/**
 * prints the stored employee data
 *
 * @pre data is already stored
 * @return virtual 
 * @post stored data of the employee
 * 
 */
  virtual void print();

/**
 * calculates the total pay of an employee
 *
 * @pre data is stored in hourlyRate and hoursWorked
 * @return virtual 
 * @post double of employee's pay
 * 
 */
  virtual double calculatePay();

/**
 * congratulates employee on anniversery and increases hourly pay
 *
 * @pre hourlyRate and years are stored
 * @return void 
 * @post hourlyRate is increased and employee is congratulated
 * 
 */
  void anniversary();

/**
 * basic constructor
 *
 * @pre 
 * @post all data initialized to -1
 * 
 */
  Employee();

/**
 * constructor with initialized data
 *
 * @param int ID employee id
 * @param int years years of employment
 * @param double hourlyRate rate of pay hourly
 * @param float hoursWorked number of hours worked
 * @pre all data is of valid types
 * @post all data initialized accordingly
 * 
 */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
