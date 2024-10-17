class Solution {
public:
    int maximumSwap(int num) {
        string ans=to_string(num);
        int n=ans.size();
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back({ans[i]-'0',i});
        }
        sort(v.rbegin(),v.rend());
        int i=0,j=0;
        while(j<v.size()){
            auto p=v[j];
            j++;
            if(p.first==ans[i]-'0'){
                i++;
                continue;
            }
            break;
        }
        v={};
        int temp=i;
        while(i<n){
            v.push_back({ans[i]-'0',i});
            i++;
        }
        sort(v.rbegin(),v.rend());
        j=0;
        if(v.size()){
            swap(ans[temp],ans[v[j].second]);
        }
        return stoi(ans);
    }
};