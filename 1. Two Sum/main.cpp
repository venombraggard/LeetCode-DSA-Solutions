class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int>target_indices;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i+1; j < nums.size(); j++) {

                if(nums.at(i) + nums.at(j) == target) {
                    target_indices.push_back(i);
                    target_indices.push_back(j);
                    break;

                }



            }




        }


        return target_indices;
        
    }
};
