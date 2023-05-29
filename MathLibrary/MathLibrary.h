#pragma once

template<typename T>
T Sum(T firstNumber, T secondNumber)
{
	return { firstNumber + secondNumber };
}

template<typename T>
T Divide(T firstNumber, T secondNumber)
{
	return { firstNumber / secondNumber };
}

template<typename T>
T Subtract(T firstNumber, T secondNumber)
{
	return { firstNumber - secondNumber };
}

template<typename T>
T Multiply(T firstNumber, T secondNumber)
{
	return { firstNumber * secondNumber };
}
