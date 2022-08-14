                
                    FOOTBALL AND MOVES
                    
                time limit per test: 1 second
            memory limit per test: 256 megabytes
                    input: standard input
                    output: standard output
                    
There are two football teams, playing a match. Roy is in team B and he want that his team wins this match anyhow.
You are provided with initials goals secured by each team, i.e. a and b. As we know if any one of the teams secured 15 goals the earliest, wins the match.
You are also provided with an binary string which implies that which team secured a goal at that moment of length 29, in which '0' deontes that team A secures a goal and '1' denotes that team B secures a goal.
Since, roy wants that his team wins which implies that his secures 15 goal earlier than the other team. For which roy can one operation on the string any number of times(possibly 0).
The operation is :-

  Roy can take any '0' and convert it into '1'.
  
So, basically you have to find minimum number of times roy should apply this operation on the given string.


INPUT
The first line contains two integers a and b (a, b <= 15). The second line contains a binary string s (|s| = 29).

OUTPUT
Print "NO" if roy cannot make his team win after any number of times the operations is used.
Print "YES" and a single integer representing the minimum number of times the operation is applied, if roy can make his team win after some number of times operation is used.


Examples:-

input
2 8
11111111001010101010111010100

output
YES 5

