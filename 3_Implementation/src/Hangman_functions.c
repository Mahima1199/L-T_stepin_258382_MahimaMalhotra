
void start_game()
{
    //Initializes Game
    get_word();
    word_len = strlen(word);
    memset(guessed_letters, 0, sizeof guessed_letters);
    attempts = 10;
}

void get_input()
{
    //Gets guess from user and checks
    //To see if that letter is in the word

    int i;
    int letter_hit = 0; //Used to tell if the guess letter is in the word

    printf("\nYour guess: \n");
    scanf(" %c", user_guess);

    for(i=0; i < word_len; i++)
    {
        if(user_guess[0] == word[i])
        {
            guessed_letters[i] = user_guess[0];
            letter_hit ++;
        }
    }

    if(letter_hit > 0)
    {
        return;
    }
    else
    {
        attempts --;
    }
}


void print_blanks()
{
    /////////////////////////////////////////////////
    /// Prints out a number of blanks equal to the
    /// Length of the word
    /// Then fills the blanks with the guessed letters
    /////////////////////////////////////////////////

    int i, j;

    draw_platform();
    for(i=0; i<word_len; i++)
    {
        printf("%c", guessed_letters[i]);
        printf(" ");
    }
    printf("\n");

    for(j=0; j<word_len - 1; j++)
    {
        printf("%s", blank);
        printf(" ");
    }
    printf("\n");
}

void draw_platform()
{
    /////////////////////////////////////////////////
    /// Draws a new segment onto
    /// The platform every time
    /// The user gets a wrong guess
    /////////////////////////////////////////////////
   
    char *platform[]={

                     "      ===\n",

                     "        |\n"
                     "        |\n"
                     "        |\n"
                     "       ===\n",

                     "   =====|\n"
                     "        |\n"
                     "        |\n"
                     "        |\n"
                     "       ===\n",

                     "  |=====|\n"
                     "        |\n"
                     "        |\n"
                     "        |\n"
                     "       ===\n",

                     "  |=====|\n"
                     "  O     |\n"
                     "        |\n"
                     "        |\n"
                     "       ===\n",

                     "  |=====|\n"
                     "  O     |\n"
                     "  |     |\n"
                     "        |\n"
                     "       ===\n",

                     "  |=====|\n"
                     "  O     |\n"
                     "  |-    |\n"
                     "        |\n"
                     "       ===\n",

                     "  |=====|\n"
                     "  O     |\n"
                     " -|-    |\n"
                     "        |\n"
                     "       ===\n",

                     "  |=====|\n"
                     "  O     |\n"
                     " -|-    |\n"
                     "  |     |\n"
                     "       ===\n",

                     "   |=====|\n"
                     "   O     |\n"
                     "  -|-    |\n"
                     "  //     |\n"
                     "       ===\n"

    };

    switch(attempts)
    {
    case 9:
        printf("\n\n%s\n", platform[0]);
        break;
    case 8:
        printf("\n\n%s\n", platform[1]);
        break;
    case 7:
        printf("\n\n%s\n", platform[2]);
        break;
    case 6:
        printf("\n\n%s\n", platform[3]);
        break;
    case 5:
        printf("\n\n%s\n", platform[4]);
        break;
    case 4:
        printf("\n\n%s\n", platform[5]);
        break;
    case 3:
        printf("\n\n%s\n", platform[6]);
        break;
    case 2:
        printf("\n\n%s\n", platform[7]);
        break;
    case 1:
        printf("\n\n%s\n", platform[8]);
        break;
    case 0:
        printf("\n\n%s\n", platform[9]);
        break;
    }
}

void get_word()
{

  srand(time(NULL));
   char word[][16] = {
       "green",
       "yellow",
       "purple",
       "windows",
       "linux",
       "apple"
   };
   random_number = rand() % 6;
}