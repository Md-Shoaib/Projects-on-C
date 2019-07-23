/*Author: Md Shoaib
  Purpose: A story using condition
  Date: 03/07/2019 */
#include <stdio.h>

int main()
{
  //Variable Declaration
  int name, job, condition, condition2;
  //Story Lines
  printf("Once upon a time someone entered in a jungle and ask to a Guruji, Guruji please tell me I will ever be a succesful person or not. Please tell me it's very important for me.\n");

  printf("GURUJI: what is your name?(Press 1 for RAMAN, 2 for MD, or 3 for any Anonymous name)");
  scanf("%d", &name);

  if (name == 1)
  {
    printf("GURUJI: Ok RAMAN what are you doing?(Press 1 engi, 2  for doct, 3 for any other)");
  }
  else if (name == 2)
  {
    printf("GURUJI: Ok MD what are you doing?(Press 1 engi, 2  for doct, 3 for any other)");
  }
  else
  {
    printf("GURUJI: Ok Anonymous what are you doing?(Press 1 engi, 2  for doct, 3 for any other)");
  }

  scanf("%d", job);

  printf("GURUJI: Are you good at your work?(Press 1 for Yes or 2 for No): ");
  scanf("%d", &condition);

  if (condition == 1)
  {
    printf("GURUJI: Are you kind for poor peoples?(Press 1 for Yes or 2 for No): ");
  }
  else if (condition == 2)
  {
    printf("GURUJI: Ha Ha Ha!!! Then what you want, how will you get any good positions, My child please learn some good skill, or any good work.");
  }

  scanf("%d", &condition2);

  if (condition2 == 1)
  {
    printf("GURUJI: Then you will be a successful person without any single doubt, Aiushman Bhabh my child");
  }
  else if (condition2 == 2)
  {
    printf("GURUJI: Get out of my place immideately.");
  }

  return 0;
}
