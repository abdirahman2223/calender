#include<stdio.h>
#include<time.h> // for sleep {} fuctio
#include<unistd.h>
#include<stdlib.h>
int main(){
int hour , minute, second;
hour=  minute=second=0;
while (1)
{
    /* clear out screen */
    system("clear");
    //print time in HH:MM:SS format 
    printf("%02d: %02d:%02d " , hour , minute , second);
    
    fflush(stdout);
    // kordhi ilbiriqsiga 
    second ++;

    //update hour , minute , second 
    if (second==60)
    {
        minute+=1;
        second=0;

    }
    if (minute==60)
    {
        hour+=1;
        minute=0;
    }
    if (hour==24)
    {
        hour=0;
        minute=0;
        second=0;
    }
    sleep(1); // wait till 1 second

}
  return 0;
}


