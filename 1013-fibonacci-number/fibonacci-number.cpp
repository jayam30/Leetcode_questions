class Solution {
public:
    int fib(int n) {
        int ans=0;
        int x=0;
        int y=1;
        if(n==0)
        {
            return 0;
        }
        else if (n==1)
        {
            return 1;
        }

        for(int i=2; i<=n; i++)
        {
            int z=x+y;
            x=y;
            y=z;

        }

        return y;
        
    }
};