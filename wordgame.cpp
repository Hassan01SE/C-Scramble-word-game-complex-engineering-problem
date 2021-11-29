#include <iostream>
using namespace std;

int duplicate_checker(char arr[],int size, char* element){
	
	if (size == 0){
		return -1;
	}
	int t = -1;
	for (int i=0; i<size; i++){
		if (arr[i] == *element){
			t=0;
		}
	}
	return t;
}

int num_checker(int n){
	int x=0;
	if (n>0 && n<=10){
		x=1;
	}
	return x;
}

int index_finder(char arr[],int n,char element){
	for (int i=0;i<n;i++){
		if (arr[i] == element){
			return i;
		}
	}
}

int occurance(char arr[], char a[],int n){
	int c=0;
	int t=1;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if (arr[i] == a[j]){
				c+=1;
			}
		}
		if (c>=2){
			t=0;
			c=0;
		}
	}
	
	return t;
	
}

int bonus(char arr[],int n){
	int c=0;
	int t=0;
	for (int i =0; i < n; i++){
		for (int j=0; j<n; j++){
			if (arr[i] == arr[j]){
				c+=1;
			}
		}
		if (c>=2){
			t=1;
			break;
		}
		else{
			c=0;
		}
	}
	return t;
	
}

void print_list(char arr[],int size){
	for (int i=0;i<size;i++){
		cout<<arr[i]<<endl;
	}
}



int main(){
step1:	
	cout<<"^^^ Welcome to The Word Game ^^^"<<endl;
	
int score=0;
	
	int n;
	int test;
	while (n<3 || n>15){
	 
	cout<<"Enter the number of letters allowed to make a word: "<<endl;
	
	while (!(cin >> n)){
		cout<<"Error, only input a number!"<<endl;
		cin.clear();
		cin.ignore(123, '\n');
	}
	
	//validate
	
	if (n<3 || n>15){
		cout<<"Number of letters shouldn't be less than 3 or greater than 15"<<endl;
	}
	 
}

char letter_list[n];
int letter_score[n];

for (int i=0;i<n;i++){

int t;
char element;

do{

cout<<"Input "<<n<<" different letters: "<<endl;

cin>>element;
t = duplicate_checker(letter_list,i,&element);
if (t==0){
	cout<<"Re-enter the letter"<<endl;
}
}while (t!=-1);
letter_list[i]=element;
}

for (int i=0;i<n;i++){

int num;
int result;
do{
cout<<"Assign a score to the letter "<<letter_list[i]<<" and it should be <= 10 and > 0"<<endl;
while (!(cin >> num)){
		cout<<"Error!, score should be only in integer value"<<endl;
		cin.clear();
		cin.ignore(123, '\n');
	}

//cin>>num;
result=num_checker(num);

}while (result!=1);
letter_score[i]=num;
}

cout<<"The list of letters from which you have to make a word of size of "<<n<<" letters only!"<<endl;
print_list(letter_list,n);

char word[n];
for (int i=0;i<n;i++){
	cout<<"Enter each letter of the word one by one: ";
	cin>>word[i];
	if (isdigit(word[i]) == true){
		cout<<"Invalid letter"<<endl;
		goto step2;
	}
}
cout<<endl;

cout<<"Your word is: ";
for (int i=0;i<n;i++){
	cout<<word[i];
}
cout<<endl;

for (int i=0;i<n;i++){
	
	int q;
	char e=word[i];
	q = duplicate_checker(letter_list,n,&e);
	if (q == -1){
		score=0;
		break;
	}
	
	else{
	
	int index = index_finder(letter_list,n,word[i]);
	score+=letter_score[index];
}
	
}

//function for 50 extra points
if (score !=0){

int bon=bonus(word,n);
if (bon == 0){
	score+=50;
}
}

cout<<"Your total score is: "<<score<<endl;

step2:
int game;
cout<<"The game has ended! Enter 1 to play again\nEnter any other key to quit!"<<endl;
cin>>game;
if (game == 1){
	goto step1;
}
else{
	cout<<"Game has ended!"<<endl;
}

}
