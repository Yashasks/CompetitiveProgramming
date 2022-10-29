class Solution {
public:
	bool isLongPressedName(string name, string typed) {
		if(name.size()>typed.size())
			return false;
		int i=0,j=0;
		while(i<name.size() && j<typed.size()){
			if(name[i]==typed[j]){
				i++;
				j++;
			}
			else if(j!=0 && typed[j]==typed[j-1]){
				j++;
			}
			else
				return false;
			}
		while(j<typed.size()){
			if(typed[j]==typed[j-1])
				j++;
			else
				return false;
		}
		return i==name.size();
	}
};