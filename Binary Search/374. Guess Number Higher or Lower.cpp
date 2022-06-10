/*
374. Guess Number Higher or Lower
We are playing the Guess Game. The game is as follows:

I pick a number from 1 to n. You have to guess which number I picked.

Every time you guess wrong, I will tell you whether the number I picked is higher or lower than your guess.

You call a pre-defined API int guess(int num), which returns three possible results:

-1: Your guess is higher than the number I picked (i.e. num > pick).
1: Your guess is lower than the number I picked (i.e. num < pick).
0: your guess is equal to the number I picked (i.e. num == pick).
*/

class Solution {
public:
    int guessNumber(int n) {
        
        int low=0,high =n; 
        int mid;
        
        while(low<=high){
            mid= low+(high-low)/2;
            if(guess(mid) == 0)return mid;
            if(guess(mid) == -1)high = mid-1;
            if(guess(mid) == 1)low = mid+1;
            
        }
        return 0; 
        
    }
};