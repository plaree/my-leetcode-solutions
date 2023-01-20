bool isPalindrome(int x){
 if (x  < 0){
     return 0;
 }
long reverse = 0;
int yedek = x;
int kalan = 0;

while(x > 0){
    kalan = x % 10;
    reverse = (reverse * 10) + kalan;
    x = x / 10;
}
if (reverse == yedek){
    return true;
} 
else {
    return false;
}
}
