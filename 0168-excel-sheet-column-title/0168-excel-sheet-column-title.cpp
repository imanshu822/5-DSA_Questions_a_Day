class Solution {
public:
string convertToTitle(int columnNumber) {
    string columnTitle = "";  

    while (columnNumber > 0) {
        int remainder = (columnNumber - 1) % 26;  
        char character = 'A' + remainder;          
        columnTitle = character + columnTitle;     
        columnNumber = (columnNumber - 1) / 26;    
    }

    return columnTitle;
}
};