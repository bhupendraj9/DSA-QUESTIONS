int nonzerowalaindex = 0;
for (int i = 0; i < nums.size(); i++)
{
    if (nums[i] != 0)
    {
        swap(nums[i], nums[nonzerowalaindex]);

        nonzerowalaindex++;
    }
}