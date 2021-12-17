//
//  main.cpp
//  trap
//
//  Created by Kerima Hussen on 12/17/21.
//

#include <iostream>
#include <string>

using namespace std;


int trap(<int>& height) {
        int n = height.size();
        int water = 0;
        if(n==0){
            return water;
        }
        int left[n], right[n];
        int mx = 0;
        for(int i=0;i<n;i++){
            mx = max(mx, height[i]);
            left[i] = mx;
        }
        mx = 0;
        for(int i=n-1;i>=0;i--){
            mx = max(mx,height[i]);
            right[i] = mx;
        }
        for(int i=0;i<n;i++){
            water += min(left[i], right[i]) - height[i];
        }
        return water;
}
