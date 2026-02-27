#include "linked_list.h"



int main(void) {
    LinkedList* list = list_create();

    for (int i = 0; i < 10; i++) {
        list_insert_last(list, i);
    }
    list_print(list);
    list_destroy(list);

    return 0;
}



/*
one thing, i dont know why
it doesnt even matter how hard you try
keep that in mind, i designed this rhyme to explain in due time
all i know, time is a valuable thing
watch it fly by as the pendulum swing
what it count down to the end of the day
the clock tiks life away

its so unreal, didn't look out bellow
watch the time go right out the window
trying to hold on, you didnt even know 
i wasted it all just to watch you go

i kept everythin inside, and even tho i tried it all fell apart
what it meant to me will eventually be a memory of a time

i tried so hard and got so far
but in the end, it doesn't even matter
i had to fall, to lose it all
but in the end, it doesn't even matter
*/