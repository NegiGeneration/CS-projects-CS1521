#include "rot5_13.h"

void rot5_rot13(char& ch) {

   if(ch >= 48 && ch <= 57) {
      if(ch <= 52) {
         ch += 5;
      }
       else 
         ch -= 5;
   }

   else if(ch >= 65 && ch <= 90) {
      if(ch <= 77) {
         ch += 13;
      }
      else 
         ch -= 13;
   }

   else if(ch >= 97 && ch <= 122) {
      if(ch <= 109){
         ch += 13;
      }
      else ch -= 13;

   }

   



         
}
