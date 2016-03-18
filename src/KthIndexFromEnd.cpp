/*
OVERVIEW: Given a string, return the letter at Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the letter at Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/

char KthIndexFromEnd(char *str, int K) {
	int len = 0;
	char *curr = str;

	if (!str)
		return '\0';
	while (*curr != '\0'){
		curr++;
		len++;
	}
	len--;
	if (len == 0)
		return '\0';
	if (K > len|| K<0)
		return '\0';
	if (K <= len)
		return *(str + (len - K));

		
}