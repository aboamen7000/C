#include <stdio.h>
// Quiz Game

void Game(){

        // Array : (Questions Bank)
        // Array : Questions Options (A,B,C,D)
        // Array : Correct Answers (A,A,C,D,A)
        // For (asking questions, scan [store answers], Compare Answers, show the result of your anwers rate)

        char questions[5][100] = {
        "What is the capital of France?",
        "Who invented the telephone?",
        "What is the highest mountain in Africa?",
        "What is the largest planet in our solar system?",
        "Who wrote the novel 'Pride and Prejudice'?"
    };

        char answers[5][4][50] = {
                {"A. Paris", "B. Madrid", "C. Rome", "D. Berlin"},
                {"A. Thomas Edison", "B. Alexander Graham Bell", "C. Samuel Morse", "D. Nikola Tesla"},
                {"A. Kilimanjaro", "B. Mount Everest", "C. Mount Kilimanjaro", "D. Mount Fuji"},
                {"A. Jupiter", "B. Saturn", "C. Neptune", "D. Uranus"},
                {"A. Jane Austen", "B. Emily Bronte", "C. Virginia Woolf", "D. Charlotte Bronte"}
        };

        char correct_answers[5] = {'A', 'B', 'C', 'A', 'A'};

        char user_answers[5];
        int score = 0;

        int size = sizeof(questions) / sizeof(questions[0]);

        for(int i = 0; i < size; i++)
        {
           printf("%s\n", questions[i]);
           printf("%s\n%s\n%s\n%s\n%s\n", answers[i][0], answers[i][1], answers[i][2], answers[i][3]);

           printf("Enter your answer (A/B/C/D): ");
           scanf(" %c", &user_answers[i]);

           if(user_answers[i] == correct_answers[i])
           {
                score += 1;
           }
        }

        printf("Score: ( %d / 5 )\n", score);

}
int main(){
        Game();
        return 0;
}