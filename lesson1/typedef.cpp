 /*typedef =reserved keyword used to create an addutional name (alias)
    for  another data type. New identifier for an existing type helps with
    readability and reduces typos use when there is a clear benefit replaced with 'using' */ 
#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;

int main(){

    text_t firstName = "MAnoda";
    number_t age =21;

    std::cout << firstName << '\n';
    std::cout << age << '\n';

    return 0;
   
}