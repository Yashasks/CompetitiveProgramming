/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long int i=n;
        long long int low=0;
        long long int high=n;
        long long int k=-1;
        long long int mid;
        while(true){
            mid=(low+high)/2;
            k=guess(mid);
            if(k==0)break;
            
            if(k==-1){
                high=mid-1;
            }
            else if(k==1){
                low=mid+1;
            }
        }
        return mid;
    }
};