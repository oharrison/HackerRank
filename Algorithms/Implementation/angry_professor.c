/**
 * Author: Onel Harrison
 * HackerRank: Algorithms > Implementation > Angry Professor
 */

#include <stdio.h>

int main(){
  int test_cases; 
  scanf("%d",&test_cases);

  for(int test_case = 0; test_case < test_cases; test_case++){
    int students_in_class; 
    int cancelation_threshold; 
    scanf("%d %d", &students_in_class, &cancelation_threshold);

    int student_arrival_time;
    int disciplined_count = 0;

    for(int i = 0; i < students_in_class; i++){
      scanf("%d", &student_arrival_time);
      if (student_arrival_time <= 0) {
        disciplined_count++;
      }
    }

    printf("%s", (disciplined_count < cancelation_threshold) ? "YES\n" : "NO\n");

  }
  return 0;
}
