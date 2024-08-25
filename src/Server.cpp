#include <iostream>
#include <string>
#include <regex>


bool flagMatcher(const std::string &line,const std::string &flag){
    if( flag == "-E"){
        //found the E flag
        int size = line.length(); 
        std::cout<<"line 10 The line is "<<line<< std::endl;

        std::regex pattern1("^[]");
    }
}
bool matchingFn(const std::string &line, const std::string &pattern){
    std::cout<<"The line is "<<line<< std::endl;
    std::regex reg("^[A-Za-z0-9]+$");
    if(pattern == "\\d"){  
        std::cout<<"got a digit value "<<std::endl;
        try
        {
            int value = std::stoi(line); // try to convert string to int
            std::cout<<"The value of the function is "<<value<<std::endl;
            return true; 
        }
        catch(const std::exception& e)
        {
            return false;
        }
                         
              
    }
    else if(pattern == "\\w"){
        bool result = std::regex_match(line, reg); 
        std::cout <<"Got an alphanumeric character "<<result<<std::endl;
        return result; 
    }else{
        
        std::regex characters("^[A-Za-z]"); 
      
        std::string generic = line; //"^*"+
        std::cout<<"Line 42 line--> "<<line<<std::endl;
        std::cout<<"Line 43 "<<line[0]<<std::endl;
        std::regex result("^*"+generic); 

        //check if pattern consists of characters

        if(std::regex_match(pattern, characters) && std::regex_match(line, result)){
            std::cout<<"matched flag using regex "<<std::endl;
            return true;
        }else {
            return false;
        }
    }
    //for any unsopported functions 
    return false;
}

bool match_pattern(const std::string& input_line, const std::string& pattern) {
    //std::cout<<"line 53 the string is "<<pattern<<std::endl;
    return matchingFn(input_line, pattern); 
    if (pattern.length() == 1) {        
        return input_line.find(pattern) != std::string::npos;
    }else {
        std::cout<<"line 58 the pattern is "<<pattern<<std::endl;
        throw std::runtime_error("Unhandled pattern " + pattern);
       
    }
    
}

int main(int argc, char* argv[]) {
    // Flush after every std::cout / std::cerr
    std::cout << std::unitbuf;
    std::cerr << std::unitbuf;

    // You can use print statements as follows for debugging, they'll be visible when running tests.
    std::cout << "Logs from your program will appear here" << std::endl;

    if (argc != 3) {
        std::cerr << "Expected two arguments" << std::endl;
        return 1;
    }

    std::string flag = argv[1];
    std::string pattern = argv[2];

    if (flag != "-E") {
        std::cerr << "Expected first argument to be '-E'" << std::endl;
        return 1;
    }
    
    

    // Uncomment this block to pass the first stage
    //
    std::string input_line;
    std::getline(std::cin, input_line);

    
    try {
        if (match_pattern(input_line, pattern)) {
            return 0;
        } else {
            return 1;
        }
    } catch (const std::runtime_error& e) {
        std::cout<<"line 99 error"<<std::endl;
        std::cerr << e.what() << std::endl;
        return 1;
    }
   


}




