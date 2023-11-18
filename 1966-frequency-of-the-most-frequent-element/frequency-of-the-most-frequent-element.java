class Solution {
    public int maxFrequency(int[] nums, int k) {
        Arrays.sort(nums);
        int i = 0;
        int j = 0;
        int sum = 0;
        int maxLength = 0;

        for (i = 0; i < nums.length; i++) {
            sum += nums[i];

            while ((i - j + 1) * nums[i] - sum > k) {
                sum -= nums[j];
                j++;
            }

            maxLength = Math.max(maxLength, i - j + 1);
        }

        return maxLength;
    }
}