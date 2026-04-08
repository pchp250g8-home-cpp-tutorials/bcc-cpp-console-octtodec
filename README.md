BinToDec. C++ Tutorials. Embarcadero Rad Studio IDE. Simple Input/Output. Algorithms. Strings. Windows Platform. Console Application.
A console application in the C++ programming language. 
The program does the following:
  1. Asks the user to enter a string.
  2. Checks whether the entered string is valid. It must be less than 32 characters long and contain only the numbers 0 and 1.
  3. If the string does not meet the above conditions, it displays the message "incorrect binary number format" and exits.
  4. If the line meets the above conditions,
  A variable is introduced for the value of the decimal number and the multiplier to the power of 2 with initial values ​​of 0 and 1, respectively.
  5. The loop with the parameter is executed.
    5.1. The initial value of the parameter is set to 0, and the final value is set to the number of characters in the string (its length).
    5.2. A series of cycles is performed.
      5.2.1. The code of the next character in the string is determined. It is converted to either the number 1 or the number 0.
             The formula used is: character code - character code "0" (or the number 48 is subtracted from the character code).
             Moreover, the calculation starts from the end of the line.
      5.2.2. The resulting value is multiplied by a power of two.
      5.2.3. The value obtained in the previous step is added to the decimal number variable.
      5.2.4. The variable of the factor of power 2 is multiplied by 2, since the number is binary.
    5.3. The value of the loop parameter is compared with the final value. If it is less, the loop continues. Otherwise, it terminates.
    5.4. The loop parameter variable is incremented by the loop increment. In this example, it is 1.
  6. The entered binary number and its representation in the decimal system are displayed on the screen. 
Developed in the Embarcadero Rad Studio integrated environment.

BinToDec. Занятия по C++. ИС Embarcadero Rad Studio. Простой Ввод/Вывод. Алгоритмы. Строки. Платформа Windows. Консольное приложение.
Консольное приложение написанное на языке программирования C++. 
Программа делает следующее:
  1. Просит пользователя ввести строку.
  2. Проверяет правильная ли строка была введена. Она должна быть короче 32 символов и содержать только цифры 0 и 1.
  3. Если строка не соответсвует выше перечисленным условиям выводит сообщение "неправильный формат двоичного числа" и завершает работу.
  4. Если строка соответствует выше перечисленным условиям,
     вводится переменная для значения десятичного числа и множителя степени 2 с начальными значениями 0 и 1 соответсвенно.
  5. Выполняется цикл с параметром.
     5.1. Начальное значение параметра устанавливается равным 0, а конечное - числу символов в строке (её длине).
     5.2. Выполняется серия цикла.
          5.2.1. Выисляется код очередного символа строки. Он переводится либо в число 1 либо в число 0.
                 Используется формула: код символа - код символа "0" (или из кода символа вычитается число 48).
                 Причём вычисление начинается с конца строки.
          5.2.2. Полученное значение умножается на множитель стерени двойки.
          5.2.3. К переменной десятичного числа прибавляется значение полученное на предыдущем шаге.
          5.2.4. Переменная множителя степени 2 умножается на 2, так как число двоичное. 
     5.3. Значение параметра цикла сравнивается с конечным. Если оно меньше цикл выполняется. В противном случае - завершается.
     5.4. Переменная параметра цикла увеличивается на шаг цикла. В данном примере он равен 1.
  6. На экран выводится введённое двоичное число и его представление в десятичной системе.
Разработано в нитегрированной среде Embarcadero Rad Studio.
