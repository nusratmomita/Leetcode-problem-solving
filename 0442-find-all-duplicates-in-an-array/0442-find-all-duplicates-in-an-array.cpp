class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // approach 1
        // map<int , int> occurrences;

        // for(int i=0;i<nums.size();i++){
        //     occurrences[nums[i]]++;
        // }

        // vector<int> answer;

        // for(auto i:occurrences){
        //     if(i.second == 2){
        //         answer.push_back(i.first);
        //     }
        // }

        // return answer;

        // approach 2 --> optimal
        if(nums.empty()){
            return {};
        }

        vector<int> answer;

        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i])-1] < 0){
                answer.push_back(abs(nums[i]));
            }
            nums[abs(nums[i])-1] = -1 * nums[abs(nums[i])-1];
        }
        return answer;
    }
};