class Logic
{
    void findSmallestDigit( int num)
      {
        int min= 9;
        int digit = 0;

    while(num !=0)
        {
            digit = num % 10;

            if(digit < min)
            {
                min = digit;
            }
            else
            {

            }
            num /=10;
        }

        System.out.println("Smallest number is : " + min);

    }
}
class program_5
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.findSmallestDigit(45972);
        
    }

}