/*
🧾 Problem: Take Discount or Not
📚 Platform: CodeChef (https://www.codechef.com/practice/course/arrays/ARRAYS/problems/DISCOUNTT)
💡 Description:
Chef wants to buy N items from a shop. Each item has a price A[i].

There is a discount coupon that:
- Costs X rupees
- Reduces the cost of every item by Y rupees
  - If an item costs ≤ Y, it becomes free (0 rupees)

Chef will buy the coupon **only if**:
  total_price_with_coupon < total_original_price

You need to determine whether Chef should buy the coupon or not for each test case.

📥 Input:
- T: Number of test cases
- For each test case:
  - N, X, Y
  - Array A of N item prices

📤 Output:
- "COUPON" if Chef should buy the coupon
- "NO COUPON" otherwise

🧠 Approach:
- Calculate total original price.
- Calculate total discounted price:
    - Apply discount to each item (set to 0 if ≤ Y)
- Add coupon cost to discounted total.
- Compare and decide.

🧑‍💻 Author: Ajayraje Shinde
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int a[n];
        int sum1 = 0 , sum2 = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum1 += a[i];
        }
        
        for(int i=0;i<n;i++){
            if (a[i] <= y){
                sum2 += 0;
            }else{
                sum2 += (a[i] - y);
            }
        }
        int sum = sum2 + x;
        
        if(sum < sum1 ){
            cout << "COUPON"<<endl;
        }else{
            cout << "NO COUPON"<<endl;
        }
    }
    return 0;

}
