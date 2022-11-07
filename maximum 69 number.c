/*You are given a positive integer num consisting only of digits 6 and 9.

Return the maximum number you can get by changing at most one digit (6 becomes 9, and 9 becomes 6).

 Example 1:

Input: num = 9669
Output: 9969*/

int maximum69Number (int num){
    int number = num;
    int right_count = -1;
    int count = 0;

    while(number > 0){
        int digit = number % 10;
            if(digit == 6){
                right_count = count;
            }
            count ++;
            number /= 10;    
            }
    if(right_count == -1){
        return num;
    }
    
    int a = num + (3 * pow(10, right_count));
    return a;
    
}