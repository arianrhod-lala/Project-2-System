#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <windows.h>

#define SUBJECTS 5

typedef struct {
    char name[50];
    char coursecode[50];
    char courseyear[50];
    char date[15];
    char telno[15];
    int sclass;
    char div[5];
    int rno;
    float marks[SUBJECTS];
    char lrn[15];
    int attct;
    float per;
    char grade;
} STUDENT;

    void Introduction();
    void MainMenu();
    void Teacher();
    void Student();
    void Public();
    void Password();
    void addRecord();
    void searchRecord();
    void modifyRecord();
    void delRecord();
    void displayRecord();
    void statisticRecord();
    void Introduction();
    void enter(STUDENT *s);
    void getper();
    void getgrade();
    void display_card(STUDENT *s);
    void display_all(STUDENT *s);
    void addStudent();
    void dispall();
    void delStudent();
    void modifyStudent();
    void search();
    void searchStudent();
    void sortmark();
    void sortper();
    void statistics();

void Introduction(){
     Sleep(3000);
     system("cls");
     for(int i=1;i<=100;++i)
     {
         Sleep(5);
         system("cls");
         printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tLOADING %d%%", i);
         if(i==100)
         {
             Sleep(1000);
         }
     }
     system("cls");
     printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\Good day! Welcome to the");
     printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\Student Grading System");
     Sleep(3000);
     system("cls");
}

void MainMenu(){
    int option;
    while (1){
        system("cls");
        printf("\n\n\n\n\n");
        printf("\t\t\t      ---------------\n");
        printf("\t\t\t         MAIN MENU\n");
        printf("\t\t\t      ---------------\n\n\n");
        printf("\t\t\t     SELECT OPTIONS\n\n");
        printf("\t\t-------------------------------------------\n");
        printf("\t\t  1. PROFESSOR\t2. STUDENT\t3. PUBLIC\n");
        printf("\t\t-------------------------------------------\n\n");
        printf("\t\t             (PRESS 4 TO EXIT)\n\n\n");
        printf("\t\t       ENTER AN OPTION: ");
        scanf("%d", &option);
        system("cls");

        switch(option){
            case 1: system("cls");
                    Password();
                    break;
            case 2: Student();
                    break;
            case 3: Public();
                    break;
            case 4: exit(0);
                    break;
            default: printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\Option not valid! Please try again!");
                    printf("\n\n\n\n\n\n\n\n");
                    }
        if (option == 4){
            break;
            }
        system("PAUSE");
        }
    return 0;
}

// TEACHER FUNCTION
void Teacher(){
    int option;
        system("cls");
        printf("\n\n\n\n\n\n");
        printf("\t\t\t\t  ------------\n");
        printf("\t\t\t\t      MENU\n");
        printf("\t\t\t\t  ------------\n");
        printf("\t\t\t     1. Create new Record\n");
        printf("\t\t\t     2. Search Existing Record\n");
        printf("\t\t\t     3. Update a Record\n");
        printf("\t\t\t     4. Remove a Record\n");
        printf("\t\t\t     5. Display All Records\n");
        printf("\t\t\t     6. Class Records\n");
        printf("\t\t\t     7. Back to Main Menu\n\n");
        printf("\t\t\t     ENTER YOUR OPTION: ");
        scanf("%d", &option);
        system("cls");

        switch (option) {
            case 1:
                addRecord();
                break;
            case 2:
                searchRecord();
                break;
            case 3:
                modifyRecord();
                break;
            case 4:
                delRecord();
                break;
            case 5:
                displayRecord();
                break;
            case 6:
                statisticRecord();
                break;
            case 7:
                MainMenu();
                break;
            default:
                printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\tOption not valid! Please try again!\n");
                printf("\n\n\n\n\n\n\n\n");
                }
        if (option == 7){
            break;
            }
        system("PAUSE");
        }
    return 0;
}

// STUDENT FUNCTION
void Student(){
    int option;

        system("cls");
        printf("\n\n\n\n\n\n\n");
        printf("\t\t\t\t ------------\n");
        printf("\t\t\t\t     MENU\n");
        printf("\t\t\t\t ------------\n");
        printf("\t\t\t   1. Search Current Record\n");
        printf("\t\t\t   2. View Class Record\n");
        printf("\t\t\t   3. Back to Main Menu\n\n");
        printf("\t\t\t   ENTER YOUR OPTION: ");
        scanf("%d", &option);
        system("cls");

    switch(option) {
        case 1:
            searchStudent();
            break;
        case 2:
            statisticRecord();
            break;
        case 3:
            MainMenu();
            break;
        default:
                printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\tOption not valid! Please try again!\n");
                printf("\n\n\n\n\n\n\n\n");
}
        if (option == 3) {
            break;
        }

        system("PAUSE");
    }

    return 0;
}

// PUBLIC FUNCTION
void Displaypublic(){
    int option;

        printf("\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t ------------\n");
        printf("\t\t\t\t     MENU\n");
        printf("\t\t\t\t ------------\n");
        printf("\t\t\t   1. View Class Record\n");
        printf("\t\t\t   2. Back to Main Menu\n\n");
        printf("\t\t\t   ENTER AN OPTION: ");
        scanf("%d", &option);
        system("cls");

    switch (option){
        case 1: statisticRecord();
                break;
        case 2: MainMenu();
                break;
        default:
                printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\tOption not valid! Please try again!\n");
                printf("\n\n\n\n\n\n\n\n");
            }
        }
        system("PAUSE");

void MAINSEQUENCE(){
    Introduction();
    MainMenu();
}

void getper(){
    per =(marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5;
}

void getgrade(){
    if(per>=80){
        grade='A';
    } else if ((per>=60)&&(per<=79)){
        grade='B';
        } else if ((per>=40)&&(per<=59)){
            grade='C';
            } else if ((per>=35)&&(per<=39)){
                grade='D';
                } else if (per<35){
                    grade='E';
                    }
}

void enter(STUDENT *s) {
    printf("\t\t\t  -------------------------------\n");
    printf("\t\t\t     ENTER THE STUDENT DETAILS\n");
    printf("\t\t\t  -------------------------------\n");

    printf("\t\tNAME OF THE STUDENT    : ");
    scanf("%s", s->name);

    printf("\t\tCOURSE CODE          : ");
    scanf("%s", s->coursecode);

    printf("\t\tCOURSE YEAR        : ");
    scanf("%s", s->courseyear);

    printf("\t\tDATE OF BIRTH(DD/MM/YY): ");
    scanf("%s", s->date);

    printf("\t\tTELEPHONE NUMBER       : ");
    scanf("%s", s->telno);

    printf("\t\tLRN       : ");
    scanf("%s", s->lrn);

    printf("\t\tCLASS                  : ");
    scanf("%d", &s->sclass);

    printf("\t\tDIVISION               : ");
    scanf("%s", s->div);

    printf("\t\tROLL NUMBER            : ");
    scanf("%d", &s->rno);

    printf("\t\tDAYS PRESENT           : ");
    scanf("%d", &s->attct);

    if (strcmp(s->coursecode, "BSIT") == 0) {
        printf("\t\t\t  -----------------------------\n");
        printf("\t\t\t     ENTER THE SUBJECT MARKS\n");
        printf("\t\t\t  -----------------------------\n\n");
        printf("\t\t\t       PHYSICS    : ");
        scanf("%f", &s->marks[0]);
        printf("\t\t\t       CHEMISTRY  : ");
        scanf("%f", &s->marks[1]);
        printf("\t\t\t       MATHEMATICS: ");
        scanf("%f", &s->marks[2]);
        printf("\t\t\t       COMPUTER   : ");
        scanf("%f", &s->marks[3]);
        printf("\t\t\t       ENGLISH    : ");
        scanf("%f", &s->marks[4]);
    } else if (strcmp(s->coursecode, "BSCS") == 0) {
        printf("\t\t\t  -----------------------------\n");
        printf("\t\t\t     ENTER THE SUBJECT MARKS\n");
        printf("\t\t\t  -----------------------------\n\n");
        printf("\t\t\t       PHYSICS    : ");
        scanf("%f", &s->marks[0]);
        printf("\t\t\t       CHEMISTRY  : ");
        scanf("%f", &s->marks[1]);
        printf("\t\t\t       MATHEMATICS: ");
        scanf("%f", &s->marks[2]);
        printf("\t\t\t       COMPUTER   : ");
        scanf("%f", &s->marks[3]);
        printf("\t\t\t       ENGLISH    : ");
        scanf("%f", &s->marks[4]);
    } else {
        printf("\t\t\t  -----------------------------\n");
        printf("\t\t\t     ENTER THE SUBJECT MARKS\n");
        printf("\t\t\t  -----------------------------\n\n");
        printf("\t\t\t       PHYSICS    : ");
        scanf("%f", &s->marks[0]);
        printf("\t\t\t       CHEMISTRY  : ");
        scanf("%f", &s->marks[1]);
        printf("\t\t\t       MATHEMATICS: ");
        scanf("%f", &s->marks[2]);
        printf("\t\t\t       COMPUTER   : ");
        scanf("%f", &s->marks[3]);
        printf("\t\t\t       ENGLISH    : ");
        scanf("%f", &s->marks[4]);
    }
        printf("\n\n");
        getper();
        getgrade();
}

void display_card(Student* s){
    printf("----------------------------------------");
    printf("---------------------------------------\n");
    printf("                             STUDENT REPORT CARD\n");
    printf("----------------------------------------");
    printf("---------------------------------------\n\n");
    printf("                         ------------------------\n");
    printf("                             PERSONAL DETAILS\n");
    printf("                         ------------------------\n\n");
    printf("NAME: %s\t\t", name);
    printf("COURSE CODE: %s\t\t", coursecode);
    printf("COURSE YEAR: %s\t\t", courseyear);
    printf("LRN: %s\t\t", lrn);
    printf("CLASS: %d\t", sclass);
    printf("DIV: %s\t\t", div);
    printf("ROLL NO: %d\n\n", rno);
    printf("DATE OF BIRTH: %s\t", date);
    printf("TELEPHONE: %s\n\n", telno);
    printf("                        ----------------------------\n");
    printf("                            ACADEMIC PERFORMANCE\n");
    printf("                        ----------------------------\n\n");
    printf("                 ---------------------------------------\n");
    printf("                                  MARKS\n");
    printf("                 ---------------------------------------\n");

    if (strcmp(coursecode, "BSIT") == 0) {
        printf("\t\t\t  PHYSICS\t%d\n", marks[0]);
        printf("\t\t\t  CHEMISTRY\t%d\n", marks[1]);
        printf("\t\t\t  MATHS\t\t%d\n", marks[2]);
        printf("\t\t\t  COMPUTER\t%d\n", marks[3]);
        printf("\t\t\t  ENGLISH\t%d\n", marks[4]);
    } else if (strcmp(coursecode, "BSCS") == 0) {
        printf("\t\t\t  PHYSICS\t%d\n", marks[0]);
        printf("\t\t\t  CHEMISTRY\t%d\n", marks[1]);
        printf("\t\t\t  MATHS\t\t%d\n", marks[2]);
        printf("\t\t\t  BIOLOGY\t%d\n", marks[3]);
        printf("\t\t\t  ENGLISH\t%d\n", marks[4]);
    }

    printf("                -------------------        ------------\n");
    printf("                 PERCENTAGE: %f%%\n", per);
    printf("GRADE: %c\n", grade);
    printf("                -------------------        ------------\n\n");
}

void display_all(STUDENT *s) {
    printf("\t\tNAME: %s\n", name);
    printf("\t\tCOURSECODE: %s\tCOURSEYEAR: %s\n", coursecode, courseyear);
    printf("\t\tROLL NO: %d\tLRN: %s\n", rno, lrn);
    printf("\t\tCLASS: %d\tDIV: %s\n", sclass, div);
    printf("\t\tTELEPHONE NO: %s\n", telno);
    printf("\t\t                     MARKS\n");
    printf("\t\tPHY\tCHEM\tMATHS\tBIO/COMP\tENG\n");
    printf("\t\t%f\t%f\t%f\t%f\t%f\n\n", marks[0], marks[1], marks[2], marks[3], marks[4]);
    printf("\t\tPERCENTAGE: %f%%\t\tGRADE: %c\n", per, grade);
    printf("\t\tATTENDANCE: %d\n", attct);
}

void addStudent(){
    addStudent(&s)
    enter();
    Student s;
    FILE *f = fopen("Record.txt", "w");

    if (f == NULL){
        printf("Error opening file!\n");
        exit(1);
    }

    enter(&s);
    fwrite(&s, sizeof(s), 1, f);

    fclose(f);
}

void dispall(){
    FILE *f = fopen("Record.txt", "w");

    if (f == NULL){
        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!\n");
        printf("\n\n\n\n\n\n\n\n");
    } else {
        printf("\t\t\t  ---------------------------\n");
        printf("\t\t\t     LIST OF CLASS RECORDS\n");
        printf("\t\t\t  ---------------------------\n\n");

        STUDENT s;
        while (fread(&s, sizeof(s), 1, f) == 1) {
            display_all(&s);
            printf("\n\n\n\t\t---------------------------------------------\n\n\n");
        }
    }
    fclose(f);
}

void delStudent(){
    STUDENT s;
    FILE *f1 = fopen("Record.txt", "r");
    FILE *f2 = fopen("Temp.txt", "w");

    int n, flag = 0;

    if (f1 == NULL) {
        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!\n");
        printf("\n\n\n\n\n\n\n\n");
    } else {
        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t");
        printf("ENTER THE ROLL NUMBER OF THE STUDENT: ");
        scanf("%d", &n);
        system("cls");

        while (fread(&s, sizeof(s), 1, f1) == 1) {
            if (n != s.rno) {
                fwrite(&s, sizeof(s), 1, f2);
                flag = 1;
            }
        }

        if (flag == 0) {
            printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tRECORD NOT FOUND!\n");
            printf("\n\n\n\n\n\n\n\n");
        } else {
            printf("\n\n\n\n\n\n\n\n\n\n\n\t\t");
            printf("THE RECORD WAS DELETED SUCCESSFULLY\n");
            printf("\n\n\n\n\n\n\n\n");
        }
    }

    fclose(f1);
    fclose(f2);
    remove("Record.dat");
    rename("Temp.dat", "Record.dat");
}

void modifyStudent(){
    STUDENT s;
    FILE *f1 = fopen("Record.dat", "rb");
    FILE *f2 = fopen("Temp.dat", "wb");

    int n, flag = 0;

    if (f1 == NULL) {
        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!\n");
        printf("\n\n\n\n\n\n\n\n");
    } else {
        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t");
        printf("ENTER THE ROLL NUMBER OF THE STUDENT: ");
        scanf("%d", &n);
        system("cls");

        while (fread(&s, sizeof(s), 1, f1) == 1) {
            if (n == s.rno) {
                printf("\n\n\n\n\n\n\n\n\n\n\n\t\t");
                printf("ENTER THE MODIFIED DETAILS OF THE STUDENT");
                sleep(3);
                system("clear");

                enter(&s);

                fwrite(&s, sizeof(s), 1, f2);
                flag = 1;
            } else {
                fwrite(&s, sizeof(s), 1, f2);
            }
        }

        if (flag == 0) {
            printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tRECORD NOT FOUND!\n");
            printf("\n\n\n\n\n\n\n\n");
        }
    }

    fclose(f1);
    fclose(f2);
    remove("Record.dat");
    rename("Temp.dat", "Record.dat");
}

void search(){
    STUDENT s;
    FILE *f = fopen("Record.dat", "rb");
    int n, flag = 0;

    if (f == NULL) {
        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!\n");
        printf("\n\n\n\n\n\n\n\n");
    } else {
        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t");
        printf("ENTER THE ROLL NUMBER OF THE STUDENT: ");
        scanf("%d", &n);
        system("clear");

        while (fread(&s, sizeof(s), 1, f) == 1) {
            if (n == s.rno) {
                flag = 1;
                display_card(&s);
            }
        }

        if (flag == 0) {
            printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tRECORD NOT FOUND!\n");
            printf("\n\n\n\n\n\n\n\n");
        }
    }
    fclose(f);
}

void searchStudent() {
    STUDENT s;
    FILE *f = fopen("Record.txt", "rb");
    int n, flag = 0;
    char a[5];

    if (f == NULL) {
        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!\n");
        printf("\n\n\n\n\n\n\n\n");
    } else {
        printf("\n\n\n\n\n\n\n\n\n\t\t\t");
        printf("ENTER YOUR ROLL NUMBER: ");
        scanf("%d", &n);
        printf("\n\t\t\t");
        printf("ENTER YOUR LRN: ");
        fflush(stdin);
        fgets(a, sizeof(a), stdin);
        a[strcspn(a, "\n")] = '\0';
        system("clear");

        while (fread(&s, sizeof(s), 1, f) == 1) {
            if ((n == s.rno) && (strcmp(a, s.lrn) == 0)) {
                flag = 1;
                display_card(&s);
            }
        }

        if (flag == 0) {
            printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tRECORD NOT FOUND!\n");
            printf("\n\n\n\n\n\n\n\n");
        }
    }
    fclose(f);
}

//SORTING MARKS
void sortmark() {
    STUDENT s, t[100], temp;
    FILE *f = fopen("Record.txt", "rb");
    int x, option, n = 0;

    if (f == NULL) {
        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!\n");
        printf("\n\n\n\n\n\n\n\n");
    } else {
        while (fread(&s, sizeof(s), 1, f) == 1) {
            t[n++] = s;
        }

        fclose(f);

        printf("\n\n\n\n\n\n");
        printf("\t\t\t  ----------------------\n");
        printf("\t\t\t     SELECT A SUBJECT\n");
        printf("\t\t\t  ----------------------\n");
        printf("\t\t\t       1. PHYSICS\n");
        printf("\t\t\t       2. CHEMISTRY\n");
        printf("\t\t\t       3. MATHS\n");
        printf("\t\t\t       4. BIOLOGY OR COMPUTER\n");
        printf("\t\t\t       5. ENGLISH\n\n");
        printf("\t\t\t     ENTER YOUR OPTION: ");
        scanf("%d", &option);
        printf("\n");

        if (option > 5) {
            printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG OPTION!\n");
            printf("\n\n\n\n\n\n\n\n");
        } else {
            x = option - 1;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                if (t[j].marks[x] < t[j + 1].marks[x]) {
                    temp = t[j];
                    t[j] = t[j + 1];
                    t[j + 1] = temp;
                }
            }
        }

        printf("\n\n\n\n\n\n");
        printf("\t\t\t" "-------------------------------\n");
        printf("\t\t\t" "   SL. NO:" "\t" "MARKS" "\t" "NAME" "\n");
        printf("\t\t\t" "-------------------------------\n\n");

        for (int i = 0; i < 5; ++i) {
            printf("\t\t\t   ");
            printf("%d. " "\t\t", i + 1);
            printf("%.2f" "\t" "%s", t[i].marks[x], t[i].name);
            printf("\n");
        }

        printf("\n\n\n");
    }
}

void sortper() {
    STUDENT s, t[100], temp;
    FILE *f = fopen("Record.txt", "r");
    int n = 0;

    if (f == NULL) {
        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!\n");
        printf("\n\n\n\n\n\n\n\n");
    } else {
        while (fread(&s, sizeof(s), 1, f) == 1) {
            t[n++] = s;
        }

        fclose(f);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                if (t[j].per < t[j + 1].per) {
                    temp = t[j];
                    t[j] = t[j + 1];
                    t[j + 1] = temp;
                }
            }
        }

        printf("\t\t\t  -----------------------------------\n");
        printf("\t\t\t     LIST OF CLASS RECORDS(SORTED)\n");
        printf("\t\t\t  -----------------------------------\n\n");

        for (int i = 0; i < n; i++) {
            display_all(&t[i]);
            printf("\n\n\n\t\t---------------------------------------------\n\n\n");
        }
        getch();
}

void statistics() {
    int option;

    printf("\n\n\n\n\n\n\n");
    printf("\t\t              ----------------\n");
    printf("\t\t                 STATISTICS\n");
    printf("\t\t              ----------------\n");
    printf("\t\t   1. VIEW ASCENDING ORDER OF PERCENTAGE\n");
    printf("\t\t   2. VIEW TOP FIVE MARKS IN EACH SUBJECT\n\n");
    printf("\t\t           ENTER YOUR OPTION: ");
    scanf("%d", &option);
    system("cls");

    switch (option) {
        case 1:
            sortper();
            break;
        case 2:
            sortmark();
            break;
        default:
            printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG OPTION!\n");
            printf("\n\n\n\n\n\n\n\n");
    }
}

void MAINSEQUENCE() {
    Introduction();
    MainMenu();
}

int main()
{
     system("Student Grading System");
     MAINSEQUENCE();
     getch();
     return 0;
}
