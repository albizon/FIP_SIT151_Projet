#include "score.h"

void get_surname_player(char* surname, scoreScanType in)
{
	switch(in){
		case TERMINAL:
			printf("Veuillez saisir votre nom : \n");
			scanf("%s", surname);
			printf("Votre nom est : %s\n", surname);
			break;
		case GUI:
			sprintf(surname, "ERROR");
			break;
		default:
			sprintf(surname, "ERROR");
			break;
	}
}

void print_scores(score* scores, uint32_t nbScores, scorePrintType out)
{
	switch(in){
		case TERMINAL:
			if(nbScores<=0)
			{
				printf("Aucun score à afficher\n");
				break;
			}
			printf("Liste des Scores : \n");
			uint32_t iScore = 0;
			do{
				printf("\t%s : %d\n", scores[iScore]->name, scores[iScore]->score);
				iScore++;
			}while(iScore<nbScores);
			printf("Fin des scores")
			break;
		case GUI:
			printf("ERROR");
			break;
		default:
			printf("ERROR");
			break;
	}
}

void write_score_file(char* path, score* scores, uint32_t nbScores)
{
	if(nbScores != 0 && scores != NULL && path !=NULL)
	{
		FILE *fileScores = fopen(path, "w");
		uint32_t iScore = 0;
		while(iScore<nbScores)
		{
			fprintf(fileScores, "%s:%d", scores[iScore]->name, scores[iScore]->score);
		}
		fclose(fileScores);
	}

}

void append_score_file(char* path, score* newScore)
{
	if(nbScores != 0 && scores != NULL && path !=NULL)
	{
		FILE *fileScores = fopen(path, "a");
		fprintf(fileScores, "%s:%d", scores->name, scores->score);
		fclose(fileScores);
	}
}

score* read_score_file(char* path, uint32_t* nbScores)
{
	return NULL;
}

score* triScores(score* scoresIn, uint32_t nbScoresIn, uint32_t* nbScoresOut, ordreTriScores ordreTri)
{
	score* scoresTri;

	memcpy(scoresTri, scoresIn, nbScoresIn*sizeof(score));
	*nbScoresOut = nbScoresIn;
	return scoresTri;
}
