#include <stdio.h>

/* ФУНКЦИИ КОНВЕРТИРОВАНИЯ РАЗЛИЧНЫХ ЕДИНИЦ ТЕМПЕРАТУРЫ  */

/* Градусы: Цельсий, Фаренгейт, Кельвин, Реомюра, Ранкина, Ньютона, Рёмера, Делисле */

/*------------------------Единица измерения Кельвин и её перевод в выше перечисленные единицы измерения и соответственно из перечисленных единиц измерения  в Кельвин -----------------------------------------------------------------------------------------------------------------------------------------------------------*/

/*------------------------------ИЗ КЕЛЬВИНА----------------------------------*/
// <Кельвин> ---> <Фаренгейт> //
double Kelvins_TO_Fahrenheits(double TEMPERATURE) {
	TEMPERATURE = TEMPERATURE * 9 / 5  - 459.67; //Для перевода температуры из шкалы Кельвина в шкалу Фаренгейта  нужно воспользоваться формулой   [°F]=[°K]*9/5-459.67
	return TEMPERATURE;
}

// <Кельвин> ---> <Цельсий> //
double Kelvins_TO_Celsius(double TEMPERATURE) {
	TEMPERATURE = TEMPERATURE - 273.15; //Для перевода температуры из шкалы Кельвина в шкалу Цельсий  нужно воспользоваться формулой   [°C]=[°K]-273.15
	return TEMPERATURE;
}

// <Кельвин> ---> <Реомюра> //
double Kelvins_TO_Reaumurs(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE  - 273.15) * 4 / 5; //Для перевода температуры из шкалы Кельвина в шкалу Реомюра нужно воспользоваться формулой   [°Re]=([°K]-273.15)*4/5
	return TEMPERATURE;
}

// <Кельвин> ---> <Ранкина> //
double Kelvins_TO_Rankines(double TEMPERATURE) {
	TEMPERATURE = TEMPERATURE * 9 / 5; //Для перевода температуры из шкалы Кельвина в шкалу Ранкина  нужно воспользоваться формулой   [°R]=[°K]*9/5
	return TEMPERATURE;
}

// <Кельвин> ---> <Ньютона> //
double Kelvins_TO_Newtons(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE - 273.15) * 33 / 100; //Для перевода температуры из шкалы Кельвина в шкалу Ньютона нужно воспользоваться формулой  	[°N]=([°K]-273.15)*33/100  !!!! Уточнить !!!!
	return TEMPERATURE;
}

// <Кельвин> ---> <Рёмера> //
double Kelvins_TO_Romers(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE - 273.15) * 21 / 40 + 7.5; //Для перевода температуры из шкалы Кельвина в шкалу Рёмера нужно воспользоваться формулой  	[°Ro]=([°K]-273.15)*21/40+7.5  !!!! Уточнить !!!!
	return TEMPERATURE;
}

// <Кельвин> ---> <Делисле> //
double Kelvins_TO_Delisles(double TEMPERATURE) {
	TEMPERATURE = ( 373.15 - TEMPERATURE) * 3 / 2; //Для перевода температуры из шкалы Кельвина в шкалу Делисле нужно воспользоваться формулой  [°De]=(373.15-[°K])*3/2
	return TEMPERATURE;
}

/*------------------------------В КЕЛЬВИНЫ----------------------------------*/

// <Фаренгейт> ---> <Кельвин> //
double Fahrenheits_TO_Kelvins(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE + 459.67) * 5 / 9;  // Для перевода температуры из шкалы Фаренгейта в шкалу Кельвина нужно воспользоваться формулой [°K]=([°F]+459.67)*5/9
	return TEMPERATURE;
}

// <Цельсий> ---> <Кельвин> //
double Celsius_TO_Kelvins(double TEMPERATURE) {
	TEMPERATURE = TEMPERATURE + 273.15; // Перевод кельвинов в градусы цельсия. Расчет происходит по формуле: T=t+T0 , где T- температура в кельвинах, t- температура в градусах цельсия, T0=273.15 кельвина. P.S. По размеру градус цельсия равен кельвину.
	return TEMPERATURE;
}

// <Реомюра> ---> <Кельвин> //
double Reaumurs_TO_Kelvins(double TEMPERATURE) {
	TEMPERATURE = TEMPERATURE  * 5 / 4 + 273.15; //Для перевода температуры из шкалы Реомюра в шкалу Кельвина  нужно воспользоваться формулой   [°K]=[°Re]*5/4+273.15
	return TEMPERATURE;
}

// <Ранкина> ---> <Кельвин> //
double Rankines_TO_Kelvins(double TEMPERATURE) {
	TEMPERATURE = TEMPERATURE * 5 / 9; //Для перевода температуры из шкалы Ранкина в шкалу Кельвина  нужно воспользоваться формулой  	[°K]=[°R]*5/9
        return TEMPERATURE;
}

// <Ньютона> ---> <Кельвина> //
double Newtons_TO_Kelvins(double TEMPERATURE) {
	TEMPERATURE = TEMPERATURE * 100 / 33 + 273.15; //Для перевода температуры из шкалы Ньютона в шкалу Кельвина  нужно воспользоваться формулой  [°K]=[°N]*100/33+273.15
        return TEMPERATURE;
}

// <Рёмера> ---> <Кельвина> //
double Romers_TO_Kelvins(double TEMPERATURE) {
	TEMPERATURE = (TEMPERATURE - 7.5) * 40 / 21 + 273.15; //Для перевода температуры из шкалы Рёмера в шкалу Кельвина   нужно воспользоваться формулой [°K]=([°Ro]-7.5)*40/21+273.15 Нужно уточнить !!!!
        return TEMPERATURE;
}

// <Делисле> ---> <Кельвин> //
double Delisles_TO_Kelvins(double TEMPERATURE) {
	TEMPERATURE = 373.15 - TEMPERATURE * 2 / 3; //Для перевода температуры из шкалы Делисле в шкалу Кельвина   нужно воспользоваться формулой  [°K]=373.15-[°De]*2/3
        return TEMPERATURE;
}
