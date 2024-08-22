#include <map>
#include <string>

class matchingOptions
{
private:
    //supported options in grep 
    //map stores the options parameter and a function pointer to implement the function call 
   std::map<std::string, bool (*func)(const std::string &inputline, const std::string &pattern)> matchController;

public:
    //function to match digit 

    int digitMatcher(const std::string &line, const std::string &pattern);


    matchingOptions(/* args */);

    ~matchingOptions();
};

matchingOptions::matchingOptions()
{
}

matchingOptions::~matchingOptions()
{
}
