//GFG -- Count Digits  (Easy)
class Solution {
    public:
      int evenlyDivides(int n) {
          int count = 0;
          int num = n;
          while(n>0){
              int last = n%10;
              if(last!=0&&num%last==0){
              count++;
              }
              n = n/10;
          }
          return count;
      }
  };


//LeetCode -- Reverse Integer  (Easy)
class Solution {
    public:
        int reverse(int x) {
            int ans = 0; 
            while (x != 0) {
                int digit = x % 10; 
                if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10)) {
                    return 0; 
                }
                ans = ans * 10 + digit;
                x = x / 10; 
            }
            return ans;
        }
    };


//LeetCode -- Palindrome  (Easy)
class Solution {
    public:
        bool isPalindrome(int x) {
            if (x < 0) {
                return false;
            }
    
            long reverse = 0;
            int xcopy = x;
    
            while (x > 0) {
                reverse = (reverse * 10) + (x % 10);
                x /= 10;
            }
    
            return reverse == xcopy;        
        }
    };


//LeetCode -- Armstrong Number  (Easy)
class Solution {
    public:
    bool isArmstrong(int x) {
        int original = x;
        int sum = 0, last;
        int numDigits = 0;
   
        int temp = x;
        while (temp != 0) {
            numDigits++;
            temp /= 10;
        }

        temp = x;
        while (temp != 0) {
            last = temp % 10;  
            sum += pow(last, numDigits);
            temp /= 10;  
        }

        return sum == original;
    }
};


//GFG -- Sum of All Divisors  (Easy)
class Solution {
    public:
      int sumOfDivisors(int n) {
        int sum=n;
        for(int i=2;i<=n;i++){
            int num=i;
                for(int j=2;j<=n;j++){
                    if(num%j==0) sum+=j;
                    if(num<j) break;
            }
        }
        return sum;
      }
  };


//GFG -- Minimum Number of Jumps  (Easy)
class Solution {
    public:
      int minJumps(vector<int>& arr) {
          int n = arr.size();
          int maxReach = 0 ;
          int lastIndex = 0 ;
          int jump = 0 ;
          
          if(n == 1) return 0 ;
          
          for(int i = 0 ; i < n ; i++){
              maxReach = max(maxReach , i+arr[i]);
              if(i == lastIndex){
                  if(maxReach == i) {
                      jump = -1;
                      break;
                  }
                
                      lastIndex = maxReach ;
                      jump++;
                  
                  if(maxReach >= n-1){
                      break;
                  }
              }
          }
          return jump;
          
      }
  };


//GFG -- LCM and GCD  (Easy)
class Solution {
    public:
        vector<int> lcmAndGcd(int a, int b) {
        int a1 = a;
        int b1 = b;
        while (a > 0 && b > 0) {
            if (a > b) {
                a = a % b;
            } else {
                b = b % a;
            }
        }
        int gcd = (a == 0) ? b : a;
        int lcm = ((a1*b1) / gcd);
        vector<int> vec = {lcm,gcd};
        return vec; 
    }
  };