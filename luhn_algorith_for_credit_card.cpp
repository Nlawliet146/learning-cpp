// LUHN algorithm
/*
1) DOUBLE EVERY SECOND DIGIT FROM RIGHT TO LEFT(BASICALLY AT EVEN POSTION).
   1.1) IF DOUBLED NUMBER IS 2 DIGITS, SPLIT THEM
2) ADD ALL SINGLE DIGITS FROM STEP 1
3) ADD ALL ODD DIGIT NUMBER FROM RIGHT TO LEFT
4) SUM RESULT FROM STEP 2 AND 3
5) IF STEP 4 IS DIVISIBLE BY 10, THEN THE NUMBER IS VALID FOR CREDIT CARD
*/

/*
FOR EXAMPLE WE HAVE: 6011 0009 9013 9424

1) SECOND DIGITS ARE: 6 1 0 0 9 1 9 2 DOUBLE THEM WE GET 12 2 0 0 18 2 18 4
  1.1) 1 2 2 0 0 1 8 2 1 8 4, ADD THEM WE GET 29

2) THE ODD NUMBERS ARE: 4 4 3 0 9 0 1 0, ADD THEM WE GET: 21

3) ADD BOTH OF THEM 21 + 29 = 50, WHICH IS DIVISBLE BY 10, THEREFORE NUMBER 6011 0009 9013 9424, IS VALID CREDIT CARD NUMBER
*/

#include <iostream>

int getDigit(const int number);
int sumOddDigit(const std::string cardNumber);
int sumEvenDigit(const std::string cardNumber);

int main()
{
  std::string cardNumber;
  int result = 0;

  std::cout << "ENTER THE CARD NUMBER: ";
  std::cin >> cardNumber;

  result = sumEvenDigit(cardNumber) + sumOddDigit(cardNumber);

  if(result % 10 == 0)
  {
    std::cout << "CARD NUMBER IS VALID!!";
  }
  else{
    std::cout << "NOT VALID!!";
  }

  return 0;
}

int getDigit(const int number)
{
  return number % 10 + (number / 10 % 10);
  // WHAT we are actaull doing here is:
  // lets say we havae 18, so 18 % 10 = 8
  // 18/10 = 1.8 which is 1, since we are dividing two integers and not double
  // therefore 8 + 1 = 9, exactly what we want according to luhn algorithm
}
int sumOddDigit(const std::string cardNumber)
{
  int sum = 0;

  for(int i = cardNumber.size() - 1; i >= 0; i -= 2) // string in a wat is like array of character
  {
    sum += cardNumber[i] - '0'; 
  }

  return sum;
}
int sumEvenDigit(const std::string cardNumber)
{
  int sum = 0;

  for(int i = cardNumber.size() - 2; i >= 0; i -= 2) // string in a wat is like array of character
  {
    sum += getDigit((cardNumber[i] - '0')* 2); // now the reason for subtracting char '0' is because origanlly the character is well an char while we need int for getdigit function (or any int digit)
  }                                            // and this char follow ascii table, in which char '0' refers decimal 48, hence we subtracted '0' (we can also directly subtract 48)

  return sum;
}