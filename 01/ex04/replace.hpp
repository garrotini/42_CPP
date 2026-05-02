#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

#ifndef CREATE_TEST
#define CREATE_TEST 0
#endif

#define NAMES "Abel Santos | violin 1\nBruno Silva | violin 2\nCarol Pinto | alto\nDiogo Costa | cello\n"

#define ITEMS "- item 1, item 1.1\n- item 2\n- item 3, item 3.1, item 3.2\n- item 4, item 4.1, item 4.1.1, item 4.1.2\n"

#define PRAELUDIUM "Johann Sebastian Bach – Praeludium in C major (BWV 846)\n\
Johann Sebastian Bach – Praeludium in E minor (BWV 855)\n\
Johann Sebastian Bach – Praeludium in G major (BWV 860)\n\
Johann Sebastian Bach – Praeludium in D minor (BWV 851)\n"

#define DREAM "I have a dream that one day this nation will rise up and live out the true meaning of its creed: 'We hold these truths to be self-evident, that all men are created equal.'\n\
I have a dream that one day on the red hills of Georgia, the sons of former slaves and the sons of former slave owners will be able to sit down together at the table of brotherhood.\n\
I have a dream that one day even the state of Mississippi, a state sweltering with the heat of injustice, sweltering with the heat of oppression, will be transformed into an oasis of freedom and justice.\n\
I have a dream that my four little children will one day live in a nation where they will not be judged by the color of their skin but by the content of their character.\n\
I have a dream today!\n\
I have a dream that one day, down in Alabama, with its vicious racists, with its governor having his lips dripping with the words of 'interposition' and 'nullification' -- one day right there in Alabama little black boys and black girls will be able to join hands with little white boys and white girls as sisters and brothers.\n\
I have a dream today!\n\
I have a dream that one day every valley shall be exalted, and every hill and mountain shall be made low, the rough places will be made plain, and the crooked places will be made straight; 'and the glory of the Lord shall be revealed and all flesh shall see it together.'\n"


void create_files();


#endif
