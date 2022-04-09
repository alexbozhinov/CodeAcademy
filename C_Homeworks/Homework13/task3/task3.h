struct Time
{
    int century;
    int year;
    int month;
    int day;
    int minute;
    int second;
};

void print(struct Time *time);

void minus(struct Time *left, struct Time *right);

void menu();
