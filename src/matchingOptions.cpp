#include "matchingOptions.h"



matchingOptions::digitMatcher(const std::string &line, const std::string &pattern){
    //matching digit string options 
    if(pattern == "/d"){
        //this is a d
       for(int i =0; i < line.length(); i++){
         try {
                
                i = stoi(line[i]);  // convert the next line parameter into integer
                return 0;
            }
            catch (const std::invalid_argument&) {
                std::cout <<"invalid argument passed to stoi "<<line[i] <<std::endl;
                return 1;
            }
          

       }
        
    }else{
        return 1;
    }
}