// solution 1:
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());
        int i=0, j=0, count=0;
        while(i<ransomNote.length() && j<magazine.length()){
            if(ransomNote[i]==magazine[j]) ++i, ++j, ++count;
            else if(ransomNote[i]<magazine[j]) ++i;
            else ++j;
        }
        return (count==ransomNote.length()) ? true : false;
    }
};

// solution 2:
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        for(int i=0; i<ransomNote.size(); ++i){
            size_t found = magazine.find(ransomNote[i]);
            if(found==-1) return false;
            magazine.erase(found, 1);
        }
    return true;
    }
};

