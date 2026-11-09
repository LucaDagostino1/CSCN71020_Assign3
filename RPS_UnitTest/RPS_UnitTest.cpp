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
        TEST_METHOD(RockLosesToPaper)
        {
            char result[10];

            getWinner("Rock", "Paper", result);

            Assert::AreEqual("Player2", result);
        }
        TEST_METHOD(PaperBeatsRock)
        {
            char result[10];

            getWinner("Paper", "Rock", result);

            Assert::AreEqual("Player1", result);
        }

        TEST_METHOD(PaperLosesToScissors)
        {
            char result[10];

            getWinner("Paper", "Scissors", result);

            Assert::AreEqual("Player2", result);
        }

        TEST_METHOD(ScissorsBeatsPaper)
        {
            char result[10];

            getWinner("Scissors", "Paper", result);

            Assert::AreEqual("Player1", result);
        }
        TEST_METHOD(ScissorsLosesToRock)
        {
            char result[10];

            getWinner("Scissors", "Rock", result);

            Assert::AreEqual("Player2", result);
        }
        TEST_METHOD(RockDraw)
        {
            char result[10];

            getWinner("Rock", "Rock", result);

            Assert::AreEqual("Draw", result);
        }

        TEST_METHOD(PaperDraw)
        {
            char result[10];

            getWinner("Paper", "Paper", result);

            Assert::AreEqual("Draw", result);
        }

        TEST_METHOD(ScissorsDraw)
        {
            char result[10];

            getWinner("Scissors", "Scissors", result);

            Assert::AreEqual("Draw", result);
        }
        TEST_METHOD(Player1Invalid)
        {
            char result[10];

            getWinner("Lizard", "Rock", result);

            Assert::AreEqual("Invalid", result);
        }

        TEST_METHOD(Player2Invalid)
        {
            char result[10];

            getWinner("Rock", "Lizard", result);

            Assert::AreEqual("Invalid", result);
        }

        TEST_METHOD(BothPlayersInvalid)
        {
            char result[10];

            getWinner("Lizard", "Spock", result);

            Assert::AreEqual("Invalid", result);
        }
    };
}
