class solution {
public:
   int reverse(int x){  //123
        int INT_MAX , INT_MIN;
        int ans=0;
        while(x != 0){
            int digit= x%10;
        
            if(ans>(INT_MAX/10) || ans<(INT_MIN/10))
            {
                return 0;
            }
            int ans= (ans *10 )+ digit;
            x=x/10;

        } 
            return ans;
   } 
}