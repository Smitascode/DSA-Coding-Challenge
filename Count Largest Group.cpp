class Solution {
public:
    int countLargestGroup(int n) {
        int i = 0;
        int sum = 0;
        int num=0;
        int d;
        int total=0;

        vector<int>count(37,0);


        for(i=1;i<=n;i++)
        {
            num = i;
            while(num!=0)
            {
                d=num%10;
                sum+=d;
                num/=10;
            }
            count[sum]++;
            sum=0;
        }

        int maxp = *max_element(count.begin(), count.end());
        for(i=0;i<37;i++)
        {
            if(count[i]==maxp)
            total++;
        }
        
        return total;
    }
};
