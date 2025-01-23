/**
 * @file pair-ssum.cpp
 * @author Jonnie Shizuka (jtech2096@gmail.com)
 * @brief - The solution to the problem 
 * @version 0.1
 * @status - 
 * @date 2025-01-14
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <bits/stdc++.h>

#define ll long long

using namespace std;

/**
 * @brief The main function
 *
 * @return int
 */

using namespace std;

std::array<int, 2> pairSum(std::vector<int> numbers, int target) {
  // todo
  unordered_map<int, vector<int>> umap;
  // {num : [diff - num, idx]}
  // 3: [5,0]
  // 5: [3, 2]

  array<int, 2> res;

  for(int idx = 0; idx < numbers.size(); idx++) {
    int num = numbers[idx];
    int diff = target - num;

    umap[num] = {diff, idx};
    
  }

  for(auto el : umap) {
    cout << el.first << " " << umap[el.first][0] << umap[umap[el.first][0]][0] << endl;

    // if(umap[umap[el.first][0]][0]) {
    //     res = {umap[el.first][0], umap[umap[el.first][0]][0]};

    //     cout << umap[el.first][0] << " " << umap[umap[el.first][0]][0] << endl;
    // }
    
  }

  return res;
}


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    pairSum({1,2,3,4,5}, 3);
    return (EXIT_SUCCESS);
}

