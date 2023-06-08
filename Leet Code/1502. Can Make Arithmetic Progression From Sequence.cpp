class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        bool flag=true;
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i+1]-arr[i]!=arr[i]-arr[i-1]){
                flag=false;
                break;
            }
        }
        return flag;
    }
};
