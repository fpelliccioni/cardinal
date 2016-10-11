// Tao.Cardinal
//
// Copyright Fernando Pelliccioni 2016
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)


#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <tao/cardinal.hpp>

using namespace std;
using namespace tao;

TEST_CASE("masculinos", "masculinos") {
    REQUIRE((cardinal(0)       == "cero"));
    REQUIRE((cardinal(1)       == "uno"));
    REQUIRE((cardinal(2)       == "dos"));
    REQUIRE((cardinal(3)       == "tres"));
    REQUIRE((cardinal(4)       == "cuatro"));
    REQUIRE((cardinal(5)       == "cinco"));
    REQUIRE((cardinal(6)       == "seis"));
    REQUIRE((cardinal(7)       == "siete"));
    REQUIRE((cardinal(8)       == "ocho"));
    REQUIRE((cardinal(9)       == "nueve"));
    REQUIRE((cardinal(10)      == "diez"));
    REQUIRE((cardinal(11)      == "once"));
    REQUIRE((cardinal(12)      == "doce"));
    REQUIRE((cardinal(13)      == "trece"));
    REQUIRE((cardinal(14)      == "catorce"));
    REQUIRE((cardinal(15)      == "quince"));
    REQUIRE((cardinal(16)      == "dieciséis"));
    REQUIRE((cardinal(17)      == "diecisiete"));
    REQUIRE((cardinal(18)      == "dieciocho"));
    REQUIRE((cardinal(19)      == "diecinueve"));
    REQUIRE((cardinal(20)      == "veinte"));
    REQUIRE((cardinal(21)      == "veintiuno"));
    REQUIRE((cardinal(22)      == "veintidós"));
    REQUIRE((cardinal(23)      == "veintitrés"));
    REQUIRE((cardinal(24)      == "veinticuatro"));
    REQUIRE((cardinal(25)      == "veinticinco"));
    REQUIRE((cardinal(26)      == "veintiséis"));
    REQUIRE((cardinal(27)      == "veintisiete"));
    REQUIRE((cardinal(28)      == "veintiocho"));
    REQUIRE((cardinal(29)      == "veintinueve"));

    REQUIRE((cardinal(30)      == "treinta"));
    REQUIRE((cardinal(31)      == "treinta y uno"));
    REQUIRE((cardinal(32)      == "treinta y dos"));
    REQUIRE((cardinal(39)      == "treinta y nueve"));

    REQUIRE((cardinal(40)      == "cuarenta"));
    REQUIRE((cardinal(50)      == "cincuenta"));
    REQUIRE((cardinal(60)      == "sesenta"));
    REQUIRE((cardinal(70)      == "setenta"));
    REQUIRE((cardinal(80)      == "ochenta"));
    REQUIRE((cardinal(90)      == "noventa"));
    REQUIRE((cardinal(99)      == "noventa y nueve"));

    REQUIRE((cardinal(100)      == "cien"));
    REQUIRE((cardinal(101)      == "ciento uno"));
    REQUIRE((cardinal(102)      == "ciento dos"));
    REQUIRE((cardinal(109)      == "ciento nueve"));
    REQUIRE((cardinal(110)      == "ciento diez"));
    REQUIRE((cardinal(111)      == "ciento once"));
    REQUIRE((cardinal(120)      == "ciento veinte"));
    REQUIRE((cardinal(121)      == "ciento veintiuno"));
    REQUIRE((cardinal(129)      == "ciento veintinueve"));
    REQUIRE((cardinal(130)      == "ciento treinta"));
    REQUIRE((cardinal(131)      == "ciento treinta y uno"));
    REQUIRE((cardinal(199)      == "ciento noventa y nueve"));

    REQUIRE((cardinal(200)      == "doscientos"));
    REQUIRE((cardinal(201)      == "doscientos uno"));
    REQUIRE((cardinal(221)      == "doscientos veintiuno"));
    REQUIRE((cardinal(299)      == "doscientos noventa y nueve"));

    REQUIRE((cardinal(999)      == "novecientos noventa y nueve"));

    REQUIRE((cardinal(1000)     == "mil"));
    REQUIRE((cardinal(1001)     == "mil uno"));
    REQUIRE((cardinal(1011)     == "mil once"));
    REQUIRE((cardinal(1101)     == "mil ciento uno"));
    REQUIRE((cardinal(1111)     == "mil ciento once"));
    REQUIRE((cardinal(1999)     == "mil novecientos noventa y nueve"));

    REQUIRE((cardinal(2000)     == "dos mil"));
    REQUIRE((cardinal(2001)     == "dos mil uno"));
    REQUIRE((cardinal(2011)     == "dos mil once"));
    REQUIRE((cardinal(2101)     == "dos mil ciento uno"));
    REQUIRE((cardinal(2111)     == "dos mil ciento once"));
    REQUIRE((cardinal(2999)     == "dos mil novecientos noventa y nueve"));

    REQUIRE((cardinal(10000)     == "diez mil"));
    REQUIRE((cardinal(10001)     == "diez mil uno"));
    REQUIRE((cardinal(10011)     == "diez mil once"));
    REQUIRE((cardinal(10101)     == "diez mil ciento uno"));
    REQUIRE((cardinal(10111)     == "diez mil ciento once"));
    REQUIRE((cardinal(10999)     == "diez mil novecientos noventa y nueve"));

    REQUIRE((cardinal(21000)     == "veintiún mil"));
    REQUIRE((cardinal(21001)     == "veintiún mil uno"));
    REQUIRE((cardinal(21011)     == "veintiún mil once"));
    REQUIRE((cardinal(21101)     == "veintiún mil ciento uno"));
    REQUIRE((cardinal(21111)     == "veintiún mil ciento once"));
    REQUIRE((cardinal(21999)     == "veintiún mil novecientos noventa y nueve"));

    REQUIRE((cardinal(100000)     == "cien mil"));
    REQUIRE((cardinal(100001)     == "cien mil uno"));
    REQUIRE((cardinal(100011)     == "cien mil once"));
    REQUIRE((cardinal(100101)     == "cien mil ciento uno"));
    REQUIRE((cardinal(100111)     == "cien mil ciento once"));
    REQUIRE((cardinal(100999)     == "cien mil novecientos noventa y nueve"));

    REQUIRE((cardinal(101000)     == "ciento un mil"));
    REQUIRE((cardinal(101001)     == "ciento un mil uno"));
    REQUIRE((cardinal(101011)     == "ciento un mil once"));
    REQUIRE((cardinal(101101)     == "ciento un mil ciento uno"));
    REQUIRE((cardinal(101111)     == "ciento un mil ciento once"));
    REQUIRE((cardinal(101999)     == "ciento un mil novecientos noventa y nueve"));

    REQUIRE((cardinal(1100000)    == "un millón cien mil"));

    // miles
    REQUIRE((cardinal(4326) == "cuatro mil trescientos veintiséis"));
    REQUIRE((cardinal(7532) == "siete mil quinientos treinta y dos"));
    REQUIRE((cardinal(1014) == "mil catorce"));
    REQUIRE((cardinal(21000) == "veintiún mil"));
    REQUIRE((cardinal(71000) == "setenta y un mil"));
    REQUIRE((cardinal(916543) == "novecientos dieciséis mil quinientos cuarenta y tres"));

    // millones
    REQUIRE((cardinal(power(uint32_t(10), 6)) == "un millón"));
    REQUIRE((cardinal(power(uint64_t(10), 12)) == "un billón"));
    REQUIRE((cardinal(power(uint64_t(10), 18)) == "un trillón"));
    REQUIRE((cardinal(power(__uint128_t(10), 24)) == "un cuatrillón"));


    // numeros_grandes
    REQUIRE((cardinal(1000000) == "un millón"));
    REQUIRE((cardinal(1000021) == "un millón veintiuno"));
    REQUIRE((cardinal(41000021) == "cuarenta y un millones veintiuno"));
    REQUIRE((cardinal(41000021) == "cuarenta y un millones veintiuno"));
    REQUIRE((cardinal(416010015) == "cuatrocientos dieciséis millones diez mil quince"));


    REQUIRE((cardinal(125189117289024ull) == "ciento veinticinco billones ciento ochenta y nueve mil ciento diecisiete millones doscientos ochenta y nueve mil veinticuatro"));
    REQUIRE((cardinal(123123456123456ull) == "ciento veintitrés billones ciento veintitrés mil cuatrocientos cincuenta y seis millones ciento veintitrés mil cuatrocientos cincuenta y seis"));

    {
    __uint128_t tmp = 125189117289024ull;
    REQUIRE((cardinal(tmp) == "ciento veinticinco billones ciento ochenta y nueve mil ciento diecisiete millones doscientos ochenta y nueve mil veinticuatro"));
    }

    {
    __uint128_t tmp = 123123456123456ull;
    REQUIRE((cardinal(tmp) == "ciento veintitrés billones ciento veintitrés mil cuatrocientos cincuenta y seis millones ciento veintitrés mil cuatrocientos cincuenta y seis"));
    }

    {
    __uint128_t tmp = 12312312312312312312ull;
    tmp *= 10000000000ull;
    tmp += 3456123456ull;
    REQUIRE((cardinal(tmp) == "ciento veintitrés mil ciento veintitrés cuatrillones ciento veintitrés mil ciento veintitrés trillones ciento veintitrés mil ciento veintitrés billones ciento veintitrés mil cuatrocientos cincuenta y seis millones ciento veintitrés mil cuatrocientos cincuenta y seis"));
    }

 //    {
    // auto tmp = power(__uint128_t(10), 30);
    // cout << cardinal(tmp) << endl;
 //    // REQUIRE((cardinal(tmp) == "ciento veintitrés mil ciento veintitrés cuatrillones ciento veintitrés mil ciento veintitrés trillones ciento veintitrés mil ciento veintitrés billones ciento veintitrés mil cuatrocientos cincuenta y seis millones ciento veintitrés mil cuatrocientos cincuenta y seis"));
 //    }

}

TEST_CASE("apocopado", "apocopado") {
    //
    REQUIRE((cardinal(1, tipo::apocopado)      == "un"));
    REQUIRE((cardinal(21, tipo::apocopado)     == "veintiún"));
    REQUIRE((cardinal(31, tipo::apocopado)     == "treinta y un"));
    REQUIRE((cardinal(121, tipo::apocopado)    == "ciento veintiún"));
    REQUIRE((cardinal(131, tipo::apocopado)    == "ciento treinta y un"));
    REQUIRE((cardinal(100, tipo::apocopado)    == "cien"));
    REQUIRE((cardinal(101, tipo::apocopado)    == "ciento un"));
    REQUIRE((cardinal(200, tipo::apocopado)    == "doscientos"));
    REQUIRE((cardinal(201, tipo::apocopado)    == "doscientos un"));
    REQUIRE((cardinal(1001, tipo::apocopado)   == "mil un"));
    REQUIRE((cardinal(21000, tipo::apocopado)  == "veintiún mil"));
}


TEST_CASE("femenino", "femenino") {
    REQUIRE((cardinal(1, tipo::femenino)      == "una"));
    REQUIRE((cardinal(21, tipo::femenino)     == "veintiuna"));
    REQUIRE((cardinal(31, tipo::femenino)     == "treinta y una"));
    REQUIRE((cardinal(100, tipo::femenino)    == "cien"));
    REQUIRE((cardinal(121, tipo::femenino)    == "ciento veintiuna"));
    REQUIRE((cardinal(131, tipo::femenino)    == "ciento treinta y una"));
    REQUIRE((cardinal(101, tipo::femenino)    == "ciento una"));
    REQUIRE((cardinal(200, tipo::femenino)    == "doscientas"));
    REQUIRE((cardinal(201, tipo::femenino)    == "doscientas una"));
    REQUIRE((cardinal(1001, tipo::femenino)   == "mil una"));
    REQUIRE((cardinal(21000, tipo::femenino)  == "veintiuna mil"));
}



// TEST_CASE("shift_right_bidirectional", "shift_right on BidirectionalIterator's") {

//     list<int> c = { 1, 2, 3 };

//     // For n < 0 or n > std::distance(first, last) it is a violation of the precondition of the function. 
//     // No need to check these cases 

//     SECTION( "for 0" ) {
//         check(begin(c), end(c), 0, false, 1);
//     }
//     SECTION( "for 1" ) {
//         check(begin(c), end(c), 1, false, 1);
//     }
//     SECTION( "for 2" ) {
//         check(begin(c), end(c), 2, false, 1);
//     }
//     SECTION( "for 3" ) {
//         check(begin(c), end(c), 3, true, 0);
//     }

//     // auto r = shift_right(begin(c), end(c), 3);
//     // REQUIRE(*r == 1);
//     // CHECK(*r == 1);
// }

// #include <tao/algorithm/concepts_undef.hpp>