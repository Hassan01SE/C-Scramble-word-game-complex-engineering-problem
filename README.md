# C-Scramble-word-game-complex-engineering-problem
scramble word game made on c++

COMPLEX ENGINEERING PROBLEM
I. CEP statement:
As children, we loved word games. So, let's do those interesting things again. In this assignment, you'll
implement a word game. While doing this implementation you will use all programming constructs learned
in the class till now.
II. Problem definition:
This game is just like a scrabble game.
• First, user is asked to enter number of letters allowed to make word e.g., n
• Then user will be prompted to enter n different letters along with score (1-9) assigned to each letter.
• User will construct one word out of these letters. Each valid word receives a score.
• Score for a word is the sum of the points for letters in the word, plus 50 points if all n letters are used on the
first go.
Program must have following checks:
• Number of allowed letters should not exceed 15 and should not be less than 3.
• Score assigned to each letter should not be negative or zero and should be less than 10.
• Program should display zero score if word constructed by user has any letter other than allowed list.
• User should be asked if he/she wants to play game again.
· If user enters a number in place of allowed letter loop should immediately terminate with the message
"invalid letter".
III. Analysis of the problem:
This whole task can be divided into many small sub tasks:
• Setting letter tiles and scores:
In this task user will not only define range of allowed letters to make word but he/she will also enter random
letters and their scores. After this task initial grid of letters is available to user and now, he/she can make
words.
• Constructing word:
User will use allowed letter grid to make meaningful words. While constructing words user will have to keep
all game rules in mind.
• Checking validity of word:
In this phase program will check for validity of word by checking all set constraints. Program will display
a message to user after check and will prompt user to play more.
IV. Evaluation:
Students will be evaluated on the following criteria:
• Implementation: 70%
. Output/result achieved: 30%
Summary:
Following are salient outcomes of this assignment in terms of complex engineering problem:
• Brainstorming exercise forced them to explore the surrounding environment to sort out the problems using
programming constructs.
• Implementation gave them a chance to go through the in-depth engineering knowledge to solve the problem
and analyze in an effective way.
