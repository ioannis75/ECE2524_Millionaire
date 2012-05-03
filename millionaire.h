#include <string>
#include <iostream>
#include <fstream>
#include <list>
#include <time.h>

using namespace std;

struct question_node
{
	string question;
	string A, B, C, D;
	string answer;
	bool used;
};

class millionaire
{
	public:
		int tier;
		int round;
		int score;
		int life1;
		int life2;
		bool lifeline;
	
		list<question_node> question_pool;
		list<question_node>::iterator it;

		millionaire();

		void play(void);
		void welcome(void);
		void question_read(void);
		bool check_answer(string answer, string response);
		void adjust_score(void);
		void final_screen(void);
		void life_line(string A, string B, string C, string D, string answer);
		void create_question_pool(void);
	
};
