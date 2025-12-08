class Solution {
public:
     int DigitSum(int n)
    {
        int sum = 0;
        while(n)
        {
            sum += (n % 10);
            n /= 10;
        }
        return sum;
    }

    int addDigits(int n)
    {
        int sum = 0;

        while(n)
        {
            sum = DigitSum(n);

            if(sum >= 10)
            {
                n = sum;
            }
            else
            {
                break;
            }
           
        }
         return sum;
    }
        
};