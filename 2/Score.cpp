#include "Score.h"
int Score:: ID_generator = 0;
Score::Score() :ID(Score::ID_generator){
	this->score = 0;
	this->label = GREAT;
	this->detail = "";

	ID_generator++;
} 
Score::Score(int score,char* detail, Label label) :ID(Score::ID_generator) {
	this->score = score;
	this->label = label;
	this->detail = detail;

	ID_generator++;

}
Score:: Score(int score, const char* detail, Label label):ID(Score::ID_generator){
	this->score = score;
	this->label = label;
	this->detail = detail;

	ID_generator++;
}

Score& Score :: operator=(const Score& other){
	this->score = other.score;
	this->label = other.label;
	this->detail = other.detail;
	return *this;
}
void Score:: setID_generator(int set_ID){
	ID_generator = set_ID;
}
void print(const Score& score){
	cout << "score : " << score.score << endl << "label : " << score.label  << endl << "detail : " << score.detail << endl << "ID" << score.ID ;
}


