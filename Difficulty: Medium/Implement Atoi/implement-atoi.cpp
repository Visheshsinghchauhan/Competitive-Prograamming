class Solution {
	public:
	int myAtoi(string &s) {
		// code here
		int n = s.length();
		int i = 0;
		while (i<n && s[i] == ' ')i++;
		
		int sign = 1;
		if (i<n && (s[i] == '-' || s[i] == '+')) {
			if (s[i] == '-')sign = -1;
			i++;
		}
		long long number = 0;
		while (i<n && (s[i] >= '0' && s[i] <= '9')) {
			number = number*10 + (s[i]-'0');
			if (sign * number >= INT_MAX)
				return INT_MAX;
			if (sign * number <= INT_MIN)
				return INT_MIN;
			i++;
			
		}
		return sign * number;
	}
};
