/*****************************
*       FIZZBUZZ-JAVA        *
*       By Sage Smith        *
* sagemistressmods@gmail.com *
******************************/
// kopimi

class Fizzbuzz
{
    public static void main(String[] args)
    {
        int x = 1;
        int[] numbers = new int[100];

        for (int i = 0; i < numbers.length; i++)
        {
            numbers[i] = x;
            x++;
        }

        for (int i = 0; i < numbers.length; i++)
        {
            if (numbers[i] % 3 == 0)
            {
                if (numbers[i] % 5 == 0)
                {
                    System.out.println("FizzBuzz");
                    continue;
                }
                System.out.println("Fizz");
                continue;
            }
            else if (numbers[i] % 5 == 0)
            {
                System.out.println("Buzz");
                continue;
            } 
            else
            {
                System.out.println(numbers[i]);
            }
        }
    }
}
