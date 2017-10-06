class Solution {
    public:
    int IDX;
    vector<vector<int> > Cnt;
    vector<vector<int> > Trie;
    
    void insert(string str)
    {
        int len = str.size();
        int root = 0;
        int i = 0;

        while(i < len) {
            int chr = str[i] - 'a';
            if(Trie[root][chr] == -1) {
                ++IDX;
                Trie[root][chr] = IDX;
                Cnt[root][chr] = 1;
            } else {
                Cnt[root][chr]++;
            }
            root = Trie[root][chr];
            i++;
        }
    }

    string Query(string str) 
    {
        int root = 0;
        string ans = "";
        int i = 0;
        int len = str.size();

        while(i < len) {
            int chr = str[i] - 'a';
            ans += str[i];
            if(Cnt[root][chr] == 1)
                    return ans;
            root = Trie[root][chr];
            i++;
        }
        return "";
    }

    vector<string> prefix(vector<string> Vec)
    {
        int mx_len = 0;
        int N = Vec.size();
        for(int i = 0; i < N; ++i) {
            mx_len = max(mx_len, (int)Vec[i].size());
        }

        Trie.clear();
        Cnt.clear();
        Trie.resize(N * mx_len + 1, vector<int>(27, -1));
        Cnt.resize(N * mx_len + 1, vector<int>(27, -1));
        IDX = 0;

        for(int i = 0; i < N; ++i) {
            insert(Vec[i]);
        } 

        vector<string> Ans;
        for(int i = 0; i < N; ++i) {
            string ans = Query(Vec[i]);
            Ans.push_back(ans); 
        }

        return Ans;
    }
};