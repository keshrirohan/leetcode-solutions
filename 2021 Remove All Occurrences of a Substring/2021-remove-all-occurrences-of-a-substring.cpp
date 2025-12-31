class Solution {
public:
    string removeOccurrences(string s, string part) {
        int  id = s.find(part);
        int ps = part.size();

        while (id != -1) {
             s.erase(id, ps);
            id = s.find(part);
           
        }
        return s;
    }
};