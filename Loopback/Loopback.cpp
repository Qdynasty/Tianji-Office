//
// Created by trunk on 2023/7/5.
//

#include "Loopback.h"
//
// Created by trunk on 2023/7/5.
//

#include "Loopback.h"

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isCircularSentence(string sentence) {
        auto ss = split(sentence, ' ');
        int n = ss.size();
        for (int i = 0; i < n; ++i) {
            std::cout << ss[i]<< std::endl;
            std::cout << ss[(i + 1) % n][0]<< std::endl;
            if (ss[i].back() != ss[(i + 1) % n][0]) {
                return false;
            }
        }
        return true;
    }

    vector<string> split(string& s, char delim) {
        stringstream ss(s);
        string item;
        vector<string> res;
        while (getline(ss, item, delim)) {
            res.emplace_back(item);
        }
        return res;
    }
};

//leetcode submit region end(Prohibit modification and deletion)
