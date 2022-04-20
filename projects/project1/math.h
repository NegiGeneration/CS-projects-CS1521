/** Header File
 *@Isaac Murphy
 *
 *@5741848
 *
 *@Murp1878
 */
#ifndef math_
#define math_

class Stat {

 private:
  
  double total;
  double last;
  double sum;
  double max;
  double min;
  

public:
  /* default constructor */
  Stat();
  /** Input Method
  *@pre: sets values
  *
  *@post: initalizes values
  *
  *@param: NA
  *
  *@return: NA
  */
  void input(double value);
  /** Total Return
  *@pre: NA
  *
  *@post: NA
  *
  *@param: NA
  *
  *@return NA 
  */ 
  double GetTotal(); 
  /** Returns last method 
  * 
  *@return NA
  */
  double GetLast();
  /** Returns Sum method
  *
  *@pre: NA
  *
  *@return: NA
  */
  double GetSum();
  /** Returns mean
  *
  *@pre: NA
  *
  *@return: NA
  */
  double GetMean();
  /** Returns Minimum
  *
  *@pre: NA
  *
  *@returns: NA
  */
  double GetMin();
  /** Returns Maximum
  *
  *@pre: NA
  *
  *@returns: NA
  */
  double GetMax();
  /** Clear Method
  *
  *@pre: 
  *
  *returns: NA
  */
  void clear();   

};

#endif

