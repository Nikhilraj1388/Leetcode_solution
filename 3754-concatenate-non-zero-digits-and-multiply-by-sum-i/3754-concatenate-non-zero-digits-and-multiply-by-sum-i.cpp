class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0;
        long long hun=1;
        long long result=0;
        while(n>0){
            int last=n%10;
            if(last!=0){
                result=(last*hun)+result;
                hun=hun*10;
                sum+=last;

            }
             n=n/10;

           
        }
        long long ans=result*sum;
        return ans;
    }
};