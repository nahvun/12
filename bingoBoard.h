#define N_SIZE 5
#define N_LINE 2
#define BINGO_NUMSTATUS_ABSENT -1
#define BINGO_NUMSTATUS_PRESENT 0

void bingo_init(void);
void bingo_printboard(void);
void bingo_inputNum(int sel);
int bingo_countCompletedLine(void);
int bingo_checkNum(int selNum);

