#include <string>
#include <vector>

class password{
private:
    std::string hm;
public:
    password();
    password(std::string s);
    bool checkSubStr(std::string test);
};
