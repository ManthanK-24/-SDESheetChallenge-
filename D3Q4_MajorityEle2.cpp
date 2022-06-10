class Solution {
public:
    vector<int> majorityElement(vector<int>& var) {
        vector<int>ans;
        int num1 = -1, num2 = -1, cnt1=0,cnt2=0,n=var.size();
        for(int i=0;i<n;i++)
        {
            if(var[i]==num1)cnt1++;
            else if(var[i]==num2)cnt2++;
            else if(cnt1==0)
            {
                num1=var[i]; cnt1++;
            }
            else if(cnt2==0)
            {
                num2 =var[i]; cnt2++;
            }
            else
            {
                cnt1--;
                cnt2--;
            }
        }
        cnt1=0;cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(var[i]==num1)cnt1++;
            else if(var[i]==num2)cnt2++;
        }
        if(cnt1>n/3)ans.push_back(num1);
        if(cnt2>n/3)ans.push_back(num2);
        
        return ans;
    }
};