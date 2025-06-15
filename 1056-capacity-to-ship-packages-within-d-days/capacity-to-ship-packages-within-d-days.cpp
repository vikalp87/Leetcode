class Solution {
public:
    bool ship(int mid, vector<int> weights, int days) {

        int totalDays = 0;
        int sum=0;

        for (int i = 0; i < weights.size(); i++) {

            sum+=weights[i];
            if(sum>mid){
                totalDays++;
                sum=weights[i];
            }
        }

        if(sum<=mid){
            totalDays++;
        }

        if (totalDays <= days)
            return true;
        return false;
    }

    int shipWithinDays(vector<int>& weights, int days) {

        int left =* max_element(weights.begin(), weights.end());
        int right = 0;

        for (int i = 0; i < weights.size(); i++) {
            right += weights[i];
        }

        while (left < right) {

            int mid = left + ((right - left) / 2);

            if (ship(mid, weights, days)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }
};