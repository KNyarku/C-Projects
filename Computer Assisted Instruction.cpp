#include <iostream> 
using namespace std;
#include <cstdlib>

int main ();
void response ();
void test ();

int main ()
{
	int num = 0, num1 = 0, num2 = 0, counter = 0, answer = 0;

	
	do
	{
		num = 1 + rand  () % 9;
		num1 =  1 + rand () % 9;
		num2 = num * num1;
					
		cout <<"What is " << num << " times " << num1 << endl;
		cin >> answer;

			if (answer == num2)
			{
				counter++;
			}
			else
			{
				while(answer != num2)
				{
				
					cout << "Try again" << endl;
					cout <<"What is " << num << " times " << num1 << endl;
					cin >> answer;
				}
				counter++;
			}	
				
	}while(counter != 2);

	cout << "Congratulations, lets move on" << endl;

	response ();

		return 0;
}

void response ()
{
	int num = 0, num1 = 0, num2 = 0, counter = 0, answer = 0, resp = 0;
	system("pause");
	system("cls");
	
	do{
		num = 1 + rand  () % 9;
		num1 =  1 + rand () % 9;
		num2 = num * num1;

		cout <<"What is " << num << " times " << num1 << endl;
		cin >> answer;
		
		if (answer == num2)
				{
					resp = (1 + rand() % 4);
					
					switch (resp)
					{	
						case 1:
						cout << "Good Job!" << endl;
						break;
						case 2:
						cout << "Well, Go You!" << endl;
						break;
						case 3:
						cout << "Wow! Lookatchu!" << endl;
						break;
						case 4:
						cout << "DAAAAAAAAAAAAAYYUM!" << endl;
					}
					counter ++;
				}
				
			
		else
				
		{
			while(answer != num2)
			{
				resp = (1 + rand() % 4);
				switch (resp)
				{
					case 1:
					cout << "Try Again" << endl;
					break;
					case 2:
					cout << "You Alright?" << endl;
					break;
					case 3:
					cout << "You're drooling on the keyboard, son" << endl;
					break;
					case 4 :
					cout << "*Knock, Knock* Anybody in there?" << endl;
				}		
				
				cin >> answer;				
			}	
				resp = (1 + rand() % 4);
				switch (resp)
				{	
					case 1:
					cout << "Good Job!" << endl;
					break;
					case 2:
					cout << "Well, Go You!" << endl;
					break;
					case 3:
					cout << "Wow! Lookatchu!" << endl;
					break;
					case 4:
					cout << "DAAAAAAAAAAAAAYYUM!" << endl;
				}	
				counter ++;
		}	
				
	}while(counter != 2);

	test ();

}
void test ()
{
	int num = 0, num1 = 0, num2 = 0, counter = 0, answer = 0, resp = 0;
	double	score = 0, correct = 0;
	system("pause");
	system("cls");
	
	do{
		num = 1 + rand  () % 9;
		num1 =  1 + rand () % 9;
		num2 = num * num1;

		cout <<"What is " << num << " times " << num1 << endl;
		cin >> answer;
		
		if (answer == num2)
		{
			correct ++;
			counter ++;
		}
				
		else
				
		{		
			counter ++;
		}	
				
	}while(counter != 10);

	score = correct * 10;
	
	if (score >= 75)
	{
		cout << "You got " << score << "% correct" << endl;
		cout << "Congratulations you are definitely ready to move on" << endl;
	}
	else if (score < 75)
		cout << "You got " << score << "% correct" << endl;
		cout << "Please ask your teacher for extra help" << endl;

}