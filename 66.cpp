#include <vector>

using namespace std;

vector<int> solution(vector<int> &digits) {
   vector<int> out(digits);
   int qty = digits.size();

   if(qty == 1){
    if(digits[0] == 9){
        out[0] = 0;
        out.insert(out.begin(), 1);
    } else {
        out[0] += 1;
    } 
   } else {
      for(int i = digits.size() - 1; i >= 0; i--){
        if(digits[i] == 9){
            out[i] = 0;
            if(i == 0){
                out.insert(out.begin(), 1);
            }
        } else {
            out[i] += 1;
            break;
        }
      }
   }
  return out; 
}
