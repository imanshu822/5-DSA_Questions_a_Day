#include <unordered_map>
#include <string>

class AllOne {
public:
    AllOne() {
        op = 0;
        res = "";
    }

    void inc(const std::string& key) {
        op = 0;
        if (d.find(key) != d.end()) {
            d[key] += 1;
        } else {
            d[key] = 1;
        }
    }

    void dec(const std::string& key) {
        op = 0;
        if (d[key] > 1) {
            d[key] -= 1;
        } else {
            d.erase(key);
        }
    }

    std::string getMaxKey() {
        if (op == 1) {
            return res;
        }
        op = 1;
        if (!d.empty()) {
            int a = d.begin()->second;
            std::string b = d.begin()->first;
            for (const auto& pair : d) {
                if (pair.second > a) {
                    a = pair.second;
                    b = pair.first;
                }
            }
            res = b;
            return b;
        }
        res = "";
        return "";
    }

    std::string getMinKey() {
        if (op == 2) {
            return res;
        }
        op = 2;
        if (!d.empty()) {
            int a = d.begin()->second;
            std::string b = d.begin()->first;
            for (const auto& pair : d) {
                if (pair.second < a) {
                    a = pair.second;
                    b = pair.first;
                }
            }
            res = b;
            return b;
        }
        res = "";
        return "";
    }

private:
    std::unordered_map<std::string, int> d;
    int op;
    std::string res;
};

/**
 * Your AllOne object will be instantiated and called as such:
 * AllOne* obj = new AllOne();
 * obj->inc(key);
 * obj->dec(key);
 * string param_3 = obj->getMaxKey();
 * string param_4 = obj->getMinKey();
 */