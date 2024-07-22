class Solution {
public:
    vector<int> decToBin(int n) {
        vector<int> v;
        if (n == 0) v.push_back(0);
        while (n > 0) {
            v.push_back(n % 2);
            n /= 2;
        }
        reverse(v.begin(), v.end()); // Reverse to get the correct binary order
        return v;
    }

    int minChanges(int n, int k) {
        vector<int> nInBin = decToBin(n);
        vector<int> kInBin = decToBin(k);

        int nSize = nInBin.size();
        int kSize = kInBin.size();

        // Pad the smaller vector with zeros to make them the same length
        if (nSize < kSize) {
            nInBin.insert(nInBin.begin(), kSize - nSize, 0);
        } else if (kSize < nSize) {
            kInBin.insert(kInBin.begin(), nSize - kSize, 0);
        }
        // for(int i = 0; i < nInBin.size(); i++){
        //     cout << nInBin[i] << " ";
        // }
        // cout << endl;
        // for(int i = 0; i < kInBin.size(); i++){
        //     cout << kInBin[i] << " ";
        // }
        // cout << endl;

        int count = 0;
        for (int i = 0; i < nInBin.size(); i++) {
            if (nInBin[i] == 1 && kInBin[i] == 0) {
                count++;
            } else if (nInBin[i] == 0 && kInBin[i] == 1) {
                return -1;
            }
        }
        return count;
    }
};
