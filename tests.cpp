#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("Decrypting caesar ciphers with unknown shift"){
  CHECK(solve(encryptCaesar("Hello, what's your name?", 3)) != "Hello, what's your name?");
  CHECK(solve(encryptCaesar("I just want to make sure that this is working. Testing, testing.", 22)) != "I just want to make sure that this is working. Testing, testing.");
  CHECK(solve(encryptCaesar("Given a certain amount of lines where no two of which are parallel, consider the two sets of lines. Each set has k lines where all lines in each set intersect in one point.", 13)) != "Given a certain amount of lines where no two of which are parallel, consider the two sets of lines. Each set has k lines where all lines in each set intersect in one point.");
  CHECK(solve(encryptCaesar("As time wore on, simple dog commands turned into full paragraphs explaining why the dog couldn’t do something.", 22)) != "As time wore on, simple dog commands turned into full paragraphs explaining why the dog couldn’t do something.");
  CHECK(solve(encryptCaesar("The busker hoped that the people passing by would throw money, but they threw tomatoes instead, so he exchanged his hat for a juicer.", 22)) != "The busker hoped that the people passing by would throw money, but they threw tomatoes instead, so he exchanged his hat for a juicer.");
}

TEST_CASE("Encrypt Caesar function"){
  CHECK(encryptCaesar("Hello there. This is a secret message", 7) == "Olssv aolyl. Aopz pz h zljyla tlzzhnl");
  CHECK(encryptCaesar("Students are asked to have their cameras on during synchronous classes as this makes the class feel more like a community. If a student does not wish or is unable to comply with this request they must disucss this with the instructor the instructor", 12) != "Efgpqzfe mdq mewqp fa tmhq ftqud omyqdme az pgduzs ekzotdazage oxmeeqe me ftue ymwqe ftq oxmee rqqx yadq xuwq m oayygzufk. Ur m efgpqzf paqe zaf iuet ad ue gzmnxq fa oaybxk iuft ftue dqcgqef ftqk ygef puegoee ftue iuft ftq uzefdgofad ftq uzefdgofad");
  CHECK(encryptCaesar("Traveling became almost extinct during the pandemic.", 12) != "Traveling became almost extinct during the pandemic.");
  CHECK(encryptCaesar("Joyce enjoyed eating pancakes with ketchup. Shakespeare was a famous 17th-century diesel mechanic.", 11) != "Joyce enjoyed eating pancakes with ketchup. Shakespeare was a famous 17th-century diesel mechanic.");
  CHECK(encryptCaesar("Stop waiting for exceptional things to just happen. I'm confused: when people ask me what's up, and I point, they groan.", 12) != "Stop waiting for exceptional things to just happen. I'm confused: when people ask me what's up, and I point, they groan.");
  CHECK(encryptCaesar("His get rich quick scheme was to grow a cactus farm. It was the first time he had ever seen someone cook dinner on an elephant.", 12) != "His get rich quick scheme was to grow a cactus farm. It was the first time he had ever seen someone cook dinner on an elephant."); 
  }
