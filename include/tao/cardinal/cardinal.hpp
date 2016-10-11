//! \file tao/cardinal/cardinal.hpp
// Tao.Cardinal
//
// Copyright Fernando Pelliccioni 2016
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef TAO_CARDINAL_CARDINAL_HPP
#define TAO_CARDINAL_CARDINAL_HPP

#include <cmath>
#include <iterator>
#include <limits>
#include <string>
#include <utility>

// Concepts:
#define Integer typename

namespace tao {

enum class tipo {
	masculino = 0,
	apocopado = 1,
	femenino = 2
};

namespace config { 

constexpr int exponents[] = {24, 18, 12, 6, 3};

inline constexpr 
const char* exponents_str(int x, bool plural = true) {	
	if (plural) {
		switch (x) {
			case 3: return "mil";
			case 6: return "millones";
			case 12: return "billones";
			case 18: return "trillones";
			/*case 24:*/
			default: return "cuatrillones";
		}	
	} else {
		switch (x) {
			case 3: return "mil";
			case 6: return "un millón";
			case 12: return "un billón";
			case 18: return "un trillón";
			/*case 24:*/
			default: return "un cuatrillón";
		}	
	}
}
} /*namespace config*/ 

namespace detail { 

//TODO: Optimizar usando el Método de Multiplicación Egipcia.
template <Integer I, Integer I2>
constexpr 
I power(I x, I2 n) {
	I res = 1;
	while (n > 0) {
		res *= x;
		--n;
	}
	return res;
}

inline constexpr  
tipo apocopar(tipo e) {
	if (e == tipo::masculino) return tipo::apocopado;
	return e;
}

inline constexpr  
tipo desapocopar(tipo e) {
	if (e == tipo::apocopado) return tipo::masculino;
	return e;
}

inline constexpr 
const char* centena_masculino(int n) {
	switch (n) {
		case 1: return "ciento";
		case 2: return "doscientos";
		case 3: return "trescientos";
		case 4: return "cuatrocientos";
		case 5: return "quinientos";
		case 6: return "seiscientos";
		case 7: return "setecientos";
		case 8: return "ochocientos";
		/*case 9:*/
		default: return "novecientos";
	}	
}

inline constexpr
const char* centena_apocopado(int n) {
	switch (n) {
		case 1: return "cien";
		case 2: return "doscientos";
		case 3: return "trescientos";
		case 4: return "cuatrocientos";
		case 5: return "quinientos";
		case 6: return "seiscientos";
		case 7: return "setecientos";
		case 8: return "ochocientos";
		/*case 9:*/
		default: return "novecientos";
	}
}

inline constexpr
const char* centena_femenino(int n) {
	switch (n) {
		case 1: return "ciento";
		case 2: return "doscientas";
		case 3: return "trescientas";
		case 4: return "cuatrocientas";
		case 5: return "quinientas";
		case 6: return "seiscientas";
		case 7: return "setecientas";
		case 8: return "ochocientas";
		/*case 9:*/
		default: return "novecientas";
	}
}

inline constexpr
const char* centena(int n, tipo e) {
	switch (e) {
		case tipo::apocopado: return centena_apocopado(n);
		case tipo::femenino:  return centena_femenino(n);
		default:                return centena_masculino(n);
	}
}

inline constexpr
const char* decena(int n) {
	switch (n) {
		case 1: return "diez";
		case 2: return "veinte";
		case 3: return "treinta";
		case 4: return "cuarenta";
		case 5: return "cincuenta";
		case 6: return "sesenta";
		case 7: return "setenta";
		case 8: return "ochenta";
		/*case 9:*/
		default: return "noventa";
	}	
}

inline constexpr 
const char* especiales_masculino(int n) {
	switch (n) {
		case 0:  return "cero";
		case 1:  return "uno";
		case 2:  return "dos";
		case 3:  return "tres";
		case 4:  return "cuatro";
		case 5:  return "cinco";
		case 6:  return "seis";
		case 7:  return "siete";
		case 8:  return "ocho";
		case 9:  return "nueve";
		case 10: return "diez";
		case 11: return "once";
		case 12: return "doce";
		case 13: return "trece";
		case 14: return "catorce";
		case 15: return "quince";
		case 16: return "dieciséis";
		case 17: return "diecisiete";
		case 18: return "dieciocho";
		case 19: return "diecinueve";
		case 20: return "veinte";
		case 21: return "veintiuno";
		case 22: return "veintidós";
		case 23: return "veintitrés";
		case 24: return "veinticuatro";
		case 25: return "veinticinco";
		case 26: return "veintiséis";
		case 27: return "veintisiete";
		case 28: return "veintiocho";
		/*case 29:*/
		default: return "veintinueve";
	}
}

inline constexpr
const char* especiales_femenino(int n) {
	switch (n) {
		case 0:  return "cero";
		case 1:  return "una";
		case 2:  return "dos";
		case 3:  return "tres";
		case 4:  return "cuatro";
		case 5:  return "cinco";
		case 6:  return "seis";
		case 7:  return "siete";
		case 8:  return "ocho";
		case 9:  return "nueve";
		case 10: return "diez";
		case 11: return "once";
		case 12: return "doce";
		case 13: return "trece";
		case 14: return "catorce";
		case 15: return "quince";
		case 16: return "dieciséis";
		case 17: return "diecisiete";
		case 18: return "dieciocho";
		case 19: return "diecinueve";
		case 20: return "veinte";
		case 21: return "veintiuna";
		case 22: return "veintidós";
		case 23: return "veintitrés";
		case 24: return "veinticuatro";
		case 25: return "veinticinco";
		case 26: return "veintiséis";
		case 27: return "veintisiete";
		case 28: return "veintiocho";
		/*case 29:*/
		default: return "veintinueve";
	}
}

inline constexpr
const char* especiales_apocopado(int n) {
	switch (n) {
		case 0:  return "cero";
		case 1:  return "un";
		case 2:  return "dos";
		case 3:  return "tres";
		case 4:  return "cuatro";
		case 5:  return "cinco";
		case 6:  return "seis";
		case 7:  return "siete";
		case 8:  return "ocho";
		case 9:  return "nueve";
		case 10: return "diez";
		case 11: return "once";
		case 12: return "doce";
		case 13: return "trece";
		case 14: return "catorce";
		case 15: return "quince";
		case 16: return "dieciséis";
		case 17: return "diecisiete";
		case 18: return "dieciocho";
		case 19: return "diecinueve";
		case 20: return "veinte";
		case 21: return "veintiún";
		case 22: return "veintidós";
		case 23: return "veintitrés";
		case 24: return "veinticuatro";
		case 25: return "veinticinco";
		case 26: return "veintiséis";
		case 27: return "veintisiete";
		case 28: return "veintiocho";
		/*case 29:*/
		default: return "veintinueve";
	}
}

inline constexpr
const char* especiales(int n, tipo e) {
	switch (e) {
		case tipo::apocopado: return especiales_apocopado(n);
		case tipo::femenino:  return especiales_femenino(n);
		default:                return especiales_masculino(n);
	}
}

template <Integer I>
constexpr
size_t first_exponent_idx() {
	size_t i(0);
	while (i < std::size(config::exponents) && config::exponents[i] > std::numeric_limits<I>::digits10) {
		++i;
	}
	return i;
}

template <Integer I>
std::pair<int, I> divisor(I n) {
	auto i = first_exponent_idx<I>();
	while (i != std::size(config::exponents)) {
		int exp = config::exponents[i];
		I divisor = power(I(10), exp);
		if (divisor <= n) return {exp, divisor};
		++i;
	}
	return {0, 0};
}

std::string tres_digitos(int n, tipo e = tipo::masculino) {
	//precondition: n >= 0 && n < 1000

    if (n == 100) {
    	return centena_apocopado(1);
    }

	std::string res;

    if (n > 100) {
    	auto tmp = n / 100;
	    n %= 100;
	    res += centena(tmp, n == 0 ? apocopar(e) : desapocopar(e));
	    if (n == 0) return res;
	    res += ' ';
    }

    if (n >= 30) {
        res += decena(n / 10);
        n %= 10;
	    if (n == 0) return res;
	    res += " y ";
    }

	res += especiales(n, e);
    return res;
}

} /*namespace detail*/

template <Integer I>
std::string cardinal(I n, tipo e = tipo::masculino) {
	//precondition: n >= 0 && n < power(10, config::exponents[0] + 6)

	std::string res;
	while (true) {
		auto p = detail::divisor(n);
		auto exp = p.first;
		auto div = p.second;

		if (div == 0) {
			res += detail::tres_digitos(n, e);
			break;
		}

		if (div < n) {
			I quotient = n / div;
	        n %= div;

			if (quotient >= 1000) {
				res += cardinal(quotient) + ' ';
			} else if (quotient < 1000 && quotient > 1) {
				res += detail::tres_digitos(quotient, detail::apocopar(e)) + ' ';
			}
			res += config::exponents_str(exp, quotient > 1);
	        if (n == 0) break;
	        res += ' ';
		} else if (div == n) {
			res += config::exponents_str(exp, false);
			break;
		} 		
	}
	return res;
}

} /*namespace tao*/

#endif /*TAO_CARDINAL_CARDINAL_HPP*/