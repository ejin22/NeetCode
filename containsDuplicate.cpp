#include <iostream>
#include<vector>
#include<unordered_set>
using namespace  std;

class Solution {
    public:
        bool hasDuplicate(vector<int>& nums){   //& means pass by refernce ,so no copy is made
                unordered_set<int> seen; //creates a hash set, named 'seen' (only stores unique values)
                //used for tracking numbers we have already seen

                for (int num :nums){    //loops through every number in the vector nums
                    if (seen.count(num))    //check if num is already in the set
                    return true;    //if the number exist, returns true
                    seen.insert(num);   //if not in set,add to the set for future check

                }
                return false;
        }


};
