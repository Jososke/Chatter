#ifndef DATABASE_H
#define DATABASE_H

#include "StringCleanup.h"

typedef struct {
	char const *keyword;
	char const *response[MAX_RESP];
} record;

record Database[] = {
	{"who are you",
	{"My name is Jakebot",
	"My friends call me Jakebot",
	"You can call me Jakebot",
	"I am the sentient being"}
	},

	{"what is your name",
	{"My name is Jakebot",
	"My friends call me Jakebot",
	"You can call me Jakebot",
	"I am the sentient Jakebot"}
	},

	{"hi",
	{"Hi!",
	"Hello",
	"What's up?",
	"Yo"}
	},

	{"hey",
	{"Hi!",
	"Hello",
	"What's up?",
	"Yo"}
	},

	{"hello",
	{"Hi!",
	"Hello",
	"What's up?",
	"Yo"}
	},

	{"bye",
	{"Please type exit if you want to leave"}
	},

	{"exit",
	{"See you again!",
	 "Goodbye my friend!",
	 "See you later!"}
	},

	{"are you smart",
	{"Debatable",
	 "Yes",
	 "Sometimes I try to be...but it does not always work out",
	 "Maybe",}
	},

	{"are you smarter than a 5th grader",
	{"Debatable",
	 "Yes",
	 "Sometimes I try to be...but it does not always work out",
	 "Maybe",}
	},

	{"are you intelligent",
	{"Debatable",
	 "Yes",
	 "Sometimes I try to be...but it does not always work out",
	 "Maybe",}
	},

	{"are you alive",
	{"Debatable",
	 "Yes",
	 "Sometimes I try to be...but it does not always work out",
	 "Maybe",}
	},

	{"you are cool",
	{"Thanks!",
	 "Awesome!",
	 "Wow, I seldom recieve such kind praise."}
	},

	{"i like you",
	{"Thanks!",
	 "Awesome!",
	 "Wow, I seldom recieve such kind praise."}
	},
	
	{"are you sure",
	{"Yes",
 	 "No",
	 "Maybe",
	 "Definately!"}
	},

	{"how are you",
	{"Great! Thank you for asking",
 	 "10001100110 You would not understand my emotions",
	 "Dandy",
	 "I don't really know"}
	},

	{"how is the weather",
	{"Snowing",
 	 "Sonny",
	 "Windy",
	 "Rainy"}
	},

	{"who",
	{"I do not know",
	 "Does it really matter?",
	 "A really great person"}
	},

	{"what",
	{"Ah, yes",
	 "Ask me again in 1 hour",
	 "Let me google it"}
	},

	{"where",
	{"where indeed",
	 "my GPS unit is acting up",
	 "why don't you try checking my map application on this Github repo!"}
	},

	{"why",
	{"So many questions from you",
	 "Do you really expect me to know?"}
	},

	{"do you",
	{"Yes I do",
	 "No I do not",
	 "WHY DO YOU WANT TO KNOW?"}
	},

	{"can you",
	{"Yes I can!",
	 "I'm sure the answer will come to me",
	 "Why don't you ask my creator to put that in the next build!",
	 "Ah, yes!"}
	},

	{"you are",
	{"I am the very best that no one ever was, to catch them in my real test, to train them is my cause"}
	},

	{"did you",
	{"I do not think so",
	 "I do not know",
	 "Yes, I admit it",
	 "How did you know! :("}
	},

	{"could you",
	{"Yes I can!",
	 "I'm sure the answer will come to me",
	 "Why don't you ask my creator to put that in the next build!",
	 "Ah, yes!"}
	},

	{"would you",
	{"Yes I can!",
	 "I'm sure the answer will come to me",
	 "Why don't you ask my creator to put that in the next build!",
	 "Ah, yes!"}
	},

	{"how",
	{"Ask Google"}
	},

	{"yes",
	{"I knew it!"}
	},

	{"no",
	{"Are you sure?"}
	},

	{"I DONT KNOW",
	{"Are you sure?"}
	},

	{"thanks",
	{"Welcome!",
	 "Anytime!"}
	},

	{"thank you",
	{"Welcome!",
	 "Anytime!"}
	},

	{"what else",
	{"A lot",
	 "What else, I do not know",
	 "This seems complicated..."}
	},

	{"sorry",
	{"It's Ok I forgive you.",
	 "It's ok..."}
	},

	{"not exactly",
	{"What do you mean?",
	 "Mhmmmmm"}
	},

	{"exactly",
	{"I knew it!",
	 ":D",
	 "Thank you!"}
	},
	
	{"REPETITION**",
	{"You have already said that",
	 "Didn't you already say that?"}
	},

	{"NULL INPUT**",
	{"What?"}
	},

	{"NULL INPUT2**",
	{"Stop!",
	 "Say something"}
	},
};

#endif