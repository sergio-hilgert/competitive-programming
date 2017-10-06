class Solution {
    public:
    int colorful(int N) {
        char st[20];
        sprintf(st, "%d", N);
        int len = strlen(st);
        
        map<long long, bool> Hash;

        for(int i = 0; i < len; ++i) {
            long long mul = 1;
            for(int j = i; j < len; ++j) {
                mul *= (long long)(st[j] - '0');
                if(Hash.find(mul) != Hash.end())
                        return 0;
                Hash[mul] = true;
            }
        }

        return 1;
    }
};