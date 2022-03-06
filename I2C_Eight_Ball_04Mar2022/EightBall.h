#include <avr/pgmspace.h>

const char string_0[] PROGMEM = "It is certain.";
const char string_1[] PROGMEM = "It is decidedly so.";
const char string_2[] PROGMEM = "Without a doubt.";
const char string_3[] PROGMEM = "Yes definitely.";
const char string_4[] PROGMEM = "You may rely on it.";
const char string_5[] PROGMEM = "As I see it, yes.";
const char string_6[] PROGMEM = "Most likely.";
const char string_7[] PROGMEM = "Outlook good.";
const char string_8[] PROGMEM = "Yes.";
const char string_9[] PROGMEM = "Signs point to yes.";
const char string_10[] PROGMEM = "Reply hazy, try again.";
const char string_11[] PROGMEM = "Ask again later.";
const char string_12[] PROGMEM = "Better not tell you now.";
const char string_13[] PROGMEM = "Cannot predict now.";
const char string_14[] PROGMEM = "Concentrate and ask again.";
const char string_15[] PROGMEM = "Don't count on it.";
const char string_16[] PROGMEM = "My reply is no.";
const char string_17[] PROGMEM = "My sources say no.";
const char string_18[] PROGMEM = "Outlook not so good.";
const char string_19[] PROGMEM = "Very doubtful.";
const char string_20[] PROGMEM = "Not your lucky day.";

const char *const string_table[] PROGMEM = {
  string_0, string_1, string_2, string_3, string_4, string_5,
  string_6, string_7, string_8, string_9, string_10, string_11,
  string_12, string_13, string_14, string_15, string_16, string_17,
  string_18, string_19, string_20
  };

char outBuffer[32];
