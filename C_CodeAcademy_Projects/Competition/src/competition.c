#include "../lib/competition.h"
#include "../lib/userInterface.h"

Competition createCompetition(int contestantNumber, int criteriaNumber)
{
    Competition competition;

    competition.contestantsNumber = contestantNumber;
    competition.criteriaNumber = criteriaNumber;
    competition.contestants = vectorConstructorC(competition.contestantsNumber);

    return competition;
}

void competitionDestructor(Competition *competition)
{
    for (int i = 0; i < competition->contestants.size; i++)
    {
        contestantDestructor(&competition->contestants.elements[i]);
    }

    free(competition->contestants.elements);
}

int get_criteria()
{
    int criteriaNumber = 0;

    FILE *fp = NULL;
    fp = fopen("contestants.csv", "r");

    if (NULL == fp)
    {
        printf("Error opening file!");
        exit(1);
    }

    int c = 0;
    int i = 0;

    while ((c = getc(fp)) != EOF)
    {
        char line[1024];
        line[0] = c;
        fgets(&line[1], 1023, (FILE *)fp);

        char *token;
        token = strtok(line, ";");
        if (i == 0)
        {
            char *pEnd;
            criteriaNumber = strtol(token, &pEnd, 10);
        }
        i++;
    }
    fclose(fp);
    return criteriaNumber;
}

int get_contestants()
{
    int contestantsNumber = 0;

    FILE *fp = NULL;
    fp = fopen("contestants.csv", "r");

    if (NULL == fp)
    {
        printf("Error opening file!");
        exit(1);
    }

    int c = 0;
    int i = 0;

    while ((c = getc(fp)) != EOF)
    {
        char line[1024];
        line[0] = c;
        fgets(&line[1], 1023, (FILE *)fp);

        char *token;
        token = strtok(line, ";");
        if (i == 0)
        {
            char *pEnd;
            int creiteriaNumber = strtol(token, &pEnd, 10);
            contestantsNumber = strtol(pEnd, &pEnd, 10);
        }
        i++;
    }
    fclose(fp);
    return contestantsNumber;
}

void loadCompetition(Competition *competition)
{
    FILE *CSVcontestants = fopen("contestants.csv", "r");

    if (CSVcontestants == NULL)
    {
        printf("Press any key to exit...\n");
        exit(1);
    }

    int c = 0;
    bool flag = FALSE;

    while ((c = getc(CSVcontestants)) != EOF)
    {

        char line[1024];
        line[0] = c;
        fgets(&line[1], 1023, (FILE *)CSVcontestants);

        Contestant contestant;

        char *token;
        token = strtok(line, ";");

        int i = 0;

        if (flag == FALSE)
        {
            flag = TRUE;
            continue;
        }

        while (token != NULL)
        {
            if (i == 0)
            {
                contestant.id = atoi(token);
            }

            else if (i == 1)
            {
                contestant.firstName = stringConstructor(token);
            }

            else if (i == 2)
            {
                contestant.secondName = stringConstructor(token);
            }

            else if (i == 3)
            {
                contestant.lastName = stringConstructor(token);
            }

            else if (i == 4)
            {
                contestant.points = vectorConstructorI(competition->criteriaNumber);

                for (int j = 0; j < competition->criteriaNumber; j++)
                {
                    char *pEnd;

                    int newPoint = 0;
                    if (j == 0)
                    {
                        newPoint = strtol(token, &pEnd, 10);
                    }
                    else if (j == competition->criteriaNumber - 1)
                    {
                        newPoint = strtol(pEnd, NULL, 10);
                    }
                    else
                    {
                        newPoint = strtol(pEnd, &pEnd, 10);
                    }
                    pushBackI(&contestant.points, newPoint);
                }

                calculateTotal(&contestant);
                contestant.rank = 0;

                pushBackC(&competition->contestants, contestant);
                break;
            }

            token = strtok(NULL, ";");
            i++;
        }
    }
    sortContestants(competition->contestants);
    setRank(&competition->contestants);

    fclose(CSVcontestants);
}

int comparator(const void *p, const void *q)
{
    int l = ((Contestant *)p)->totalPoints;
    int r = ((Contestant *)q)->totalPoints;

    if (r - l == 0)
    {
        for (int i = 0; i < ((Contestant *)p)->points.size; i++)
        {
            if (((Contestant *)q)->points.elements[i] != ((Contestant *)p)->points.elements[i])
            {
                return ((Contestant *)q)->points.elements[i] - ((Contestant *)p)->points.elements[i];
            }
        }
    }

    return (r - l);
}

void sortContestants(Vector_C contestants)
{
    qsort(contestants.elements, contestants.size, sizeof(Contestant), comparator);
}

void setRank(Vector_C *contestants)
{
    for (int i = 0; i < contestants->size; i++)
    {
        contestants->elements[i].rank = i + 1;
    }
}

void importCompetition(Competition *competition)
{
    FILE *ranklist = fopen("ranklist.csv", "w");

    if (ranklist == NULL)
    {
        printf("Press any key to exit...\n");
        exit(1);
    }

    if (ranklist != NULL)
    {
        fprintf(ranklist, "ID;FIRST NAME;SECOND NAMEN;LAST NAME;TOTAL POINTS;RANK;\n");
    }

    if (competition->contestants.size != 0)
    {

        for (int i = 0; i < competition->contestants.size; i++)
        {
            fprintf(ranklist, "%d;%s;%s;%s;%d;%d\n", competition->contestants.elements[i].id, competition->contestants.elements[i].firstName.text,
                    competition->contestants.elements[i].secondName.text, competition->contestants.elements[i].lastName.text, competition->contestants.elements[i].totalPoints,
                    competition->contestants.elements[i].rank);
        }
    }
    fclose(ranklist);
}

void GENERATE_COMPETITION()
{
    int criteria = 0;
    int contestants = 0;

    criteria = get_criteria();
    contestants = get_contestants();

    Competition competition = createCompetition(contestants, criteria);
    loadCompetition(&competition);

    mainMenu(&competition);

    competitionDestructor(&competition);
}