class Solution
{
    public:
        int maxDistToClosest(vector<int> &seats)
        {
            int zeroes = 0;
            int pre_zeroes = -1;
            int max_zeroes = -1;
            int suf_zeroes = -1;

            for (int i = 0; i < seats.size(); i++)
            {
                if (seats[i] == 0)
                {
                    zeroes++;
                }
                else
                {
                    if (pre_zeroes == -1)
                    {
                        pre_zeroes = max(pre_zeroes, zeroes);
                    }
                    else
                    {
                        max_zeroes = max(max_zeroes, zeroes);
                    }
                    zeroes = 0;
                }
            }

            suf_zeroes = zeroes;

            return max(max(suf_zeroes, pre_zeroes), (max_zeroes + 1) / 2);
        }
};