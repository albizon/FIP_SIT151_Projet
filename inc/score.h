#ifndef SCORE_H
#define SCORE_H

#define MAX_LENGTH_SURNAME 30

typedef struct _score{
	uint32_t score;
	char name[MAX_LENGTH_SURNAME];
}score;

typedef enum _scoreScanType{
	TERMINAL,
	GUI
}scoreScanType;

typedef enum _scorePrintType{
	TERMINAL,
	GUI
}scorePrintType;

typedef enum _ordreTriScores{
	DIRECT,
	INVERSE
}ordreTriScores;

void get_surname_player(char* surname, scoreScanType type);

void print_scores(score* scores, uint32_t nbScores, scorePrintType out);

void write_score_file(char* path, score* scores, uint32_t nbScores);

void append_score_file(char* path, score* newScores, uint32_t nbNewScores);

void read_score_file(char* path, score* scores, uint32_t* nbScores);

void triScores(score* scoresIn, uint32_t nbScoresIn, score* scoresOut, uint32_t* nbScoresOut, ordreTriScores ordreTri);

#endif
