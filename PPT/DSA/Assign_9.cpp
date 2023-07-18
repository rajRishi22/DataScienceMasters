// Searching and Sorting Algorithm
// Link to Assignment:https://docs.google.com/document/d/1kPWd4ylE8LIj0kULL-Har7mWsSwrkNXbZNxqmbN3G90/edit
// 1.Ans
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int s=0;
        int e=numbers.size()-1;
        while(s<e){
            if(target>numbers[s]+numbers[e]){
                s++;
            }
            else if(target<numbers[s]+numbers[e]){
                e--;
            }else{
                ans.push_back(s+1);
                ans.push_back(e+1);
                break;
            }
        }
        return ans;
    }
};
// 2.Ans

class Solution {
public:
    int lower_bound(vector<int>& nums, int target){
        int l=0;
        int r=nums.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]<target){
                l=mid+1;
            }else{
                r=mid-1;
            }
    }
    return l;

    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int index1=lower_bound(nums,target);
        int index2=lower_bound(nums,target+1)-1;
        if(index1<=index2){
            return{index1,index2};
        }else{
            return{-1,-1};
        }
    }
};
// 3.Ans
class Solution {
public:
    int findPeakElement(const vector<int> &num) {
        int low = 0, high = num.size() - 1;
        while (low < high - 1) {
            int mid = (low + high) / 2;
            if (num[mid] > num[mid - 1] && num[mid] > num[mid + 1]) 
                return mid;
            else if (num[mid] > num[mid + 1]) 
                    high = mid - 1;
                 else 
                    low = mid + 1;    
        }
        return num[low] > num[high] ? low : high;
    }
};

// 4.Ans
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;

        while(s<=e){
            mid=s+(e-s)/2;
            if(nums[mid]<target){
                
                   s=mid+1;
            }
            else if(nums[mid]>target){
              e=mid-1;
            }
            else if(nums[mid]==target){
                return mid;
            }

        }
        if(target>nums[mid]){
            return mid+1;
        }
        else{
            return mid;
        }
    }
};

// 5.Ans

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maje=nums[0];
        int majc=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==maje){
                majc++;
            }
            else{
                majc--;
                if(majc==0){
                    maje=nums[i];
                    majc=1;
                }
            }
            
        }
    return maje;   
    }
};

// 6.Ans
class Solution {
public:
    int firstBadVersion(int n) {
        int version=1;
      while(isBadVersion(version)!=1){
          version++;
      }

    return version;    
    }
};

// 7.Ans
int Count(int arr[], int n)
{
    int inv_count = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                inv_count++;
 
    return inv_count;
}

// 8.Ans

void findCommon(int ar1[], int ar2[], int ar3[], int n1, int n2, int n3)
{
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2 && k < n3) {
        if (ar1[i] == ar2[j] && ar2[j] == ar3[k]) {
            cout << ar1[i] << " ";
            i++;
            j++;
            k++;
        }
        else if (ar1[i] < ar2[j])
            i++;
        else if (ar2[j] < ar3[k])
            j++;
        else
            k++;
    }
}
