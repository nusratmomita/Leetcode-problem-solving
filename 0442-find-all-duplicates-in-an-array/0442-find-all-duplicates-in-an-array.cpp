class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int , int> occurrences;

        for(int i=0;i<nums.size();i++){
            occurrences[nums[i]]++;
        }

        vector<int> answer;

        for(auto i:occurrences){
            if(i.second == 2){
                answer.push_back(i.first);
            }
        }

        return answer;
    }
};