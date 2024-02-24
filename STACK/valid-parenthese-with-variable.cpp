bool isValidParenthesis(string s)

{

     int balance = 0;

     for (char c : s) {

        if (c == '(' || c == '{' || c == '[') {

            balance++;

        } else if (c == ')' || c == '}' || c == ']') {

            balance--;

        }

        //if the closing brackets are more then the balance decrease and the value become negative 
        if (balance < 0) {

            return false;

        }

    }

    return balance == 0;

}