class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int l = seats.size();
        vector<int> record;
        int count = 0;
        for(int i = 0; i < l; i++)
        {
            if(seats[i] != students[i])
            {
                int x = seats[i]-students[i];
                if(x < 0)
                    x = x * (-1);
                record.push_back(x);
            }
            
        }
        int p = accumulate(record.begin(), record.end(), 0);
        return p;
    }
};