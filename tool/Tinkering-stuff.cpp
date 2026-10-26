#include <iostream>
#include <string>
#include <vector>


int main() {
    int num = 5;
    int num2 = num; // Copies value
    int& num3 = num; // Reference: Different name for the same variable
    int* pnum = &num; // Pointer: Points to address only
    
    std::cout << num << std::endl;
    std:: cout << num2  << std::endl;
    std::cout << num3  << std::endl;
    std::cout << pnum  << std::endl;
    std::cout << *pnum << std::endl;   // Dereferencing: Getting value from pointer

 // ----------------------------------------------------------------------------------------
    
    std::vector<int> nums = {5, 10, 15, 20};
    
    for(int n : nums) {
        std::cout << n << std::endl;   
    }
    
    for(auto it = nums.begin(); it != nums.end();) {
        if (*it % 2 == 0) {
            it = nums.erase(it);   
        } else {
            it++;
        }
        std::cout << "---" << *it << std::endl;
    }
    
    // for (int n : nums) {
    //     std::cout << "---" << n  << std::endl;   
    // }

 // ----------------------------------------------------------------------------------------

return 0;   
}
