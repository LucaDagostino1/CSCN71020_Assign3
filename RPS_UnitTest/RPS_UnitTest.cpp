#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\LucaD\OneDrive - Conestoga College\CSCN71020_Assign3\RockPaperScissors\function.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RPSUnitTest
{
    TEST_CLASS(RockPaperScissorsTests)
    {
    public:

        TEST_METHOD(RockBeatsScissors)
        {
            char result[10];

            getWinner("Rock", "Scissors", result);

            Assert::AreEqual("Player1", result);
        }
    };
}
