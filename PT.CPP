#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
clrscr();
cout<<"\n| | |||| |   | ||   ||   ||   |   |   |       |  |   |  | ";
cout<<"\n||  |    ||  | | |  | |  | | |   | |  |      | |  | |  | | ";
cout<<"\n|   |||  | | | |  | ||   |  |    ___  |      ___   |   ___  ";
cout<<"\n||  |    |  || | |  | |  |  |   |   | |     |   |  |  |   | ";
cout<<"\n| | |||| |   | ||   |  | |  |  |     ||||| |     | | |     | ";
cout<<"\n                                                               ";
cout<<"\n|       ||||  |   |  |   |       |  |   |  |  ";
cout<<"\n |     | || |  | |  | |  |      | |  | |  | | ";
cout<<"\n  |   |  ||  |  |   ___  |      ___   |   ___ ";
cout<<"\n   | |   || |   |  |   | |     |   |  |  |   | ";
cout<<"\n    |    |||    | |     ||||| |     | | |     |  ";
cout<<"\n                                                       ";
cout<<"\n         ___ __                               ";
cout<<"\n|| |||  | | |  ||  |";
cout<<"\n| |||/ __ | |  ||  |";
cout<<"\n|| || |  || |__||__|  ";
int ar,one,ad,md;
cout<<"\n                                                ";
cout<<"\nPress Any key To Enter The Modern Periodic Table:-";
getch();
clrscr();
cout<<"\n                 Welcome To Modern Periodic Table";
cout<<"\n              !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  ";
cout<<" \n                                                          ";
cout<<"\n ******************Introduction Of Modern Periodic Table*********************";
cout<<"\n                -------------------------------------      ";
cout<<"\n                                                                      ";
cout<<"\n1.Modern Periodic Table arranges the element in order to their Atomic Numbers ";
cout<<"\n2.In Modern Periodic Table their are Seven Horizontal Row (Period)And Eighteen";
cout<<"\n  Vertical Column.";
cout<<"\n3.Atomic Number are Consective ,Whereas In a groups Their increase in a pattern.";
cout<<"\n                        ";
cout<<"\n4.Element such as oxygen,Iron and Gold are most basic Chemical substance.";
cout<<"\n5.All Other element are formed to be combination of some other Element. ";
cout<<"\n6.Atomic Number in period groups have have similar valence shell electronic";
cout<<"\n  configuration.";
cout<<"\n7.Their are s-block,p-block,d-block and f-block element. ";
cout<<"\n8.Hydrogen with one electron in the 1s-orbital occupies a unique position  ";
cout<<"\n  in the periodic table.";
cout<<"\n9.Metals comprise more than seventy eight percent(%)of the known element.";
cout<<"\n10.Non-metals which are located at the top of the periodic table are less";
cout<<"\n   than twenty in number.";
cout<<"\n                                                 ";
 cout<<"\n                                               ";
cout<<"\nPress any key to known the Advantages Of this Program:-";
getch();
clrscr();
cout<<"\n          Advantages Of this Program   ";
cout<<"\n         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^                        ";
cout<<"\n                        ";

cout<<"\n1.first of all you can easly search the element.";
cout<<"\n                        ";

cout<<"\n2.you can see the periodic table.";
cout<<"\n                        ";

cout<<"\n3.you can easly search the element by their Atomic Number.";
cout<<"\n                        ";

cout<<"\n4.you can search the element by their symbols.";
cout<<"\n                        ";

cout<<"\n5.you can search the element by their names.";
cout<<"\n                                                                        ";
cout<<"\n                                                   ";
cout<<"\nPress any key to known about Admin of this program:-";
getch();
clrscr();
cout<<"\n            Admin of this program						  ";
cout<<"\n          ::::::::::::::::::::::::::                                         ";
cout<<"\n            ";
cout<<"\n          NAME:- RITESH KUMAR PANDEY ";
cout<<"\n                 ------------------- ";
cout<<"\n         CLASS:-XI-SCIENCE";
cout<<"\n                <<<<<>>>>>                                                       ";
cout<<"\n                                                                 ";
cout<<"\n                                                               ";
cout<<"\n                                     ";
cout<<"\n                                     ";
cout<<"\nPress any key to enter the Modern Periodic Table:-";
getch();
clrscr();
cout<<"\n******************welcome to the modern periodic table******************";
cout<<"\n                  <<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>         ";
cout<<"\n******************welcome to the modern periodic table******************";

cout<<"\n|H|                                                                 |He|";
cout<<"\n|Li||Be|                                        |B ||C ||N ||O ||F ||Ne|";
cout<<"\n|Na||Mg|                                        |Al||Si||P ||S ||Cl||Ar|";
cout<<"\n|K| |Ca||Sc||Ti||V|||Cr||Mn||Fe||Co||Ni||Cu||Zn||Ga||Ge||As||Se||Br||Kr|";
cout<<"\n|Rb||Sr||Y ||Zr||Nb||Mo||Tc||Ru||Rh||Pd||Ag||Cd||In||Sn||Sb||Te|| I||Xe|";
cout<<"\n|Cs||Ba||La||Hf||Ta||W ||Re||Os||Ir||Pt||Au||Hg||Tl||Pb||Bi||Po||At||Rn|";
cout<<"\n|Fr||Ra||lr||Rf||Db||Sg||Bh||Hs||Mt||Ds||Rg||uub||uUt||uuq||Uup||UUh|";
cout<<"\n                           F-inner transition element                  ";
cout<<"\n*lanthanoid|la||Ce||Pr||Nd||Pm||sm||Eu||Gd||Tb||Dy||Ho||Er||Tm||Yb||Lu|";
cout<<"\n**Actinoid |Ac||Th||Pa||U ||Np||pu||Am||Cm||Bk||Cf||Es||Fm||Md||No||Lr|";
cout<<"\n                                                                   ";
cout<<"\n                                                                   ";
cout<<"\n                                                              ";
int atm,a,s,p,choice;
char b,ri[100];
char op='y';
do
{
cout<<"\n1.select the Element by their Atomic Numbers.";
cout<<"\n             ";
cout<<"\n2.select the Element by their Symbols.";
cout<<"\n             ";
cout<<"\n3.search the Element by their Names.";
cout<<"\n             ";
cout<<"\n4.search the Elements by the Groups Number.             ";
cout<<"\n             ";
cout<<"\n             ";
cout<<"\nchoice the option given above for searching the elements:-";
cout<<"\n             ";
cin>>choice;
if(choice==1)
  {
clrscr();
char at='y';
do
{
cout<<"\n      Enter the Atomic Number of the Element:-";
cout<<"\n      ****************************************";
cin>>atm;
switch(atm)
       {
       case 1:cout<<"\nIts-Hydrogen ";
       cout<<"\nAtomic number-1";
       cout<<"\nAtomic weight-1";
       cout<<"\nSymbol-H";
       cout<<"\nDate discovered-1799";
       break;
	 case 2:cout<<"\nIts-Helium";
       cout<<"\nAtomic number-2";
       cout<<"\nAtomic weight-4";
       cout<<"\nSymbol-He";
       cout<<"\nDate discovered-1866";
       break;
       case 3:cout<<"\nIts-Lithium";
       cout<<"\nAtomic number-3";
       cout<<"\nAtomic weight-7";
       cout<<"\nSymbol-Li";
       cout<<"\nDate discovered-1817";
       break;
       case 4:cout<<"\nIts-Beryllium";
       cout<<"\nAtomic number-4";
       cout<<"\nAtomic weight-9";
       cout<<"\nSymbol-Be";
       cout<<"\nDate discovered-1798";
       break;
       case 5:cout<<"\nIts -Boron";
       cout<<"\nAtomic number-5";
       cout<<"\nAtomic weight-10";
       cout<<"\nSymbol-B";
       cout<<"\nDate discovered-1808";
       break;
       case 6:cout<<"\nIts-Carbon";
       cout<<"\nAtomic number-6";
       cout<<"\nAtomic weight-12";
       cout<<"\nSymbol-C";
       cout<<"\nDate discovered-Prehistoric";
       break;
       case 7:cout<<"\nIts-Nitrogen";
       cout<<"\nAtomic number-7";
       cout<<"\nAtomic weight-14";
       cout<<"\nSymbol-N";
       cout<<"\nDate discovered-1772";
       break;
       case 8:cout<<"\nIts-Oxygen";
       cout<<"\nAtomic number-8";
       cout<<"\nAtomic weight-16";
       cout<<"\nSymbol-O";
       cout<<"\nDate discovered-  1774";
       break;
       case 9:cout<<"\nIts-Fluorine";
       cout<<"\nAtomic number-9";
       cout<<"\nAtomic weight-19";
       cout<<"\nSymbol-F";
       cout<<"\nDate discovered-1772";
       break;
       case 10:cout<<"\nIts-Neon";
       cout<<"\nAtomic number-10";
       cout<<"\nAtomic weight-20";
       cout<<"\nSymbol-N";
       cout<<"\nDate discovered-1898";
       break;
       case 11:cout<<"\nIts-Sodium";
       cout<<"\nAtomic number-11";
       cout<<"\nAtomic weight-23";
       cout<<"\nSymbol-Na";
       cout<<"\nDate discovered-1807";
       break;
       case 12:cout<<"\nIts-Magnessium";
       cout<<"\nAtomic number-12";
       cout<<"\nAtomic weight-24";
       cout<<"\nSymbol-Mg";
       cout<<"\nDate discovered-1755";
       break;
       case 13:cout<<"\nIts-Aluminium";
       cout<<"\nAtomic number-13";
       cout<<"\nAtomic weight-27";
       cout<<"\nSymbol-Al";
       cout<<"\nDate discovered-1824";
       break;
       case 14:cout<<"\nIts-Silicon";
       cout<<"\nAtomic number-14";
       cout<<"\nAtomic weight-28";
       cout<<"\nSymbol-Si";
       cout<<"\nDate discovered-1832";
       break;
       case 15:cout<<"\nIts-Phosphorus";
       cout<<"\nAtomic number-15";
       cout<<"\nAtomic weight-31";
       cout<<"\nSymbol-P";
       cout<<"\nDate discovered-1674";
       break;
       case 16:cout<<"\nIts-sulphur";
       cout<<"\nAtomic number-16";
       cout<<"\nAtomic weight-32";
       cout<<"\nSymbol-S";
       cout<<"\nDate discovered-Prehistoric";
       break;
       case 17:cout<<"\nIts-Chlorine";
       cout<<"\nAtomic number-17";
       cout<<"\nAtomic weight-35";
       cout<<"\nSymbol-Cl";
       cout<<"\nDate discovered-1774";
       break;
       case 18:cout<<"\nIts-Argon";
       cout<<"\nAtomic number-18";
       cout<<"\nAtomic weight-39";
       cout<<"\nSymbol-Ar";
       cout<<"\nDate discovered-1894";
       break;
       case 19:cout<<"\nIts-Potassium";
       cout<<"\nAtomic number-19";
       cout<<"\nAtomic weight-39";
       cout<<"\nSymbol-K";
       cout<<"\nDate discovered-1807";
       break;
       case 20:cout<<"\nIts-Calcium";
       cout<<"\nAtomic number-20";
       cout<<"\nAtomic weight-40";
       cout<<"\nSymbol-Ca";
       cout<<"\nDate discovered-1808";
       break;
       case 21:cout<<"\nIts-scandium";
       cout<<"\nAtomic number-21";
       cout<<"\nAtomic weight-44";
       cout<<"\nSymbol-Sc";
       cout<<"\nDate discovered-1876";
       break;
       case 22:cout<<"\nIts-Titanium";
       cout<<"\nAtomic number-22";
       cout<<"\nAtomic weight-47";
       cout<<"\nSymbol-Ti";
       cout<<"\nDate discovered-1790";
       break;
       case 23:cout<<"\nIts-Vanadium";
       cout<<"\nAtomic number-23";
       cout<<"\nAtomic weight-50";
       cout<<"\nSymbol-V";
       cout<<"\nDate discovered-1801";
       break;
       case 24:cout<<"\nIts-Chromium";
       cout<<"\nAtomic number-24";
       cout<<"\nAtomic weight-52";
       cout<<"\nSymbol-cr";
       cout<<"\nDate discovered-1797";
       break;
       case 25:cout<<"\nIts-Manganese";
       cout<<"\nAtomic number-25";
       cout<<"\nAtomic weight-55";
       cout<<"\nSymbol-Mn";
       cout<<"\nDate discovered-1774";
       break;
       case 26:cout<<"\nIts-Iron";
       cout<<"\nAtomic number- 26";
       cout<<"\nAtomic weight-55";
       cout<<"\nSymbol-Fe";
       cout<<"\nDate discovered-Prehistoric";
       break;
       case 27:cout<<"\nIts-cobalt";
       cout<<"\nAtomic number-27";
       cout<<"\nAtomic weight-58";
       cout<<"\nSymbol-Co";
       cout<<"\nDate discovered-1730";
       break;
       case 28:cout<<"\nIts-Nickel";
       cout<<"\nAtomic number-28";
       cout<<"\nAtomic weight-59";
       cout<<"\nSymbol-Ni";
       cout<<"\nDate discovered-1751";
       break;
       case 29:cout<<"\nIts-copper";
       cout<<"\nAtomic number-29";
       cout<<"\nAtomic weight-63";
       cout<<"\nSymbol-Cu";
       cout<<"\nDate discovered-Prehistoric";
       break;
       case 30:cout<<"\nIts-Zinc";
       cout<<"\nAtomic number-30";
       cout<<"\nAtomic weight-65";
       cout<<"\nSymbol-Zn";
       cout<<"\nDate discovered-Prehistoric";
       break;
       case 31:cout<<"\nIts-Gallium";
       cout<<"\nAtomic number-31";
       cout<<"\nAtomic weight-69";
       cout<<"\nSymbol-Ga";
       cout<<"\nDate discovered-1875";
       break;
       case 32:cout<<"\nItsGermanium";
       cout<<"\nAtomic number-32";
       cout<<"\nAtomic weight-72";
       cout<<"\nSymbol-Ge";
       cout<<"\nDate discovered-1886";
       break;
       case 33:cout<<"\nIts-Arsenic";
       cout<<"\nAtomic number-33";
       cout<<"\nAtomic weight-75";
       cout<<"\nSymbol-As";
       cout<<"\nDate discovered-Prehistoric";
       break;
       case 34:cout<<"\nIts-Selenium";
       cout<<"\nAtomic number-34";
       cout<<"\nAtomic weight-78";
       cout<<"\nSymbol-Se";
       cout<<"\nDate discovered-1817";
       break;
       case 35:cout<<"\nIts-Bromine";
       cout<<"\nAtomic number-35";
       cout<<"\nAtomic weight-79";
       cout<<"\nSymbol-Br";
       cout<<"\nDate discovered-1826";
       break;
       case 36:cout<<"\nIts-krypton";
       cout<<"\nAtomic number-36";
       cout<<"\nAtomic weight-83";
       cout<<"\nSymbol-kr";
       cout<<"\nDate discovered-1898";
       break;
       case 37:cout<<"\nIts-Rubidium";
       cout<<"\nAtomic number-37";
       cout<<"\nAtomic weight-85";
       cout<<"\nSymbol-Rb";
       cout<<"\nDate discovered-1861";
       break;
       case 38:cout<<"\nIts-strotium";
       cout<<"\nAtomic number-38";
       cout<<"\nAtomic weight-87";
       cout<<"\nSymbol-Sr";
       cout<<"\nDate discovered-1808";
       break;
       case 39:cout<<"\nIts-Yttrium";
       cout<<"\nAtomic number-39";
       cout<<"\nAtomic weight-89";
       cout<<"\nSymbol-Y";
       cout<<"\nDate discovered-1794";
       break;
       case 40:cout<<"\nIts-Zirconium";
       cout<<"\nAtomic number-40";
       cout<<"\nAtomic weight-91";
       cout<<"\nSymbol-Zr";
       cout<<"\nDate discovered-1789";
       break;
       case 41:cout<<"\nIts-Niobium";
       cout<<"\nAtomic number-41";
       cout<<"\nAtomic weight-92";
       cout<<"\nSymbol-Nb";
       cout<<"\nDate discovered-1891";
       break;
       case 42:cout<<"\nIts-Molybdenum";
       cout<<"\nAtomic number-42";
       cout<<"\nAtomic weight-95";
       cout<<"\nSymbol-Mo";
       cout<<"\nDate discovered-1781";
       break;
       case 43:cout<<"\nIts-Technetium";
       cout<<"\nAtomic number-43";
       cout<<"\nAtomic weight-98";
       cout<<"\nSymbol-Tc";
       cout<<"\nDate discovered-1937";
       break;
       case 44:cout<<"\nIts-Ruthenium";
       cout<<"\nAtomic number-44";
       cout<<"\nAtomic weight-101";
       cout<<"\nSymbol-Ru";
       cout<<"\nDate discovered-1827";
       break;
       case 45:cout<<"\nIts-Rhodium";
       cout<<"\nAtomic number-45";
       cout<<"\nAtomic weight-103";
       cout<<"\nSymbol-Rh";
       cout<<"\nDate discovered-1804";
       break;
       case 46:cout<<"\nIts-palladium";
       cout<<"\nAtomic number- 46";
       cout<<"\nAtomic weight-106";
       cout<<"\nSymbol-Pd";
       cout<<"\nDate discovered-1804";
       break;
       case 47:cout<<"\nIts-Silver";
       cout<<"\nAtomic number-47";
       cout<<"\nAtomic weight-108";
       cout<<"\nSymbol-Ag";
       cout<<"\nDate discovered-Prehistoric";
       break;
       case 48:cout<<"\nIts-Cadmium";
       cout<<"\nAtomic number-48";
       cout<<"\nAtomic weight-112";
       cout<<"\nSymbol-Cd";
       cout<<"\nDate discovered-1817";
       break;
       case 49:cout<<"\nIts-indium";
       cout<<"\nAtomic number-49";
       cout<<"\nAtomic weight-115";
       cout<<"\nSymbol-In";
       cout<<"\nDate discovered-1863";
       break;
       case 50:cout<<"\nIts-Tin";
       cout<<"\nAtomic number-50";
       cout<<"\nAtomic weight-119";
       cout<<"\nSymbol-Sn";
       cout<<"\nDate discovered-Prehistoric";
       break;
       case 51:cout<<"\nIts Antinomy ";
       cout<<"\nAtomic number-51";
       cout<<"\nAtomic weight-121";
       cout<<"\nSymbol-Sb";
       cout<<"\nDate discovered-Prehistoric";
       break;
       case 52:cout<<"\nIts Tellurium";
       cout<<"\nAtomic number-52";
       cout<<"\nAtomic weight-127";
       cout<<"\nSymbol-Te";
       cout<<"\nDate discovered-1782";
       break;
       case 53:cout<<"\nIts Iodine";
       cout<<"\nAtomic number- 53";
       cout<<"\nAtomic weight-128";
       cout<<"\nSymbol-I";
       cout<<"\nDate discovered-1811";
       break;
       case 54:cout<<"\nIts Xenon";
       cout<<"\nAtomic number-54";
       cout<<"\nAtomic weight-131";
       cout<<"\nSymbol-Xe";
       cout<<"\nDate discovered-1898";
       break;
       case 55:cout<<"\nIts Cesium";
       cout<<"\nAtomic number-55";
       cout<<"\nAtomic weight-133";
       cout<<"\nSymbol-Cs";
       cout<<"\nDate discovered-1860";
       break;
       case 56:cout<<"\nIts Barium";
       cout<<"\nAtomic number- 56";
       cout<<"\nAtomic weight-137";
       cout<<"\nSymbol-Ba";
       cout<<"\nDate discovered-1808";
       break;
       case 57:cout<<"\nIts Lanthanum ";
       cout<<"\nAtomic number-57";
       cout<<"\nAtomic weight-140";
       cout<<"\nSymbol-La";
       cout<<"\nDate discovered-1839";
       break;
       case 58:cout<<"\nIts Cerium ";
       cout<<"\nAtomic number-58";
       cout<<"\nAtomic weight-140";
       cout<<"\nSymbol-Ce";
       cout<<"\nDate discovered-1804";
       break;
       case 59:cout<<"\nIts Praseodymium ";
       cout<<"\nAtomic number-59";
       cout<<"\nAtomic weight-141";
       cout<<"\nSymbol-Pr";
       cout<<"\nDate discovered-1885";
       break;
       case 60:cout<<"\nIts Neodymium";
       cout<<"\nAtomic number-60";
       cout<<"\nAtomic weight-144";
       cout<<"\nSymbol-Nd";
       cout<<"\nDate discovered-1885";
       break;
       case 61:cout<<"\nIts Promethium ";
       cout<<"\nAtomic number-61";
       cout<<"\nAtomic weight-145";
       cout<<"\nSymbol-Pm";
       cout<<"\nDate discovered-1945";
       break;
       case 62:cout<<"\nIts Samarium";
       cout<<"\nAtomic number-62";
       cout<<"\nAtomic weight-150";
       cout<<"\nSymbol-Sm";
       cout<<"\nDate discovered-1879";
       break;
       case 63:cout<<"\nIts Europium";
       cout<<"\nAtomic number-63";
       cout<<"\nAtomic weight-152";
       cout<<"\nSymbol-Eu";
       cout<<"\nDate discovered-1901";
       break;
       case 64:cout<<"\nIts Gadolinium";
       cout<<"\nAtomic number-64";
       cout<<"\nAtomic weight-157";
       cout<<"\nSymbol-Gd";
       cout<<"\nDate discovered-1886";
       break;
       case 65:cout<<"\nIts Terbium";
       cout<<"\nAtomic number-65";
       cout<<"\nAtomic weight-159";
       cout<<"\nSymbol-Tb";
       cout<<"\nDate discovered-1843";
       break;
       case 66:cout<<"\nIts Dysprosium";
       cout<<"\nAtomic number-66";
       cout<<"\nAtomic weight-162";
       cout<<"\nSymbol-Dy";
       cout<<"\nDate discovered-1886";
       break;
       case 67:cout<<"\nIts Holmium";
       cout<<"\nAtomic number-67";
       cout<<"\nAtomic weight-165";
       cout<<"\nSymbol-Ho";
       cout<<"\nDate discovered-1879";
       break;
       case 68:cout<<"\nIts Erbium";
       cout<<"\nAtomic number-68";
       cout<<"\nAtomic weight-167";
       cout<<"\nSymbol-Er";
       cout<<"\nDate discovered-1843";
       break;
       case 69:cout<<"\nIts Thulium";
       cout<<"\nAtomic number-69";
       cout<<"\nAtomic weight-169";
       cout<<"\nSymbol-Tm";
       cout<<"\nDate discovered-1879";
       break;
       case 70:cout<<"\nIts Ytterbium";
       cout<<"\nAtomic number-70";
       cout<<"\nAtomic weight-173";
       cout<<"\nSymbol-Yb";
       cout<<"\nDate discovered- 1878";
       break;
       case 71:cout<<"\nIts Lutetium ";
       cout<<"\nAtomic number-71";
       cout<<"\nAtomic weight-175";
       cout<<"\nSymbol-Lu";
       cout<<"\nDate discovered- 1907" ;
       break;
       case 72:cout<<"\nIts Hafnium  ";
       cout<<"\nAtomic number- 72";
       cout<<"\nAtomic weight-178";
       cout<<"\nSymbol- Hf";
       cout<<"\nDate discovered-1913";
       break;
       case 73:cout<<"\nIts Tantalum";
       cout<<"\nAtomic number-73";
       cout<<"\nAtomic weight-180";
       cout<<"\nSymbol-Ta";
       cout<<"\nDate discovered-1802";
       break;
       case 74:cout<<"\nIts Tungsten";
       cout<<"\nAtomic number-74";
       cout<<"\nAtomic weight-183";
       cout<<"\nSymbol-W";
       cout<<"\nDate discovered-1783";
       break;
       case 75:cout<<"\nIts Rhenium";
       cout<<"\nAtomic number-75";
       cout<<"\nAtomic weight- 186";
       cout<<"\nSymbol-Re";
       cout<<"\nDate discovered-1925";
       break;
       case 76:cout<<"\nIts Osmium";
       cout<<"\nAtomic number-76";
       cout<<"\nAtomic weight- 190";
       cout<<"\nSymbol-Os";
       cout<<"\nDate discovered-1804";
       break;
       case 77:cout<<"\nIts Iridium";
       cout<<"\nAtomic number-77";
       cout<<"\nAtomic weight-192";
       cout<<"\nSymbol-Ir";
       cout<<"\nDate discovered-1804";
       break;
       case 78:cout<<"\nIts Platinum";
       cout<<"\nAtomic number- 78";
       cout<<"\nAtomic weight-195";
       cout<<"\nSymbol-Pt";
       cout<<"\nDate discovered-1557";
       break;
       case 79:cout<<"\nIts Gold";
       cout<<"\nAtomic number-79";
       cout<<"\nAtomic weight-197";
       cout<<"\nSymbol-Au";
       cout<<"\nDate discovered-Prehistoric";
       break;
       case 80:cout<<"\nIts Mercury ";
       cout<<"\nAtomic number-80";
       cout<<"\nAtomic weight-200";
       cout<<"\nSymbol-Hg";
       cout<<"\nDate discovered-prehistoric";
       break;
       case 81:cout<<"\nIts Thallium";
       cout<<"\nAtomic number-81";
       cout<<"\nAtomic weight-204";
       cout<<"\nSymbol-Tl";
       cout<<"\nDate discovered-1861";
       break;
       case 82:cout<<"\nIts Lead";
       cout<<"\nAtomic number-82";
       cout<<"\nAtomic weight-207";
       cout<<"\nSymbol- pb";
       cout<<"\nDate discovered-prehistoric";
       break;
       case 83:cout<<"\nItsBismuth ";
       cout<<"\nAtomic number-83";
       cout<<"\nAtomic weight-208";
       cout<<"\nSymbol- Bi";
       cout<<"\nDate discovered-prehistoric";
       break;
       case 84:cout<<"\nIts Polonium";
       cout<<"\nAtomic number-84";
       cout<<"\nAtomic weight-209";
       cout<<"\nSymbol-Po";
       cout<<"\nDate discovered-1898";
       break;
       case 85:cout<<"\nItsAstatine ";
       cout<<"\nAtomic number-85";
       cout<<"\nAtomic weight-210";
       cout<<"\nSymbol-At";
       cout<<"\nDate discovered-1940";
       break;
       case 86:cout<<"\nIts Radon";
       cout<<"\nAtomic number-86";
       cout<<"\nAtomic weight-222";
       cout<<"\nSymbol-Rn";
       cout<<"\nDate discovered-1900";
       break;
       case 87:cout<<"\nIts Francium ";
       cout<<"\nAtomic number- 87";
       cout<<"\nAtomic weight-223";
       cout<<"\nSymbol-Fr";
       cout<<"\nDate discovered-1939";
       break;
       case 88:cout<<"\nIts Radium";
       cout<<"\nAtomic number-88";
       cout<<"\nAtomic weight-226";
       cout<<"\nSymbol-Ra";
       cout<<"\nDate discovered-1898";
       break;
       case 89:cout<<"\nIts Actinium";
       cout<<"\nAtomic number-89";
       cout<<"\nAtomic weight-227";
       cout<<"\nSymbol-Ac";
       cout<<"\nDate discovered- 1899";
       break;
       case 90:cout<<"\nIts Thorium";
       cout<<"\nAtomic number-90";
       cout<<"\nAtomic weight-232";
       cout<<"\nSymbol-Th";
       cout<<"\nDate discovered-1828";
       break;
       case 91:cout<<"\nIts Protactinium";
       cout<<"\nAtomic number-91";
       cout<<"\nAtomic weight-231";
       cout<<"\nSymbol-Pa";
       cout<<"\nDate discovered-1913";
       break;
       case 92:cout<<"\nIts Uranium";
       cout<<"\nAtomic number-92";
       cout<<"\nAtomic weight-238";
       cout<<"\nSymbol-U";
       cout<<"\nDate discovered-1789";
       break;
       case 93:cout<<"\nIts Neptunium";
       cout<<"\nAtomic number-93";
       cout<<"\nAtomic weight-237";
       cout<<"\nSymbol-Np";
       cout<<"\nDate discovered-1940";
       break;
       case 94:cout<<"\nIts Plutonium";
       cout<<"\nAtomic number- 94";
       cout<<"\nAtomic weight-244";
       cout<<"\nSymbol-Pu";
       cout<<"\nDate discovered-1940";
       break;
       case 95:cout<<"\nIts Americium";
       cout<<"\nAtomic number-95";
       cout<<"\nAtomic weight- 243";
       cout<<"\nSymbol-Am";
       cout<<"\nDate discovered-1944";
       break;
       case 96:cout<<"\nIts Curium";
       cout<<"\nAtomic number-96";
       cout<<"\nAtomic weight-247";
       cout<<"\nSymbol-Cm";
       cout<<"\nDate discovered-1944";
       break;
       case 97:cout<<"\nIts Berkelium";
       cout<<"\nAtomic number-97";
       cout<<"\nAtomic weight-247";
       cout<<"\nSymbol-Bk";
       cout<<"\nDate discovered-1949";
       break;
       case 98:cout<<"\nIts Californium";
       cout<<"\nAtomic number-98";
       cout<<"\nAtomic weight-251";
       cout<<"\nSymbol-Cf";
       cout<<"\nDate discovered- 1950";
       break;
       case 99:cout<<"\nIts Einsteinium";
       cout<<"\nAtomic number- 99";
       cout<<"\nAtomic weight-252";
       cout<<"\nSymbol-Es";
       cout<<"\nDate discovered-1952";
       break;
       case 100:cout<<"\nIts Fermium";
       cout<<"\nAtomic number-100";
       cout<<"\nAtomic weight-257";
       cout<<"\nSymbol-Fm";
       cout<<"\nDate discovered-1955";
       break;
       case 101:cout<<"\nIts Mendelevium";
       cout<<"\nAtomic number-101";
       cout<<"\nAtomic weight-258";
       cout<<"\nSymbol-Md";
       cout<<"\nDate discovered-1955";
       break;
       case 102:cout<<"\nIts Nobelium";
       cout<<"\nAtomic number-102";
       cout<<"\nAtomic weight-259";
       cout<<"\nSymbol-No";
       cout<<"\nDate discovered-1958";
       break;
       case 103:cout<<"\nIts Lawrncium ";
       cout<<"\nAtomic number-103";
       cout<<"\nAtomic weight-260";
       cout<<"\nSymbol-Lr";
       cout<<"\nDate discovered-1961";
       break;
       case 104:cout<<"\nIts Rutherfordium";
       cout<<"\nAtomic number-104";
       cout<<"\nAtomic weight-261";
       cout<<"\nSymbol-Rf";
       cout<<"\nDate discovered-1969";
       break;
       case 105:cout<<"\nIts Dubnium";
       cout<<"\nAtomic number-105";
       cout<<"\nAtomic weight-262";
       cout<<"\nSymbol-Db";
       cout<<"\nDate discovered-1970";
       break;
       case 106:cout<<"\nIts Seaborgium";
       cout<<"\nAtomic number-106";
       cout<<"\nAtomic weight-266";
       cout<<"\nSymbol-Sg";
       cout<<"\nDate discovered-1974";
       break;
       case 107:cout<<"\nIts Bohrium";
       cout<<"\nAtomic number-107";
       cout<<"\nAtomic weight-262";
       cout<<"\nSymbol-Bh";
       cout<<"\nDate discovered-1976";
       break;
       case 108:cout<<"\nIts Hassium";
       cout<<"\nAtomic number-108";
       cout<<"\nAtomic weight- 263";
       cout<<"\nSymbol-Hs";
       cout<<"\nDate discovered-1984";
       break;
       case 109:cout<<"\nIts Meitnerium";
       cout<<"\nAtomic number-109";
       cout<<"\nAtomic weight-268";
       cout<<"\nSymbol-Mt";
       cout<<"\nDate discovered-1982";
       break;
       case 110:cout<<"\nIts Darmstadtium";
       cout<<"\nAtomic number-110";
       cout<<"\nAtomic weight-271";
       cout<<"\nSymbol- Ds";
       cout<<"\nDate discovered-1994";
       break;
       case 111:cout<<"\nIts Roentgenium";
       cout<<"\nAtomic number-111";
       cout<<"\nAtomic weight-272";
       cout<<"\nSymbol-Rg";
       cout<<"\nDate discovered-1994";
       break;
       case 112:cout<<"\nIts Ununbium";
       cout<<"\nAtomic number-112";
       cout<<"\nAtomic weight-277";
       cout<<"\nSymbol-Uub";
       cout<<"\nDate discovered-1996";
       break;
       case 113:cout<<"\nIts Ununtrium";
       cout<<"\nAtomic number-113";
       cout<<"\nAtomic weight-284";
       cout<<"\nSymbol-Uut";
       cout<<"\nDate discovered-2003";
       break;
       case 114:cout<<"\nIts Ununquadium";
       cout<<"\nAtomic number-114";
       cout<<"\nAtomic weight-285";
       cout<<"\nSymbol-uuq";
       cout<<"\nDate discovered-1998";
       break;
       case 115:cout<<"\nIts Ununpentium";
       cout<<"\nAtomic number-115";
       cout<<"\nAtomic weight-288";
       cout<<"\nSymbol-Uup";
       cout<<"\nDate discovered-2003";
       break;
       case 116:cout<<"\nIts Ununhexium";
		cout<<"\nAtomic number-116";
		cout<<"\nAtomic weight-292";
		cout<<"\nSymbol-Uuh";
		cout<<"\nDate discovered-2000";
		break;
       default:cout<<"\nwrong!choice please enter the atomic number between 1-116 not:-"<<atm;
       }
       cout<<"\n                        ";
       cout<<"\n                        ";
       cout<<"\nwant!to search it again:-";
       cin>>at;
       }while(at=='y'||at=='Y');
   }
 if(choice==2)
	{
	char ri[500];
char sy='y';
do
       { clrscr();
       cout<<"\n  press any key for taking the help of modern periodic table:-";
       cout<<"\n  -----------------------------------------------------------           ";

       getch();
       cout<<"\n|H|                                                                 |He|";
cout<<"\n|Li||Be|                                        |B ||C ||N ||O ||F ||Ne|";
cout<<"\n|Na||Mg|                                        |Al||Si||P ||S ||Cl||Ar|";
cout<<"\n|K| |Ca||Sc||Ti||V|||Cr||Mn||Fe||Co||Ni||Cu||Zn||Ga||Ge||As||Se||Br||Kr|";
cout<<"\n|Rb||Sr||Y ||Zr||Nb||Mo||Tc||Ru||Rh||Pd||Ag||Cd||In||Sn||Sb||Te|| I||Xe|";
cout<<"\n|Cs||Ba||La||Hf||Ta||W ||Re||Os||Ir||Pt||Au||Hg||Tl||Pb||Bi||Po||At||Rn|";
cout<<"\n|Fr||Ra||Ac||Rf||Db||Sg||Bh||Hs||Mt||Ds|";
cout<<"\n                           F-inner transition element                  ";
cout<<"\n*lanthanoid |Ce||Pr||Nd||Pm||Eu||Gd||Tb||Dy||Ho||Er||Tm||Yb||Lu|";
cout<<"\n**Actinoid  |Th||Pa||U ||Np||Am||Cm||Bk||Cf||Es||Fm||Md||No||Lr|";
cout<<"\n                        ";
cout<<"\n                        ";
cout<<"\n                        ";
 cout<<"\n  please enter the symbol of a element between atomic number 1-110 only:-";
       cin>>ri;
 if(strcmp(ri,"h")==0)
       {
	       cout<<"\nIts-Hydrogen ";
		cout<<"\nAtomic number-1";
		cout<<"\nAtomic weight-1";
		cout<<"\nSymbol-H";
		cout<<"\nDate discovered-1799";
     }
	else if(strcmp(ri,"he")==0)
	{
	cout<<"\nIts-Helium";
		 cout<<"\nAtomic number-2";
		 cout<<"\nAtomic weight-4";
		 cout<<"\nSymbol-He";
		  cout<<"\nDate discovered-1866";
		 }
else if(strcmp(ri,"li")==0)
	{
	cout<<"\nIts-Lithium";
		 cout<<"\nAtomic number-3";
		 cout<<"\nAtomic weight-7";
		 cout<<"\nSymbol-Li";
		 cout<<"\nDate discovered-1817";
		 }
	else if(strcmp(ri,"be")==0)
	{
	cout<<"\nIts-Beryllium";
		 cout<<"\nAtomic number-4";
		 cout<<"\nAtomic weight-9";
		 cout<<"\nSymbol-Be";
		 cout<<"\nDate discovered-1798";
	}
 else if(strcmp(ri,"b")==0)
	{
	cout<<"\nIts -Boron";
		cout<<"\nAtomic number-5";
		cout<<"\nAtomic weight-10";
		 cout<<"\nSymbol-B";
		cout<<"\nDate discovered-1808";
		}
	else if(strcmp(ri,"c")==0)
	{
	cout<<"\nIts-Carbon";
	       cout<<"\nAtomic number-6";
	       cout<<"\nAtomic weight-12";
       cout<<"\nSymbol-C";
       cout<<"\nDate discovered-1789";
       }
	else if(strcmp(ri,"n")==0)
	{
	cout<<"\nIts-Nitrogen";
       cout<<"\nAtomic number-7";
       cout<<"\nAtomic weight-14";
       cout<<"\nSymbol-N";
       cout<<"\nDate discovered-1772";
       }
	else if(strcmp(ri,"o")==0)
	{
	cout<<"\nIts-Oxygen";
       cout<<"\nAtomic number-8";
       cout<<"\nAtomic weight-16";
       cout<<"\nSymbol-O";
       cout<<"\nDate discovered-  1774";
       }
	else if(strcmp(ri,"f")==0)
	{
	cout<<"\nIts-Fluorine";
       cout<<"\nAtomic number-9";
       cout<<"\nAtomic weight-19";
       cout<<"\nSymbol-F";
       cout<<"\nDate discovered-1772";
       }
	else if(strcmp(ri,"ne")==0)
	{
	cout<<"\nIts-Neon";
       cout<<"\nAtomic number-10";
       cout<<"\nAtomic weight-20";
       cout<<"\nSymbol-Ne";
       cout<<"\nDate discovered-1898";
       }
	else if(strcmp(ri,"na")==0)
	{
	cout<<"\nIts-Sodium";
       cout<<"\nAtomic number-11";
       cout<<"\nAtomic weight-23";
       cout<<"\nSymbol-Na";
       cout<<"\nDate discovered-1807";
	 }
	else if(strcmp(ri,"mg")==0)
	{
	cout<<"\nIts-Magnessium";
       cout<<"\nAtomic number-12";
       cout<<"\nAtomic weight-24";
       cout<<"\nSymbol-Mg";
       cout<<"\nDate discovered-1755";
       }
	else if(strcmp(ri,"al")==0)
	{
	cout<<"\nIts-Aluminium";
       cout<<"\nAtomic number-13";
       cout<<"\nAtomic weight-27";
       cout<<"\nSymbol-Al";
       cout<<"\nDate discovered-1824";
       }
	else if(strcmp(ri,"si")==0)
	{
	cout<<"\nIts-Silicon";
       cout<<"\nAtomic number-14";
       cout<<"\nAtomic weight-28";
       cout<<"\nSymbol-Si";
       cout<<"\nDate discovered-1832";
       }

	else if(strcmp(ri,"p")==0)
	{
	cout<<"\nIts-Phosphorus";
       cout<<"\nAtomic number-15";
       cout<<"\nAtomic weight-31";
       cout<<"\nSymbol-P";
       cout<<"\nDate discovered-1674";
	 }
	else if(strcmp(ri,"s")==0)
	{
	cout<<"\nIts-sulphur";
       cout<<"\nAtomic number-16";
       cout<<"\nAtomic weight-32";
       cout<<"\nSymbol-S";
       cout<<"\nDate discovered-1856";
       }
	else if(strcmp(ri,"cl")==0)
	{
	cout<<"\nIts-Chlorine";
       cout<<"\nAtomic number-17";
       cout<<"\nAtomic weight-35";
       cout<<"\nSymbol-Cl";
       cout<<"\nDate discovered-1774";
       }
	else if(strcmp(ri,"ar")==0)
	{
	cout<<"\nIts-Argon";
       cout<<"\nAtomic number-18";
       cout<<"\nAtomic weight-39";
       cout<<"\nSymbol-Ar";
       cout<<"\nDate discovered-1894";
       }
	else if(strcmp(ri,"k")==0)
	{
	cout<<"\nIts-Potassium";
       cout<<"\nAtomic number-19";
       cout<<"\nAtomic weight-39";
       cout<<"\nSymbol-K";
       cout<<"\nDate discovered-1807";
       }
	else if(strcmp(ri,"ca")==0)
	{
	cout<<"\nIts-Calcium";
       cout<<"\nAtomic number-20";
       cout<<"\nAtomic weight-40";
       cout<<"\nSymbol-Ca";
       cout<<"\nDate discovered-1808";
       }
	else if(strcmp(ri,"sc")==0)
	{
	cout<<"\nIts-scandium";
       cout<<"\nAtomic number-21";
       cout<<"\nAtomic weight-44";
       cout<<"\nSymbol-Sc";
       cout<<"\nDate discovered-1876";
       }
	else if(strcmp(ri,"ti")==0)
	{
	cout<<"\nIts-Titanium";
       cout<<"\nAtomic number-22";
       cout<<"\nAtomic weight-47";
       cout<<"\nSymbol-Ti";
       cout<<"\nDate discovered-1790";
       }
	else if(strcmp(ri,"v")==0)
	{
	cout<<"\nIts-Vanadium";
       cout<<"\nAtomic number-23";
       cout<<"\nAtomic weight-50";
       cout<<"\nSymbol-V";
       cout<<"\nDate discovered-1801";
       }
	else if(strcmp(ri,"cr")==0)
	{
	cout<<"\nIts-Chromium";
       cout<<"\nAtomic number-24";
       cout<<"\nAtomic weight-52";
       cout<<"\nSymbol-cr";
       cout<<"\nDate discovered-1797";
       }
	else if(strcmp(ri,"mn")==0)
	{
	cout<<"\nIts-Manganese";
       cout<<"\nAtomic number-25";
       cout<<"\nAtomic weight-55";
       cout<<"\nSymbol-Mn";
       cout<<"\nDate discovered-1774";
       }
	else if(strcmp(ri,"fe")==0)
	{
	cout<<"\nIts-Iron";
       cout<<"\nAtomic number- 26";
       cout<<"\nAtomic weight-55";
       cout<<"\nSymbol-Fe";
       cout<<"\nDate discovered-1756";
       }
	else if(strcmp(ri,"co")==0)
	{
	cout<<"\nIts-cobalt";
       cout<<"\nAtomic number-27";
       cout<<"\nAtomic weight-58";
       cout<<"\nSymbol-Co";
       cout<<"\nDate discovered-1730";
       }
	else if(strcmp(ri,"ni")==0)
	{
	cout<<"\nIts-Nickel";
       cout<<"\nAtomic number-28";
       cout<<"\nAtomic weight-59";
       cout<<"\nSymbol-Ni";
       cout<<"\nDate discovered-1751";
       }
	else if(strcmp(ri,"cu")==0)
	{
	cout<<"\nIts-copper";
       cout<<"\nAtomic number-29";
       cout<<"\nAtomic weight-63";
       cout<<"\nSymbol-Cu";
       cout<<"\nDate discovered-1723";
       }
	else if(strcmp(ri,"zn")==0)
	{
	cout<<"\nIts-Zinc";
       cout<<"\nAtomic number-30";
       cout<<"\nAtomic weight-65";
       cout<<"\nSymbol-Zn";
       cout<<"\nDate discovered-1745";
       }
	else if(strcmp(ri,"ga")==0)
	{
	cout<<"\nIts-Gallium";
       cout<<"\nAtomic number-31";
       cout<<"\nAtomic weight-69";
       cout<<"\nSymbol-Ga";
       cout<<"\nDate discovered-1875";
       }
	else if(strcmp(ri,"ge")==0)
	{
	cout<<"\nItsGermanium";
       cout<<"\nAtomic number-32";
       cout<<"\nAtomic weight-72";
       cout<<"\nSymbol-Ge";
       cout<<"\nDate discovered-1886";
       }
	else if(strcmp(ri,"as")==0)
	{
	cout<<"\nIts-Arsenic";
       cout<<"\nAtomic number-33";
       cout<<"\nAtomic weight-75";
       cout<<"\nSymbol-As";
       cout<<"\nDate discovered-1756";
       }
	else if(strcmp(ri,"se")==0)
	{
	cout<<"\nIts-Selenium";
       cout<<"\nAtomic number-34";
       cout<<"\nAtomic weight-78";
       cout<<"\nSymbol-Se";
       cout<<"\nDate discovered-1817";
       }
	else if(strcmp(ri,"br")==0)
	{
	cout<<"\nIts-Bromine";
       cout<<"\nAtomic number-35";
       cout<<"\nAtomic weight-79";
       cout<<"\nSymbol-Br";
       cout<<"\nDate discovered-1826";
	 }
	else if(strcmp(ri,"kr")==0)
	{
	cout<<"\nIts-krypton";
       cout<<"\nAtomic number-36";
       cout<<"\nAtomic weight-83";
       cout<<"\nSymbol-kr";
       cout<<"\nDate discovered-1898";
       }
	else if(strcmp(ri,"he")==0)
	{
	cout<<"\nIts-Rubidium";
       cout<<"\nAtomic number-37";
       cout<<"\nAtomic weight-85";
       cout<<"\nSymbol-Rb";
       cout<<"\nDate discovered-1861";
       }
	else if(strcmp(ri,"sr")==0)
	{
	cout<<"\nIts-strotium";
       cout<<"\nAtomic number-38";
       cout<<"\nAtomic weight-87";
       cout<<"\nSymbol-Sr";
       cout<<"\nDate discovered-1808";
       }
	else if(strcmp(ri,"y")==0)
	{
       cout<<"\nIts-Yttrium";
       cout<<"\nAtomic number-39";
       cout<<"\nAtomic weight-89";
       cout<<"\nSymbol-Y";
       cout<<"\nDate discovered-1794";
       }
	else if(strcmp(ri,"zr")==0)
	{
	cout<<"\nIts-Zirconium";
       cout<<"\nAtomic number-40";
       cout<<"\nAtomic weight-91";
       cout<<"\nSymbol-Zr";
       cout<<"\nDate discovered-1789";
       }
	else if(strcmp(ri,"nb")==0)
	{
	cout<<"\nIts-Niobium";
       cout<<"\nAtomic number-41";
       cout<<"\nAtomic weight-92";
       cout<<"\nSymbol-Nb";
       cout<<"\nDate discovered-1891";
       }
	else if(strcmp(ri,"mo")==0)
	{
	cout<<"\nIts-Molybdenum";
       cout<<"\nAtomic number-42";
       cout<<"\nAtomic weight-95";
       cout<<"\nSymbol-Mo";
       cout<<"\nDate discovered-1781";
       }
	else if(strcmp(ri,"tc")==0)
	{
       cout<<"\nIts-Technetium";
       cout<<"\nAtomic number-43";
       cout<<"\nAtomic weight-98";
       cout<<"\nSymbol-Tc";
       cout<<"\nDate discovered-1937";
       }
	else if(strcmp(ri,"ru")==0)
	{
	cout<<"\nIts-Ruthenium";
       cout<<"\nAtomic number-44";
       cout<<"\nAtomic weight-101";
       cout<<"\nSymbol-Ru";
       cout<<"\nDate discovered-1827";
	}
	else if(strcmp(ri,"rh")==0)
	{
	cout<<"\nIts-Rhodium";
       cout<<"\nAtomic number-45";
       cout<<"\nAtomic weight-103";
       cout<<"\nSymbol-Rh";
       cout<<"\nDate discovered-1804";
       }

	 if(strcmp(ri,"pd")==0)
	{
	cout<<"\nIts-palladium";
       cout<<"\nAtomic number- 46";
       cout<<"\nAtomic weight-106";
       cout<<"\nSymbol-Pd";
       cout<<"\nDate discovered-1804";
       }
	else if(strcmp(ri,"ag")==0)
	{
	cout<<"\nIts-Silver";
       cout<<"\nAtomic number-47";
       cout<<"\nAtomic weight-108";
       cout<<"\nSymbol-Ag";
       cout<<"\nDate discovered-1815";
       }
	else if(strcmp(ri,"cd")==0)
	{
	cout<<"\nIts-Cadmium";
       cout<<"\nAtomic number-48";
       cout<<"\nAtomic weight-112";
       cout<<"\nSymbol-Cd";
       cout<<"\nDate discovered-1817";
       }
	else if(strcmp(ri,"in")==0)
	{
	cout<<"\nIts-indium";
       cout<<"\nAtomic number-49";
       cout<<"\nAtomic weight-115";
       cout<<"\nSymbol-In";
       cout<<"\nDate discovered-1863";
       }
	else if(strcmp(ri,"sn")==0)
	{
	cout<<"\nIts-Tin";
       cout<<"\nAtomic number-50";
       cout<<"\nAtomic weight-119";
       cout<<"\nSymbol-Sn";
       cout<<"\nDate discovered-1741";
	}
       else if(strcmp(ri,"sb")==0)
	{
	cout<<"\nIts Antinomy ";
       cout<<"\nAtomic number-51";
       cout<<"\nAtomic weight-121";
       cout<<"\nSymbol-Sb";
       cout<<"\nDate discovered-1856";
	}
	else if(strcmp(ri,"te")==0)
	{
	cout<<"\nIts Tellurium";
       cout<<"\nAtomic number-52";
       cout<<"\nAtomic weight-127";
       cout<<"\nSymbol-Te";
       cout<<"\nDate discovered-1782";
       }
	else if(strcmp(ri,"i")==0)
	{
	cout<<"\nIts Iodine";
       cout<<"\nAtomic number- 53";
       cout<<"\nAtomic weight-128";
       cout<<"\nSymbol-I";
       cout<<"\nDate discovered-1811";
      }
	else if(strcmp(ri,"xe")==0)
	{
	cout<<"\nIts Xenon";
       cout<<"\nAtomic number-54";
       cout<<"\nAtomic weight-131";
       cout<<"\nSymbol-Xe";
       cout<<"\nDate discovered-1898";
       }
	else if(strcmp(ri,"cs")==0)
	{
	cout<<"\nIts Cesium";
       cout<<"\nAtomic number-55";
       cout<<"\nAtomic weight-133";
       cout<<"\nSymbol-Cs";
       cout<<"\nDate discovered-1860";
       }
       else if(strcmp(ri,"ba")==0)
       {
       cout<<"\nIts Barium";
       cout<<"\nAtomic number- 56";
       cout<<"\nAtomic weight-137";
       cout<<"\nSymbol-Ba";
       cout<<"\nDate discovered-1808";
       }
       else if(strcmp(ri,"la")==0)
	{
	cout<<"\nIts Lanthanum ";
       cout<<"\nAtomic number-57";
       cout<<"\nAtomic weight-140";
       cout<<"\nSymbol-La";
       cout<<"\nDate discovered-1839";
	}
	else if(strcmp(ri,"ce")==0)
	{
	cout<<"\nIts Cerium ";
       cout<<"\nAtomic number-58";
       cout<<"\nAtomic weight-140";
       cout<<"\nSymbol-Ce";
       cout<<"\nDate discovered-1804";
	}
	else if(strcmp(ri,"pr")==0)
	{
	cout<<"\nIts Praseodymium ";
       cout<<"\nAtomic number-59";
       cout<<"\nAtomic weight-141";
       cout<<"\nSymbol-Pr";
       cout<<"\nDate discovered-1885";
       }
	else if(strcmp(ri,"nd")==0)
	{
	cout<<"\nIts Neodymium";
       cout<<"\nAtomic number-60";
       cout<<"\nAtomic weight-144";
       cout<<"\nSymbol-Nd";
       cout<<"\nDate discovered-1885";
       }
	else if(strcmp(ri,"pm")==0)
	{
	cout<<"\nIts Promethium ";
       cout<<"\nAtomic number-61";
       cout<<"\nAtomic weight-145";
       cout<<"\nSymbol-Pm";
       cout<<"\nDate discovered-1945";
       }
	else if(strcmp(ri,"eu")==0)
	{
	cout<<"\nIts Europium";
       cout<<"\nAtomic number-63";
       cout<<"\nAtomic weight-152";
       cout<<"\nSymbol-Eu";
       cout<<"\nDate discovered-1901";
       }
	else if(strcmp(ri,"gd")==0)
	{
	cout<<"\nIts Gadolinium";
       cout<<"\nAtomic number-64";
       cout<<"\nAtomic weight-157";
       cout<<"\nSymbol-Gd";
       cout<<"\nDate discovered-1886";
	}
	else if(strcmp(ri,"tb")==0)
	{
	cout<<"\nIts Terbium";
       cout<<"\nAtomic number-65";
       cout<<"\nAtomic weight-159";
       cout<<"\nSymbol-Tb";
       cout<<"\nDate discovered-1843";
       }
	else if(strcmp(ri,"dy")==0)
	{
	cout<<"\nIts Dysprosium";
       cout<<"\nAtomic number-66";
       cout<<"\nAtomic weight-162";
       cout<<"\nSymbol-Dy";
       cout<<"\nDate discovered-1886";
       }
	else if(strcmp(ri,"ho")==0)
	{
	cout<<"\nIts Holmium";
       cout<<"\nAtomic number-67";
       cout<<"\nAtomic weight-165";
       cout<<"\nSymbol-Ho";
       cout<<"\nDate discovered-1879";
       }
	else if(strcmp(ri,"er")==0)
	{
	cout<<"\nIts Erbium";
       cout<<"\nAtomic number-68";
       cout<<"\nAtomic weight-167";
       cout<<"\nSymbol-Er";
       cout<<"\nDate discovered-1843";
       }
	else if(strcmp(ri,"tm")==0)
	{
	cout<<"\nIts Thulium";
       cout<<"\nAtomic number-69";
       cout<<"\nAtomic weight-169";
       cout<<"\nSymbol-Tm";
       cout<<"\nDate discovered-1879";
       }
	else if(strcmp(ri,"yb")==0)
	{
	cout<<"\nIts Ytterbium";
       cout<<"\nAtomic number-70";
       cout<<"\nAtomic weight-173";
       cout<<"\nSymbol-Yb";
       cout<<"\nDate discovered- 1878";
       }
	else if(strcmp(ri,"lu")==0)
	{
	cout<<"\nIts Lutetium ";
       cout<<"\nAtomic number-71";
       cout<<"\nAtomic weight-175";
       cout<<"\nSymbol-Lu";
       cout<<"\nDate discovered- 1907" ;
       }
       else if(strcmp(ri,"hf")==0)
	{
	cout<<"\nIts Hafnium  ";
       cout<<"\nAtomic number- 72";
       cout<<"\nAtomic weight-178";
       cout<<"\nSymbol- Hf";
       cout<<"\nDate discovered-1913";
       }
	else if(strcmp(ri,"ta")==0)
	{
	cout<<"\nIts Tantalum";
       cout<<"\nAtomic number-73";
       cout<<"\nAtomic weight-180";
       cout<<"\nSymbol-Ta";
       cout<<"\nDate discovered-1802";
       }
	else if(strcmp(ri,"w")==0)
	{
	cout<<"\nIts Tungsten";
       cout<<"\nAtomic number-74";
       cout<<"\nAtomic weight-183";
       cout<<"\nSymbol-W";
       cout<<"\nDate discovered-1783";
       }
	else if(strcmp(ri,"re")==0)
	{
       cout<<"\nIts Rhenium";
       cout<<"\nAtomic number-75";
       cout<<"\nAtomic weight- 186";
       cout<<"\nSymbol-Re";
       cout<<"\nDate discovered-1925";
       }
	else if(strcmp(ri,"os")==0)
	{
	cout<<"\nIts Osmium";
       cout<<"\nAtomic number-76";
       cout<<"\nAtomic weight- 190";
       cout<<"\nSymbol-Os";
       cout<<"\nDate discovered-1804";
       }
	else if(strcmp(ri,"ir")==0)
	{
	cout<<"\nIts Iridium";
       cout<<"\nAtomic number-77";
       cout<<"\nAtomic weight-192";
       cout<<"\nSymbol-Ir";
       cout<<"\nDate discovered-1804";
       }
	else if(strcmp(ri,"pt")==0)
	{
	cout<<"\nIts Platinum";
       cout<<"\nAtomic number- 78";
       cout<<"\nAtomic weight-195";
       cout<<"\nSymbol-Pt";
       cout<<"\nDate discovered-1557";
       }
	else if(strcmp(ri,"au")==0)
	{
	cout<<"\nIts Gold";
       cout<<"\nAtomic number-79";
       cout<<"\nAtomic weight-197";
       cout<<"\nSymbol-Au";
       cout<<"\nDate discovered- 1156";
       }
	else if(strcmp(ri,"hg")==0)
	{
	cout<<"\nIts Mercury ";
       cout<<"\nAtomic number-80";
       cout<<"\nAtomic weight-200";
       cout<<"\nSymbol-Hg";
       cout<<"\nDate discovered-prehistoric";
       }
	else if(strcmp(ri,"tl")==0)
	{
	cout<<"\nIts Thallium";
       cout<<"\nAtomic number-81";
       cout<<"\nAtomic weight-204";
       cout<<"\nSymbol-Tl";
       cout<<"\nDate discovered-1861";
       }
	else if(strcmp(ri,"pb")==0)
	{
	cout<<"\nIts Lead";
       cout<<"\nAtomic number-82";
       cout<<"\nAtomic weight-207";
       cout<<"\nSymbol- pb";
       cout<<"\nDate discovered-prehistoric";
       }
	else if(strcmp(ri,"bi")==0)
	{
	cout<<"\nItsBismuth ";
       cout<<"\nAtomic number-83";
       cout<<"\nAtomic weight-208";
       cout<<"\nSymbol- Bi";
       cout<<"\nDate discovered-prehistoric";
       }
	else if(strcmp(ri,"po")==0)
	{
	cout<<"\nIts Polonium";
       cout<<"\nAtomic number-84";
       cout<<"\nAtomic weight-209";
       cout<<"\nSymbol-Po";
       cout<<"\nDate discovered-1898";
       }
	else if(strcmp(ri,"at")==0)
	{
	cout<<"\nItsAstatine ";
       cout<<"\nAtomic number-85";
       cout<<"\nAtomic weight-210";
       cout<<"\nSymbol-At";
       cout<<"\nDate discovered-1940";
       }
	else if(strcmp(ri,"rn")==0)
	{
	cout<<"\nIts Radon";
       cout<<"\nAtomic number-86";
       cout<<"\nAtomic weight-222";
       cout<<"\nSymbol-Rn";
       cout<<"\nDate discovered-1900";
       }
	else if(strcmp(ri,"fr")==0)
	{
	cout<<"\nIts Francium ";
       cout<<"\nAtomic number- 87";
       cout<<"\nAtomic weight-223";
       cout<<"\nSymbol-Fr";
       cout<<"\nDate discovered-1939";
       }
	else if(strcmp(ri,"ra")==0)
	{
	cout<<"\nIts Radium";
       cout<<"\nAtomic number-88";
       cout<<"\nAtomic weight-226";
       cout<<"\nSymbol-Ra";
       cout<<"\nDate discovered-1898";
	 }
	else if(strcmp(ri,"ac")==0)
	{
	cout<<"\nIts Actinium";
       cout<<"\nAtomic number-89";
       cout<<"\nAtomic weight-227";
       cout<<"\nSymbol-Ac";
       cout<<"\nDate discovered- 1899";
       }
	else if(strcmp(ri,"th")==0)
	{
	cout<<"\nIts Thorium";
       cout<<"\nAtomic number-90";
       cout<<"\nAtomic weight-232";
       cout<<"\nSymbol-Th";
       cout<<"\nDate discovered-1828";
       }
	else if(strcmp(ri,"pa")==0)
	{
	cout<<"\nIts Protactinium";
       cout<<"\nAtomic number-91";
       cout<<"\nAtomic weight-231";
       cout<<"\nSymbol-Pa";
       cout<<"\nDate discovered-1913";
       }
	else if(strcmp(ri,"u")==0)
	{
	cout<<"\nIts Uranium";
       cout<<"\nAtomic number-92";
       cout<<"\nAtomic weight-238";
       cout<<"\nSymbol-U";
       cout<<"\nDate discovered-1789";
       }
	else if(strcmp(ri,"np")==0)
	{
	cout<<"\nIts Neptunium";
       cout<<"\nAtomic number-93";
       cout<<"\nAtomic weight-237";
       cout<<"\nSymbol-Np";
       cout<<"\nDate discovered-1940";
       }
	else if(strcmp(ri,"pu")==0)
	{
	cout<<"\nIts Plutonium";
       cout<<"\nAtomic number- 94";
       cout<<"\nAtomic weight-244";
       cout<<"\nSymbol-Pu";
       cout<<"\nDate discovered-1940";
	   }
	else if(strcmp(ri,"am")==0)
	{
	cout<<"\nIts Americium";
       cout<<"\nAtomic number-95";
       cout<<"\nAtomic weight- 243";
       cout<<"\nSymbol-Am";
       cout<<"\nDate discovered-1944";
       }
	else if(strcmp(ri,"am")==0)
	{
	cout<<"\nIts Curium";
       cout<<"\nAtomic number-96";
       cout<<"\nAtomic weight-247";
       cout<<"\nSymbol-Cm";
       cout<<"\nDate discovered-1944";
	  }
	else if(strcmp(ri,"bk")==0)
	{
	cout<<"\nIts Berkelium";
       cout<<"\nAtomic number-97";
       cout<<"\nAtomic weight-247";
       cout<<"\nSymbol-Bk";
       cout<<"\nDate discovered-1949";
       }
	else if(strcmp(ri,"cf")==0)
	{
	cout<<"\nIts Californium";
       cout<<"\nAtomic number-98";
       cout<<"\nAtomic weight-251";
       cout<<"\nSymbol-Cf";
       cout<<"\nDate discovered- 1950";
       }
	 if(strcmp(ri,"es")==0)
	{
	cout<<"\nIts Einsteinium";
       cout<<"\nAtomic number- 99";
       cout<<"\nAtomic weight-252";
       cout<<"\nSymbol-Es";
       cout<<"\nDate discovered-1952";
       }
	else if(strcmp(ri,"fm")==0)
	{
	cout<<"\nIts Fermium";
       cout<<"\nAtomic number-100";
       cout<<"\nAtomic weight-257";
       cout<<"\nSymbol-Fm";
       cout<<"\nDate discovered-1955";
	   }
	 if(strcmp(ri,"md")==0)
	{
	cout<<"\nIts Mendelevium";
       cout<<"\nAtomic number-101";
       cout<<"\nAtomic weight-258";
       cout<<"\nSymbol-Md";
       cout<<"\nDate discovered-1955";
       }
	else if(strcmp(ri,"no")==0)
	{
	cout<<"\nIts Nobelium";
       cout<<"\nAtomic number-102";
       cout<<"\nAtomic weight-259";
       cout<<"\nSymbol-No";
       cout<<"\nDate discovered-1958";
       }
	else if(strcmp(ri,"lr")==0)
	{
       cout<<"\nIts Lawrncium ";
       cout<<"\nAtomic number-103";
       cout<<"\nAtomic weight-260";
       cout<<"\nSymbol-Lr";
       cout<<"\nDate discovered-1961";
       }
	else if(strcmp(ri,"rf")==0)
	{
	cout<<"\nIts Rutherfordium";
       cout<<"\nAtomic number-104";
       cout<<"\nAtomic weight-261";
       cout<<"\nSymbol-Rf";
       cout<<"\nDate discovered-1969";
       }
	 if(strcmp(ri,"db")==0)
	{
       cout<<"\nIts Dubnium";
       cout<<"\nAtomic number-105";
       cout<<"\nAtomic weight-262";
       cout<<"\nSymbol-Db";
       cout<<"\nDate discovered-1970";
       }
	else if(strcmp(ri,"sg")==0)
	{
	cout<<"\nIts Seaborgium";
       cout<<"\nAtomic number-106";
       cout<<"\nAtomic weight-266";
       cout<<"\nSymbol-Sg";
       cout<<"\nDate discovered-1974";
       }
	else if(strcmp(ri,"bh")==0)
	{
	cout<<"\nIts Bohrium";
       cout<<"\nAtomic number-107";
       cout<<"\nAtomic weight-262";
       cout<<"\nSymbol-Bh";
       cout<<"\nDate discovered-1976";
       }
	 if(strcmp(ri,"hs")==0)
	{
	cout<<"\nIts Hassium";
       cout<<"\nAtomic number-108";
       cout<<"\nAtomic weight- 263";
       cout<<"\nSymbol-Hs";
       cout<<"\nDate discovered-1984";
	 }
	else if(strcmp(ri,"mt")==0)
	{
	cout<<"\nIts Meitnerium";
       cout<<"\nAtomic number-109";
       cout<<"\nAtomic weight-268";
       cout<<"\nSymbol-Mt";
       cout<<"\nDate discovered-1982";
       }
	else if(strcmp(ri,"ds")==0)
	{
	cout<<"\nIts Darmstadtium";
       cout<<"\nAtomic number-110";
       cout<<"\nAtomic weight-271";
       cout<<"\nSymbol- Ds";
       cout<<"\nDate discovered-1994";
       }
	cout<<"\nwant to search more result(y/n):-";
       cin>>sy;
       clrscr();
       } while(sy=='y'||sy=='Y');
	}
	else if(choice==3)
	{
	char na,se='y';
    int ch;
    do
{
clrscr();
cout<<"\n     Enter The first Word Of The Element Between(a-z):-";
cout<<"\n    ::::::::::::::::::::::::::::::::::::::::::::::::::::        ";
cin>>na;
switch(na)
{
case 'a':cout<<"\n1.Actinium     ";
cout<<"\n2.Aluiminium ";
cout<<"\n3.Americium ";
cout<<"\n4.Antimony    ";
cout<<"\n5.Argon    ";
cout<<"\n6.Arsenic    ";
cout<<"\n7.Astatine  ";
cout<<"\nEnter your choice  :-";
cin>>ch;
switch(ch)
{
case 1:cout<<"\nIts Actinium";
       cout<<"\nAtomic number-89";
       cout<<"\nAtomic weight-227";
       cout<<"\nSymbol-Ac";
       cout<<"\nDate discovered- 1899";
       break;
       case 2:cout<<"\nIts-Aluminium";
       cout<<"\nAtomic number-13";
       cout<<"\nAtomic weight-27";
       cout<<"\nSymbol-Al";
       cout<<"\nDate discovered-1824";
       break;
       case 3:cout<<"\nIts Americium";
       cout<<"\nAtomic number-95";
       cout<<"\nAtomic weight- 243";
       cout<<"\nSymbol-Am";
       cout<<"\nDate discovered-1944";
       break;
       case 4:cout<<"\nIts Antinomy ";
       cout<<"\nAtomic number-51";
       cout<<"\nAtomic weight-121";
       cout<<"\nSymbol-Sb";
       cout<<"\nDate discovered-Prehistoric";
       break;
       case 5:cout<<"\nIts-Argon";
       cout<<"\nAtomic number-18";
       cout<<"\nAtomic weight-39";
       cout<<"\nSymbol-Ar";
       cout<<"\nDate discovered-1894";
       break;
       case 6:cout<<"\nIts-Arsenic";
       cout<<"\nAtomic number-33";
       cout<<"\nAtomic weight-75";
       cout<<"\nSymbol-As";
       cout<<"\nDate discovered-Prehistoric";
       break;
       case 7:cout<<"\nItsAstatine ";
       cout<<"\nAtomic number-85";
       cout<<"\nAtomic weight-210";
       cout<<"\nSymbol-At";
       cout<<"\nDate discovered-1940";
       break;
       default:cout<<"\n this while be wrong!choice please select the element given above";
	}
	break;
	case 'b':cout<<"\n1.Beryllium    ";
	cout<<"\n2.Boron    ";
	cout<<"\n3.bromine    ";
	cout<<"\n4.Barium    ";
	cout<<"\n5.Bismuth    ";
	cout<<"\n6.Berkelium    ";
	cout<<"\n7.Bohrium    ";
	cout<<"\nEnter your choice:-";
	cin>>ch;
	switch(ch)
	{
	case 1:cout<<"\nIts-Beryllium";
       cout<<"\nAtomic number-4";
       cout<<"\nAtomic weight-9";
       cout<<"\nSymbol-Be";
       cout<<"\nDate discovered-1798";
       break;
       case 2:cout<<"\nIts -Boron";
       cout<<"\nAtomic number-5";
       cout<<"\nAtomic weight-10";
       cout<<"\nSymbol-B";
       cout<<"\nDate discovered-1808";
       break;
       case 3:cout<<"\nIts-Bromine";
       cout<<"\nAtomic number-35";
       cout<<"\nAtomic weight-79";
       cout<<"\nSymbol-Br";
       cout<<"\nDate discovered-1826";
       break;
       case 4:cout<<"\nIts Barium";
       cout<<"\nAtomic number- 56";
       cout<<"\nAtomic weight-137";
       cout<<"\nSymbol-Ba";
       cout<<"\nDate discovered-1808";
       break;
       case 5:cout<<"\nItsBismuth ";
       cout<<"\nAtomic number-83";
       cout<<"\nAtomic weight-208";
       cout<<"\nSymbol- Bi";
       cout<<"\nDate discovered-prehistoric";
       break;
       case 6:cout<<"\nIts Berkelium";
       cout<<"\nAtomic number-97";
       cout<<"\nAtomic weight-247";
       cout<<"\nSymbol-Bk";
       cout<<"\nDate discovered-1949";
       break;
       case 7:cout<<"\nIts Bohrium";
       cout<<"\nAtomic number-107";
       cout<<"\nAtomic weight-262";
       cout<<"\nSymbol-Bh";
       cout<<"\nDate discovered-1976";
       break;
	default:cout<<"\n this while be wrong!choice please select the element given above";
	}
      break;
      case 'c':cout<<"\n1.carbon   ";
      cout<<"\n2.chlorine   ";
      cout<<"\n3.calcium   ";
      cout<<"\n4.chromium   ";
      cout<<"\n5.cobalt   ";
      cout<<"\n6.copper   ";
      cout<<"\n7.cadmium   ";
      cout<<"\n8.cesium   ";
      cout<<"\n9.cerium   ";
      cout<<"\n10.curium   ";
      cout<<"\n11.californium   ";
      cout<<"\n   ";
      cout<<"\n   ";
      cout<<"\n enter your choice   ";
      cin>>ch;
      switch(ch)
      {
      case 1:cout<<"\nIts-Carbon";
       cout<<"\nAtomic number-6";
       cout<<"\nAtomic weight-12";
       cout<<"\nSymbol-C";
       cout<<"\nDate discovered-Prehistoric";
       break;
       case 2:cout<<"\nIts-Chlorine";
       cout<<"\nAtomic number-17";
       cout<<"\nAtomic weight-35";
       cout<<"\nSymbol-Cl";
       cout<<"\nDate discovered-1774";
       break;
       case 3:cout<<"\nIts-Calcium";
       cout<<"\nAtomic number-20";
       cout<<"\nAtomic weight-40";
       cout<<"\nSymbol-Ca";
       cout<<"\nDate discovered-1808";
       break;
       case 4:cout<<"\nIts-Chromium";
       cout<<"\nAtomic number-24";
       cout<<"\nAtomic weight-52";
       cout<<"\nSymbol-cr";
       cout<<"\nDate discovered-1797";
       break;
       case 5:cout<<"\nIts-cobalt";
       cout<<"\nAtomic number-27";
       cout<<"\nAtomic weight-58";
       cout<<"\nSymbol-Co";
       cout<<"\nDate discovered-1730";
       break;
       case 6:cout<<"\nIts-copper";
       cout<<"\nAtomic number-29";
       cout<<"\nAtomic weight-63";
       cout<<"\nSymbol-Cu";
       cout<<"\nDate discovered-Prehistoric";
       break;
       case 7:cout<<"\nIts-Cadmium";
       cout<<"\nAtomic number-48";
       cout<<"\nAtomic weight-112";
       cout<<"\nSymbol-Cd";
       cout<<"\nDate discovered-1817";
       break;
       case 8:cout<<"\nIts Cesium";
       cout<<"\nAtomic number-55";
       cout<<"\nAtomic weight-133";
       cout<<"\nSymbol-Cs";
       cout<<"\nDate discovered-1860";
       break;
       case 9:cout<<"\nIts Cerium ";
       cout<<"\nAtomic number-58";
       cout<<"\nAtomic weight-140";
       cout<<"\nSymbol-Ce";
       cout<<"\nDate discovered-1804";
       break;
       case 10:cout<<"\nIts Curium";
       cout<<"\nAtomic number-96";
       cout<<"\nAtomic weight-247";
       cout<<"\nSymbol-Cm";
       cout<<"\nDate discovered-1944";
       break;
       case 11:cout<<"\nIts Californium";
       cout<<"\nAtomic number-98";
       cout<<"\nAtomic weight-251";
       cout<<"\nSymbol-Cf";
       cout<<"\nDate discovered- 1950";
       break;
       default:cout<<"\nthis while be wrong choice please select the element given above";
       }
       break;
       case 'd':cout<<"\n1.Dysprosium      ";
       cout<<"\n2.Dubnium      ";
       cout<<"\n3.Darmstadtium      ";
       cout<<"\n      ";
       cout<<"\n      ";
       cout<<"\nEnter your choice:- ";
       cin>>ch;
       switch(ch)
       {
       case 1:cout<<"\nIts Dysprosium";
       cout<<"\nAtomic number-66";
       cout<<"\nAtomic weight-162";
       cout<<"\nSymbol-Dy";
       cout<<"\nDate discovered-1886";
       break;
       case 2:cout<<"\nIts Dubnium";
       cout<<"\nAtomic number-105";
       cout<<"\nAtomic weight-262";
       cout<<"\nSymbol-Db";
       cout<<"\nDate discovered-1970";
       break;
       case 3:cout<<"\nIts Darmstadtium";
       cout<<"\nAtomic number-110";
       cout<<"\nAtomic weight-271";
       cout<<"\nSymbol- Ds";
       cout<<"\nDate discovered-1994";
       break;
       default:cout<<"\nwrong!choice please select the element given above";
       }
       break;
       case 'e':cout<<"\n1.Europium    ";
       cout<<"\n2.Erbium    ";
       cout<<"\n3.Einsteinium    ";
       cout<<"\n    ";
       cout<<"\n    ";
       cout<<"\nenter your choice:- ";
       cin>>ch;
       switch(ch)
       {
       case 1:cout<<"\nIts Europium";
       cout<<"\nAtomic number-63";
       cout<<"\nAtomic weight-152";
       cout<<"\nSymbol-Eu";
       cout<<"\nDate discovered-1901";
       break;
       case 2:cout<<"\nIts Erbium";
       cout<<"\nAtomic number-68";
       cout<<"\nAtomic weight-167";
       cout<<"\nSymbol-Er";
       cout<<"\nDate discovered-1843";
       break;
       case 3:cout<<"\nIts Einsteinium";
       cout<<"\nAtomic number- 99";
       cout<<"\nAtomic weight-252";
       cout<<"\nSymbol-Es";
       cout<<"\nDate discovered-1952";
       break;
       default:cout<<"\nthis is wrong! choice please select the element given above";
       }
       break;
       case'f':cout<<"\n1.fluorine    ";
       cout<<"\n2.francium    ";
       cout<<"\n3.fermium    ";
       cout<<"\n    ";
       cout<<"\nenter your choice:- ";
       cin>>ch;
       switch(ch)
       {
       case 1:cout<<"\nIts-Fluorine";
       cout<<"\nAtomic number-9";
       cout<<"\nAtomic weight-19";
       cout<<"\nSymbol-F";
       cout<<"\nDate discovered-1772";
       break;
       case 2:cout<<"\nIts Francium ";
       cout<<"\nAtomic number- 87";
       cout<<"\nAtomic weight-223";
       cout<<"\nSymbol-Fr";
       cout<<"\nDate discovered-1939";
       break;
       case 3:cout<<"\nIts Fermium";
       cout<<"\nAtomic number-100";
       cout<<"\nAtomic weight-257";
       cout<<"\nSymbol-Fm";
       cout<<"\nDate discovered-1955";
       break;
       default:cout<<"\nthis is wrong choice please select the element given above";
       }
       break;
       case'g':cout<<"\n1.gallium       ";
       cout<<"\n2.germanium       ";
       cout<<"\n3.gadolinium       ";
       cout<<"\n4.gold       ";
       cout<<"\n       ";
       cout<<"\n       ";
       cout<<"\nenter your choice:- ";
       cin>>ch;
       switch(ch)
       {
       case 1:cout<<"\nIts-Gallium";
       cout<<"\nAtomic number-31";
       cout<<"\nAtomic weight-69";
       cout<<"\nSymbol-Ga";
       cout<<"\nDate discovered-1875";
       break;
       case 2:cout<<"\nItsGermanium";
       cout<<"\nAtomic number-32";
       cout<<"\nAtomic weight-72";
       cout<<"\nSymbol-Ge";
       cout<<"\nDate discovered-1886";
       break;
       case 3:cout<<"\nIts Gadolinium";
       cout<<"\nAtomic number-64";
       cout<<"\nAtomic weight-157";
       cout<<"\nSymbol-Gd";
       cout<<"\nDate discovered-1886";
       break;
       case 4:cout<<"\nIts Gold";
       cout<<"\nAtomic number-79";
       cout<<"\nAtomic weight-197";
       cout<<"\nSymbol-Au";
       cout<<"\nDate discovered-Prehistoric";
       break;
       default:cout<<"\nthis is wrong choice please select the element given above";
       }
       break;
       case 'h':cout<<"\n1.hydrogen ";
       cout<<"\n2.helium ";
       cout<<"\n3.holmium ";
       cout<<"\n4.hafnium ";
       cout<<"\n5.hassium ";
       cout<<"\n ";
       cout<<"\n ";
       cout<<"\nenter your choice:-";
       cin>>ch;
       switch(ch)
       {
       case 1:cout<<"\nIts-Hydrogen ";
       cout<<"\nAtomic number-1";
       cout<<"\nAtomic weight-1";
       cout<<"\nSymbol-H";
       cout<<"\nDate discovered-1799";
       break;
       case 2:cout<<"\nIts-Helium";
       cout<<"\nAtomic number-2";
       cout<<"\nAtomic weight-4";
       cout<<"\nSymbol-He";
       cout<<"\nDate discovered-1866";
       break;
       case 3:cout<<"\nIts Holmium";
       cout<<"\nAtomic number-67";
       cout<<"\nAtomic weight-165";
       cout<<"\nSymbol-Ho";
       cout<<"\nDate discovered-1879";
       break;
       case 4:cout<<"\nIts Hafnium  ";
       cout<<"\nAtomic number- 72";
       cout<<"\nAtomic weight-178";
       cout<<"\nSymbol- Hf";
       cout<<"\nDate discovered-1913";
       break;
       case 5:cout<<"\nIts Hassium";
       cout<<"\nAtomic number-108";
       cout<<"\nAtomic weight- 263";
       cout<<"\nSymbol-Hs";
       cout<<"\nDate discovered-1984";
       break;
       default:cout<<"\nthis is wrong !choice please select element given above";
       }
       break;
       case 'i':cout<<"\n1.iron ";
       cout<<"\n2.indium ";
       cout<<"\n3.iodine ";
       cout<<"\n4.iridium ";
       cout<<"\n ";
       cout<<"\n ";
       cout<<"\nenter your choice:-";
       cin>>ch;
       switch(ch)
       {
       case 1:cout<<"\nIts-Iron";
       cout<<"\nAtomic number- 26";
       cout<<"\nAtomic weight-55";
       cout<<"\nSymbol-Fe";
       cout<<"\nDate discovered-Prehistoric";
       break;
       case 2:cout<<"\nIts-indium";
       cout<<"\nAtomic number-49";
       cout<<"\nAtomic weight-115";
       cout<<"\nSymbol-In";
       cout<<"\nDate discovered-1863";
       break;
       case 3:cout<<"\nIts Iodine";
       cout<<"\nAtomic number- 53";
       cout<<"\nAtomic weight-128";
       cout<<"\nSymbol-I";
       cout<<"\nDate discovered-1811";
       break;
       case 4:cout<<"\nIts Iridium";
       cout<<"\nAtomic number-77";
       cout<<"\nAtomic weight-192";
       cout<<"\nSymbol-Ir";
       cout<<"\nDate discovered-1804";
       break;
       default:cout<<"\nthis is wrong!choice please select the element given above";
       }
       break;
       case 'k':cout<<"\n1.Krypton ";
       cout<<"\n ";
       cout<<"\nenter your choice:-";
       cin>>ch;
       switch(ch)
       {
       case 1:cout<<"\nIts-krypton";
       cout<<"\nAtomic number-36";
       cout<<"\nAtomic weight-83";
       cout<<"\nSymbol-kr";
       cout<<"\nDate discovered-1898";
       break;
       default:cout<<"\nthis is wrong choice please select the element given above";
       }
       break;
       case 'l':cout<<"\n1.lithium ";
       cout<<"\n2.lanthanum ";
       cout<<"\n3.lutetium ";
       cout<<"\n4.lawrencium ";
       cout<<"\n5.lead ";
       cout<<"\n ";
       cout<<"\n ";
       cout<<"\nenter your choice:-";
       cin>>ch;
       switch(ch)
       {
       case 1:cout<<"\nIts-Lithium";
       cout<<"\nAtomic number-3";
       cout<<"\nAtomic weight-7";
       cout<<"\nSymbol-Li";
       cout<<"\nDate discovered-1817";
       break;
       case 2:cout<<"\nIts Lanthanum ";
       cout<<"\nAtomic number-57";
       cout<<"\nAtomic weight-140";
       cout<<"\nSymbol-La";
       cout<<"\nDate discovered-1839";
       break;
       case 3:cout<<"\nIts Lutetium ";
       cout<<"\nAtomic number-71";
       cout<<"\nAtomic weight-175";
       cout<<"\nSymbol-Lu";
       cout<<"\nDate discovered- 1907" ;
       break;
       case 4:cout<<"\nIts Lawrncium ";
       cout<<"\nAtomic number-103";
       cout<<"\nAtomic weight-260";
       cout<<"\nSymbol-Lr";
       cout<<"\nDate discovered-1961";
       break;
       case 5:cout<<"\nIts Lead";
       cout<<"\nAtomic number-82";
       cout<<"\nAtomic weight-207";
       cout<<"\nSymbol- pb";
       cout<<"\nDate discovered-prehistoric";
       break;
       default:cout<<"\nthis is wrong!choice please select the element given above";
       }
       break;
       case 'm':cout<<"\n1.magnesium ";
       cout<<"\n2.maganese  ";
       cout<<"\n3.molybdenum  ";
       cout<<"\n4.mercury  ";
       cout<<"\n5.mendelevium  ";
       cout<<"\n6.meitnerium  ";
       cout<<"\n  ";
       cout<<"\n  ";
       cout<<"\nenter your choice:- ";
       cin>>ch;
       switch(ch)
       {
       case 1:cout<<"\nIts-Magnessium";
       cout<<"\nAtomic number-12";
       cout<<"\nAtomic weight-24";
       cout<<"\nSymbol-Mg";
       cout<<"\nDate discovered-1755";
       break;
       case 2:cout<<"\nIts-Manganese";
       cout<<"\nAtomic number-25";
       cout<<"\nAtomic weight-55";
       cout<<"\nSymbol-Mn";
       cout<<"\nDate discovered-1774";
       break;
       case 3:cout<<"\nIts-Molybdenum";
       cout<<"\nAtomic number-42";
       cout<<"\nAtomic weight-95";
       cout<<"\nSymbol-Mo";
       cout<<"\nDate discovered-1781";
       break;
       case 4:cout<<"\nIts Mercury ";
       cout<<"\nAtomic number-80";
       cout<<"\nAtomic weight-200";
       cout<<"\nSymbol-Hg";
       cout<<"\nDate discovered-prehistoric";
       break;
       case 5:cout<<"\nIts Mendelevium";
       cout<<"\nAtomic number-101";
       cout<<"\nAtomic weight-258";
       cout<<"\nSymbol-Md";
       cout<<"\nDate discovered-1955";
       break;
       case 6:cout<<"\nIts Meitnerium";
       cout<<"\nAtomic number-109";
       cout<<"\nAtomic weight-268";
       cout<<"\nSymbol-Mt";
       cout<<"\nDate discovered-1982";
       break;
       default:cout<<"\n this is wrong choice please select the element given above";
       }
       break;
       case 'n':cout<<"\n1.nitrogen ";
       cout<<"\n2.neon ";
       cout<<"\n3.nickel ";
       cout<<"\n4.niobium ";
       cout<<"\n5.neodymium ";
       cout<<"\n6.neptunium ";
       cout<<"\n7.nobelium ";
       cout<<"\n ";
       cout<<"\n ";
       cout<<"\nenter your choice:-";
       cin>>ch;
       switch(ch)
       {
       case 1:cout<<"\nIts-Nitrogen";
       cout<<"\nAtomic number-7";
       cout<<"\nAtomic weight-14";
       cout<<"\nSymbol-N";
       cout<<"\nDate discovered-1772";
       break;
       case 2:cout<<"\nIts-Neon";
       cout<<"\nAtomic number-10";
       cout<<"\nAtomic weight-20";
       cout<<"\nSymbol-N";
       cout<<"\nDate discovered-1898";
       break;
       case 3:cout<<"\nIts-Nickel";
       cout<<"\nAtomic number-28";
       cout<<"\nAtomic weight-59";
       cout<<"\nSymbol-Ni";
       cout<<"\nDate discovered-1751";
       break;
       case 4:cout<<"\nIts-Niobium";
       cout<<"\nAtomic number-41";
       cout<<"\nAtomic weight-92";
       cout<<"\nSymbol-Nb";
       cout<<"\nDate discovered-1891";
       break;
       case 5:cout<<"\nIts Neodymium";
       cout<<"\nAtomic number-60";
       cout<<"\nAtomic weight-144";
       cout<<"\nSymbol-Nd";
       cout<<"\nDate discovered-1885";
       break;
       case 6:cout<<"\nIts Neptunium";
       cout<<"\nAtomic number-93";
       cout<<"\nAtomic weight-237";
       cout<<"\nSymbol-Np";
       cout<<"\nDate discovered-1940";
       break;
       case 7:cout<<"\nIts Nobelium";
       cout<<"\nAtomic number-102";
       cout<<"\nAtomic weight-259";
       cout<<"\nSymbol-No";
       cout<<"\nDate discovered-1958";
       break;
       default:cout<<"\nthis is wrong! choice please select the correct element given above";
       }
       break;
       case 'o':cout<<"\n1.oxygen ";
       cout<<"\n2.osmium ";
       cout<<"\n ";
       cout<<"\n ";
       cout<<"\nenter your choice:-";
       cin>>ch;
       switch(ch)
       {
       case 1:cout<<"\nIts-Oxygen";
       cout<<"\nAtomic number-8";
       cout<<"\nAtomic weight-16";
       cout<<"\nSymbol-O";
       cout<<"\nDate discovered-  1774";
       break;
       case 2:cout<<"\nIts Osmium";
       cout<<"\nAtomic number-76";
       cout<<"\nAtomic weight- 190";
       cout<<"\nSymbol-Os";
       cout<<"\nDate discovered-1804";
       break;
       default:cout<<"\nthis is wrong choice please choice the correct element given above";
       }
       break;
       case 'p':cout<<"\n1.phosphorus    ";
       cout<<"\n2.potassium    ";
       cout<<"\n3.palladium    ";
       cout<<"\n4.praseodymium    ";
       cout<<"\n5.promethium    ";
       cout<<"\n6.platinum    ";
cout<<"\n7.polonium    ";
cout<<"\n8.protactinium    ";
	cout<<"\n9.plutonium    ";
	cout<<"\n    ";
	cout<<"\n    ";
	cout<<"\nenter your choice    ";
	cin>>ch;
	switch(ch)
	{
	case 1:cout<<"\nIts-Phosphorus";
       cout<<"\nAtomic number-15";
       cout<<"\nAtomic weight-31";
       cout<<"\nSymbol-P";
       cout<<"\nDate discovered-1674";
       break;
       case 2:cout<<"\nIts-Potassium";
       cout<<"\nAtomic number-19";
       cout<<"\nAtomic weight-39";
       cout<<"\nSymbol-K";
       cout<<"\nDate discovered-1807";
       break;
       case 3:cout<<"\nIts-palladium";
       cout<<"\nAtomic number- 46";
       cout<<"\nAtomic weight-106";
       cout<<"\nSymbol-Pd";
       cout<<"\nDate discovered-1804";
       break;
       case 4:cout<<"\nIts Praseodymium ";
       cout<<"\nAtomic number-59";
       cout<<"\nAtomic weight-141";
       cout<<"\nSymbol-Pr";
       cout<<"\nDate discovered-1885";
       break;
       case 5:cout<<"\nIts Promethium ";
       cout<<"\nAtomic number-61";
       cout<<"\nAtomic weight-145";
       cout<<"\nSymbol-Pm";
       cout<<"\nDate discovered-1945";
       break;
       case 6:cout<<"\nIts Platinum";
       cout<<"\nAtomic number- 78";
       cout<<"\nAtomic weight-195";
       cout<<"\nSymbol-Pt";
       cout<<"\nDate discovered-1557";
       break;
       case 7:cout<<"\nIts Polonium";
       cout<<"\nAtomic number-84";
       cout<<"\nAtomic weight-209";
       cout<<"\nSymbol-Po";
       cout<<"\nDate discovered-1898";
       break;
       case 8:cout<<"\nIts Protactinium";
       cout<<"\nAtomic number-91";
       cout<<"\nAtomic weight-231";
       cout<<"\nSymbol-Pa";
       cout<<"\nDate discovered-1913";
       break;
       case 9:cout<<"\nIts Plutonium";
       cout<<"\nAtomic number- 94";
       cout<<"\nAtomic weight-244";
       cout<<"\nSymbol-Pu";
       cout<<"\nDate discovered-1940";
       break;
       default:cout<<"\n this is wrong!choice please select the correct element given above";
       }
       break;
       case 'r':cout<<"\n1.rubidium ";
       cout<<"\n2.ruthenium ";
       cout<<"\n3.rhodium ";
       cout<<"\n4.rhenium ";
	cout<<"\n5.radon ";
	cout<<"\n6.radium ";
	cout<<"\n7.rutherfordium ";
	cout<<"\n8.roentgenium";
	cout<<"\n ";
	cout<<"\n ";
	cout<<"\nenter your choice:- ";
	cin>>ch;
	switch(ch)
	{
	case 1:cout<<"\nIts-Rubidium";
       cout<<"\nAtomic number-37";
       cout<<"\nAtomic weight-85";
       cout<<"\nSymbol-Rb";
       cout<<"\nDate discovered-1861";
       break;
       case 2:cout<<"\nIts-Ruthenium";
       cout<<"\nAtomic number-44";
       cout<<"\nAtomic weight-101";
       cout<<"\nSymbol-Ru";
       cout<<"\nDate discovered-1827";
       break;
       case 3:cout<<"\nIts-Rhodium";
       cout<<"\nAtomic number-45";
       cout<<"\nAtomic weight-103";
       cout<<"\nSymbol-Rh";
       cout<<"\nDate discovered-1804";
       break;
       case 4:cout<<"\nIts Rhenium";
       cout<<"\nAtomic number-75";
       cout<<"\nAtomic weight- 186";
       cout<<"\nSymbol-Re";
       cout<<"\nDate discovered-1925";
       break;
       case 5:cout<<"\nIts Radon";
       cout<<"\nAtomic number-86";
       cout<<"\nAtomic weight-222";
       cout<<"\nSymbol-Rn";
       cout<<"\nDate discovered-1900";
       break;
       case 6:cout<<"\nIts Radium";
       cout<<"\nAtomic number-88";
       cout<<"\nAtomic weight-226";
       cout<<"\nSymbol-Ra";
       cout<<"\nDate discovered-1898";
       break;
       case 7:cout<<"\nIts Rutherfordium";
       cout<<"\nAtomic number-104";
       cout<<"\nAtomic weight-261";
       cout<<"\nSymbol-Rf";
       cout<<"\nDate discovered-1969";
       break;
       case 8:cout<<"\nIts Roentgenium";
       cout<<"\nAtomic number-111";
       cout<<"\nAtomic weight-272";
       cout<<"\nSymbol-Rg";
       cout<<"\nDate discovered-1994";
       break;
       default:cout<<"\nthis is wrong choice please select the correct element given above";
       }
       break;
       case 's':cout<<"\n1.sodium ";
       cout<<"\n2.silicon ";
       cout<<"\n3.sulphur ";
       cout<<"\n4.scandium ";
       cout<<"\n5.selenium ";
       cout<<"\n6.strontium ";
       cout<<"\n7.silver ";
       cout<<"\n8.samarium ";
       cout<<"\n9.seaborgium ";
       cout<<"\n ";
       cout<<"\n ";
       cout<<"\nenter your choice:-";
       cin>>ch;
       switch(ch)
       {
       case1:cout<<"\nIts-Sodium";
       cout<<"\nAtomic number-11";
       cout<<"\nAtomic weight-23";
       cout<<"\nSymbol-Na";
       cout<<"\nDate discovered-1807";
       break;
       case 2:cout<<"\nIts-Silicon";
       cout<<"\nAtomic number-14";
       cout<<"\nAtomic weight-28";
       cout<<"\nSymbol-Si";
       cout<<"\nDate discovered-1832";
       break;
       case 3:cout<<"\nIts-sulphur";
       cout<<"\nAtomic number-16";
       cout<<"\nAtomic weight-32";
       cout<<"\nSymbol-S";
       cout<<"\nDate discovered-Prehistoric";
       break;
       case 4:cout<<"\nIts-scandium";
       cout<<"\nAtomic number-21";
       cout<<"\nAtomic weight-44";
       cout<<"\nSymbol-Sc";
       cout<<"\nDate discovered-1876";
       break;
       case 5:cout<<"\nIts-Selenium";
       cout<<"\nAtomic number-34";
       cout<<"\nAtomic weight-78";
       cout<<"\nSymbol-Se";
       cout<<"\nDate discovered-1817";
       break;
       case 6:cout<<"\nIts-strotium";
       cout<<"\nAtomic number-38";
       cout<<"\nAtomic weight-87";
       cout<<"\nSymbol-Sr";
       cout<<"\nDate discovered-1808";
       break;
       case 7:cout<<"\nIts-Silver";
       cout<<"\nAtomic number-47";
       cout<<"\nAtomic weight-108";
       cout<<"\nSymbol-Ag";
       cout<<"\nDate discovered-Prehistoric";
       break;
       case 8:cout<<"\nIts Samarium";
       cout<<"\nAtomic number-62";
       cout<<"\nAtomic weight-150";
       cout<<"\nSymbol-Sm";
       cout<<"\nDate discovered-1879";
       break;
       case 9:cout<<"\nIts Seaborgium";
       cout<<"\nAtomic number-106";
       cout<<"\nAtomic weight-266";
       cout<<"\nSymbol-Sg";
       cout<<"\nDate discovered-1974";
       break;
       default:cout<<"\nthis is wrong! choice please the correct element given above";
       }
       break;
       case 't':cout<<"\n1.titanium ";
		cout<<"\n2.technetium ";
		cout<<"\n3.tin ";
		cout<<"\n4.tellurium ";
		cout<<"\n5.terbium ";
		cout<<"\n6.thulium ";
		cout<<"\n7.tantalum ";
		cout<<"\n8.tungsten ";
		cout<<"\n9.thallium ";
		cout<<"\n10.thorium ";
		cout<<"\n ";
		cout<<"\n ";
		cout<<"\nenter your choice:-";
		cin>>ch;
		switch(ch)
		{
case 1:cout<<"\nIts-Titanium";
       cout<<"\nAtomic number-22";
       cout<<"\nAtomic weight-47";
       cout<<"\nSymbol-Ti";
       cout<<"\nDate discovered-1790";
       break;
	case 2:cout<<"\nIts-Technetium";
       cout<<"\nAtomic number-43";
       cout<<"\nAtomic weight-98";
       cout<<"\nSymbol-Tc";
       cout<<"\nDate discovered-1937";
       break;
       case 3:cout<<"\nIts-Tin";
       cout<<"\nAtomic number-50";
       cout<<"\nAtomic weight-119";
       cout<<"\nSymbol-Sn";
       cout<<"\nDate discovered-Prehistoric";
       break;
       case 4:cout<<"\nIts Tellurium";
       cout<<"\nAtomic number-52";
       cout<<"\nAtomic weight-127";
       cout<<"\nSymbol-Te";
       cout<<"\nDate discovered-1782";
       break;
       case 5:cout<<"\nIts Terbium";
       cout<<"\nAtomic number-65";
       cout<<"\nAtomic weight-159";
       cout<<"\nSymbol-Tb";
       cout<<"\nDate discovered-1843";
       break;
       case 6:cout<<"\nIts Thulium";
       cout<<"\nAtomic number-69";
       cout<<"\nAtomic weight-169";
       cout<<"\nSymbol-Tm";
       cout<<"\nDate discovered-1879";
       break;
       case 7:cout<<"\nIts Tantalum";
       cout<<"\nAtomic number-73";
       cout<<"\nAtomic weight-180";
       cout<<"\nSymbol-Ta";
       cout<<"\nDate discovered-1802";
       break;
       case 8:cout<<"\nIts Tungsten";
       cout<<"\nAtomic number-74";
       cout<<"\nAtomic weight-183";
       cout<<"\nSymbol-W";
       cout<<"\nDate discovered-1783";
       break;
       case 9:cout<<"\nIts Thallium";
       cout<<"\nAtomic number-81";
       cout<<"\nAtomic weight-204";
       cout<<"\nSymbol-Tl";
       cout<<"\nDate discovered-1861";
       break;
       case 10:cout<<"\nIts Thorium";
       cout<<"\nAtomic number-90";
       cout<<"\nAtomic weight-232";
       cout<<"\nSymbol-Th";
       cout<<"\nDate discovered-1828";
       break;
       default:cout<<"\nthis is wrong choice please select the correct element given above";
       }
       break;
       case 'u':cout<<"\n1.uranium";
       cout<<"\n ";
       cout<<"\n ";
       cout<<"\nenter your choice:-";
       cin>>ch;
       switch(ch)
       {
       case 1:cout<<"\nIts Uranium";
       cout<<"\nAtomic number-92";
       cout<<"\nAtomic weight-238";
       cout<<"\nSymbol-U";
       cout<<"\nDate discovered-1789";
       break;
       default:cout<<"\nthis is wrong choice please select the correct element given above";
       }
       break;
       case 'v':cout<<"\n1.vandium  ";
       cout<<"\  ";
       cout<<"\nenter your choice:- ";
       cin>>ch;
       switch(ch)
       {
       case 1:cout<<"\nIts-Vanadium";
       cout<<"\nAtomic number-23";
       cout<<"\nAtomic weight-50";
       cout<<"\nSymbol-V";
       cout<<"\nDate discovered-1801";
       break;
       default:cout<<"\nthis is wrong choice please select the correct element given above";
       }
       break;
       case 'x':cout<<"\n1.xenon ";
       cout<<"\n ";
       cout<<"\nenter your choice:-";
       cin>>ch;
       switch(ch)
       {
       case 1:cout<<"\nIts Xenon";
       cout<<"\nAtomic number-54";
       cout<<"\nAtomic weight-131";
       cout<<"\nSymbol-Xe";
       cout<<"\nDate discovered-1898";
       break;
       default:cout<<"\n this is wrong choice please select the correct element given above";
       }
       break;
       case 'y':cout<<"\n1.ytterbium";
       cout<<"\n ";
       cout<<"\nenter yoyr choice:-";
       cin>>ch;
       switch(ch)
       {
       case 1:cout<<"\nIts Ytterbium";
       cout<<"\nAtomic number-70";
       cout<<"\nAtomic weight-173";
       cout<<"\nSymbol-Yb";
       cout<<"\nDate discovered- 1878";
       break;
       default:cout<<"\nthis is wrong!choice please select the correct element given above";
       }
       break;
       case 'z':cout<<"\n1.zinc  ";
       cout<<"\n2.zirconium  ";
       cout<<"\n  ";
       cout<<"\n  ";
       cout<<"\nenter your choice:- ";
       cin>>ch;
       switch(ch)
       {
       case 1:cout<<"\nIts-Zinc";
       cout<<"\nAtomic number-30";
       cout<<"\nAtomic weight-65";
       cout<<"\nSymbol-Zn";
       cout<<"\nDate discovered-Prehistoric";
       break;
       case 2:cout<<"\nIts-Zirconium";
       cout<<"\nAtomic number-40";
       cout<<"\nAtomic weight-91";
       cout<<"\nSymbol-Zr";
       cout<<"\nDate discovered-1789";
       break;
       default:cout<<"\n this is wrong choice please select the correct element given above";
       }
       break;
       default:cout<<"\n their is no element found whose first word starting with:-"<<na;
       cout<<"\n           ";
       cout<<"\n           ";
       cout<<"\n           ";
       cout<<"\n           ";
	}
	cout<<"\n           ";
	cout<<"\n           ";

	cout<<"\nwhile you want to search it again(y/n):-";
	cin>>se;
	}while(se=='Y'||se=='y');
	 }
	 else if(choice==4)
	 {
	 clrscr();
int choices,gc,gn;
char ch='y';
do
{
{
cout<<"\n            ____________________________________ ";
cout<<"\n           | search the elements by the groups  |                ";
cout<<"\n           | <<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>> | ";
cout<<"\n            ------------------------------------ ";
cout<<"\n                        ";
cout<<"\n                        ";
cout<<"\n  press any key to see the periodic table:-               ";
cout<<"\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!           ";
getch();
cout<<"\n|H |                                                                 |He|";
cout<<"\n|Li||Be|                                        |B ||C ||N ||O ||F ||Ne|";
cout<<"\n|Na||Mg|                                        |Al||Si||P ||S ||Cl||Ar|";
cout<<"\n|K ||Ca||Sc||Ti||V|||Cr||Mn||Fe||Co||Ni||Cu||Zn||Ga||Ge||As||Se||Br||Kr|";
cout<<"\n|Rb||Sr||Y ||Zr||Nb||Mo||Tc||Ru||Rh||Pd||Ag||Cd||In||Sn||Sb||Te|| I||Xe|";
cout<<"\n|Cs||Ba||La||Hf||Ta||W ||Re||Os||Ir||Pt||Au||Hg||Tl||Pb||Bi||Po||At||Rn|";
cout<<"\n|Fr||Ra||lr||Rf||Db||Sg||Bh||Hs||Mt||Ds||Rg||uub||uUt||uuq||Uup||UUh|";
cout<<"\n  ";
cout<<"\n  ";
cout<<"\n  press any key to search the elements by the groups:-  ";
getch();
clrscr();
cout<<"\n groups 1:-|H | group 2:-|Be| group 3:-  |sc| group 4:-|ti| group 5:-|v |";
cout<<"\n           |Li|          |Mg|            |y |          |zr|          |nb| ";
cout<<"\n           |Na|          |Ca|            |La|          |hf|          |ta| ";
cout<<"\n           |K |          |Sr|            |lr|          |rf|          |db|";
cout<<"\n           |Rb|          |Ba|      ";
cout<<"\n           |Cs|          |Ra|         ";
cout<<"\n           |Fr|  ";
cout<<"\n         ";
cout<<"\ngroup 6:-|cr| group 7:-|mn| group 8:-|fe| group 9:-|co| group 10:-|ni|  ";
cout<<"\n         |mo|          |tc|          |ru|          |rh|           |pd|  ";
cout<<"\n         |w |          |re|          |os|          |Ir|           |pt|   ";
cout<<"\n         |sg|          |bh|          |hs|          |mt|           |ds|  ";
cout<<"\n                                       ";
cout<<"\ngroup 11:-|cu| group 12:-|zn| group 13:-| b| group 14:-| c| group 15:-| N|";
cout<<"\n	   |Ag|		  |cd|		 |al|     	|si|	       | P|";
cout<<"\n	   |Au|		  |hg|		 |Ga|		|ge|	       |As|";
cout<<"\n	   |Rg|		  |uub|		 |In|		|sn|	       |sb|";
cout<<"\n	   				 |Tl|		|pb|	       |bi|";
cout<<"\n					 |Uut|		|uuq|	       |uup|";
cout<<"\n              ";
cout<<"\npress any key to see the groups between 16-18";

getch();
clrscr();
cout<<"\ngroup 16:-|o | group 17:-|f  | group 18:-|he|";
cout<<"\n          |s |           |cl |	          |ne|";
cout<<"\n          |se|           |br |	 	  |Ar|";
cout<<"\n          |te|           |I  |	 	  |kr|";
cout<<"\n          |po|   	  |At |		  |xe|";
cout<<"\n          |uuh|  	  		  |rn|";
cout<<"\n 				               ";
cout<<"\n              ";
cout<<"\n              ";
cout<<"\n  enter the group number to search the element :- ";
cout<<"\n  ::::::::::::::::::::::::::::::::::::::::::::::::           ";
cin>>gn;
clrscr();
switch(gn)
{case 1:
       cout<<"\n groups 1:-1.|H |";
       cout<<"\n           2.|Li|";
       cout<<"\n           3.|Na|";
       cout<<"\n           4.|K |";
       cout<<"\n           5.|Rb|";
       cout<<"\n           6.|Cs|";
       cout<<"\n           7.|Fr|";
cout<<"\n  ";
cout<<"\n enter your choice:-";
cin>>gc;
switch(gc)
{
case 1:cout<<"\nIts-Hydrogen ";
       cout<<"\nAtomic number-1";
       cout<<"\nAtomic weight-1";
       cout<<"\nSymbol-H";
       cout<<"\nDate discovered-1799";
       break;
       case 2:cout<<"\nIts-Lithium";
       cout<<"\nAtomic number-3";
       cout<<"\nAtomic weight-7";
       cout<<"\nSymbol-Li";
       cout<<"\nDate discovered-1817";
       break;
       case 3:cout<<"\nIts-Sodium";
       cout<<"\nAtomic number-11";
       cout<<"\nAtomic weight-23";
       cout<<"\nSymbol-Na";
       cout<<"\nDate discovered-1807";
       break;
       case 4:cout<<"\nIts-Potassium";
       cout<<"\nAtomic number-19";
       cout<<"\nAtomic weight-39";
       cout<<"\nSymbol-K";
       cout<<"\nDate discovered-1807";
       break;
       case 5:cout<<"\nIts-Rubidium";
       cout<<"\nAtomic number-37";
       cout<<"\nAtomic weight-85";
       cout<<"\nSymbol-Rb";
       cout<<"\nDate discovered-1861";
       break;
       case 6:cout<<"\nIts Cesium";
       cout<<"\nAtomic number-55";
       cout<<"\nAtomic weight-133";
       cout<<"\nSymbol-Cs";
       cout<<"\nDate discovered-1860";
       break;
       case 7:cout<<"\nIts Francium ";
       cout<<"\nAtomic number- 87";
       cout<<"\nAtomic weight-223";
       cout<<"\nSymbol-Fr";
       cout<<"\nDate discovered-1939";
       break;
      default:cout<<"\nplease enter the correct choice";
}
break;
case 2:cout<<"\n group 2:-1.|be|  ";
       cout<<"\n          2.|mg|   ";
       cout<<"\n          3.|ca|   ";
       cout<<"\n          4.|sr|   ";
       cout<<"\n          5.|ba|   ";
       cout<<"\n          6.|ra|   ";
       cout<<"\n             ";
       cout<<"\n enter your choice:-";
       cin>>gc;
       switch(gc)
       {
       case 1:cout<<"\nIts-Beryllium";
       cout<<"\nAtomic number-4";
       cout<<"\nAtomic weight-9";
       cout<<"\nSymbol-Be";
       cout<<"\nDate discovered-1798";
       break;
       case 2:cout<<"\nIts-Magnessium";
       cout<<"\nAtomic number-12";
       cout<<"\nAtomic weight-24";
       cout<<"\nSymbol-Mg";
       cout<<"\nDate discovered-1755";
       break;
       case 3:cout<<"\nIts-Calcium";
       cout<<"\nAtomic number-20";
       cout<<"\nAtomic weight-40";
       cout<<"\nSymbol-Ca";
       cout<<"\nDate discovered-1808";
       break;
       case 4:cout<<"\nIts-strotium";
       cout<<"\nAtomic number-38";
       cout<<"\nAtomic weight-87";
       cout<<"\nSymbol-Sr";
       cout<<"\nDate discovered-1808";
       break;
       case 5:cout<<"\nIts Barium";
       cout<<"\nAtomic number- 56";
       cout<<"\nAtomic weight-137";
       cout<<"\nSymbol-Ba";
       cout<<"\nDate discovered-1808";
       break;
       case 6:cout<<"\nIts Radium";
       cout<<"\nAtomic number-88";
       cout<<"\nAtomic weight-226";
       cout<<"\nSymbol-Ra";
       cout<<"\nDate discovered-1898";
       break;
       default:cout<<"\nplease select the correct choice";
 }
break;
case 3:cout<<"\ngroup 3:-1.|sc| ";
       cout<<"\n	 2.|Y | ";
       cout<<"\n	 3.|lu| ";
       cout<<"\n 	 4.|lr| ";
       cout<<"\n ";
       cout<<"\n enter your choice:-";
       cin>>gc;
       switch(gc)
       {
       case 1:cout<<"\nIts-scandium";
       cout<<"\nAtomic number-21";
       cout<<"\nAtomic weight-44";
       cout<<"\nSymbol-Sc";
       cout<<"\nDate discovered-1876";
       break;
       case 2:cout<<"\nIts-Yttrium";
       cout<<"\nAtomic number-39";
       cout<<"\nAtomic weight-89";
       cout<<"\nSymbol-Y";
       cout<<"\nDate discovered-1794";
       break;
       case 3:cout<<"\nIts Lutetium ";
       cout<<"\nAtomic number-71";
       cout<<"\nAtomic weight-175";
       cout<<"\nSymbol-Lu";
       cout<<"\nDate discovered- 1907" ;
       break;
       case 4:cout<<"\nIts Lawrncium ";
       cout<<"\nAtomic number-103";
       cout<<"\nAtomic weight-260";
       cout<<"\nSymbol-Lr";
       cout<<"\nDate discovered-1961";
       break;
       default:cout<<"\nplease enter a correct chopice";
       }
       break;
       case 4:cout<<"\ngroup 4:-1.|ti| ";
		cout<<"\n	2.|zr| ";
		cout<<"\n	3.|hf| ";
		cout<<"\n	4.|rf| ";
		cout<<"\n ";
		cout<<"\nenter your choice:-";
		cin>>gc;
		switch(gc)
		{
		case 1:cout<<"\nIts-Titanium";
       cout<<"\nAtomic number-22";
       cout<<"\nAtomic weight-47";
       cout<<"\nSymbol-Ti";
       cout<<"\nDate discovered-1790";
       break;
       case 2:cout<<"\nIts-Zirconium";
       cout<<"\nAtomic number-40";
       cout<<"\nAtomic weight-91";
       cout<<"\nSymbol-Zr";
       cout<<"\nDate discovered-1789";
       break;
       case 3:cout<<"\nIts Hafnium  ";
       cout<<"\nAtomic number- 72";
       cout<<"\nAtomic weight-178";
       cout<<"\nSymbol- Hf";
       cout<<"\nDate discovered-1913";
       break;
       case 4:cout<<"\nIts Rutherfordium";
       cout<<"\nAtomic number-104";
       cout<<"\nAtomic weight-261";
       cout<<"\nSymbol-Rf";
       cout<<"\nDate discovered-1969";
       break;
      default:cout<<"\nplease enter the correct choice";
}
break;
case 5:cout<<"\ngroup 5:-1.|v |";
       cout<<"\n         2.|nb|";
       cout<<"\n         3.|ta|";
       cout<<"\n         4.|db|";
	cout<<"\n                  ";
	cout<<"\n enter your choice:-";
	cin>>gc;
	switch(gc)
	{
	case 1:cout<<"\nIts-Vanadium";
       cout<<"\nAtomic number-23";
       cout<<"\nAtomic weight-50";
       cout<<"\nSymbol-V";
       cout<<"\nDate discovered-1801";
       break;
       case 2:cout<<"\nIts-Niobium";
       cout<<"\nAtomic number-41";
       cout<<"\nAtomic weight-92";
       cout<<"\nSymbol-Nb";
       cout<<"\nDate discovered-1891";
       break;
       case 3:cout<<"\nIts Tantalum";
       cout<<"\nAtomic number-73";
       cout<<"\nAtomic weight-180";
       cout<<"\nSymbol-Ta";
       cout<<"\nDate discovered-1802";
       break;
       case 4:cout<<"\nIts Dubnium";
       cout<<"\nAtomic number-105";
       cout<<"\nAtomic weight-262";
       cout<<"\nSymbol-Db";
       cout<<"\nDate discovered-1970";
       break;
       default:cout<<"\nplease enter a correct choice";
}
break;
case 6:cout<<"\ngroup 6:-1.|cr|";
       cout<<"\n         2.|mo|";
       cout<<"\n         3.|w |";
       cout<<"\n         4.|sg|";
       cout<<"\n             ";
       cout<<"\n enter youyr choice:-";
       cin>>gc;
       switch(gc)
       {
       case 1:cout<<"\nIts-Chromium";
       cout<<"\nAtomic number-24";
       cout<<"\nAtomic weight-52";
       cout<<"\nSymbol-cr";
       cout<<"\nDate discovered-1797";
       break;
       case 2:cout<<"\nIts-Molybdenum";
       cout<<"\nAtomic number-42";
       cout<<"\nAtomic weight-95";
       cout<<"\nSymbol-Mo";
       cout<<"\nDate discovered-1781";
       break;
       case 3:cout<<"\nIts Tungsten";
       cout<<"\nAtomic number-74";
       cout<<"\nAtomic weight-183";
       cout<<"\nSymbol-W";
       cout<<"\nDate discovered-1783";
       break;
       case 4:cout<<"\nIts Seaborgium";
       cout<<"\nAtomic number-106";
       cout<<"\nAtomic weight-266";
       cout<<"\nSymbol-Sg";
       cout<<"\nDate discovered-1974";
       break;
       default:cout<<"\nplease enter a correct choice";
}
break;
case 7:cout<<"\ngroup 7:-1.|mn|";
       cout<<"\n         2.|tc|    ";
       cout<<"\n         3.|re|    ";
       cout<<"\n         4.|bh|    ";
       cout<<"\n             ";
       cout<<"\nenter your choice:-";
       cin>>gc;
       switch(gc)
       {
       case 1:cout<<"\nIts-Manganese";
       cout<<"\nAtomic number-25";
       cout<<"\nAtomic weight-55";
       cout<<"\nSymbol-Mn";
       cout<<"\nDate discovered-1774";
       break;
       case 2:cout<<"\nIts-Technetium";
       cout<<"\nAtomic number-43";
       cout<<"\nAtomic weight-98";
       cout<<"\nSymbol-Tc";
       cout<<"\nDate discovered-1937";
       break;
       case 3:cout<<"\nIts Rhenium";
       cout<<"\nAtomic number-75";
       cout<<"\nAtomic weight- 186";
       cout<<"\nSymbol-Re";
       cout<<"\nDate discovered-1925";
       break;
       case 4:cout<<"\nIts Bohrium";
       cout<<"\nAtomic number-107";
       cout<<"\nAtomic weight-262";
       cout<<"\nSymbol-Bh";
       cout<<"\nDate discovered-1976";
       break;
       default:cout<<"\nplease enter a correct choice";
       }
       break;
       case 8:cout<<"\ngroup 8:-1.|fe|";
	      cout<<"\n         2.|ru|     ";
	      cout<<"\n         3.|os|     ";
	      cout<<"\n         4.|hs|     ";
	      cout<<"\n              ";
	      cout<<"\nenter your choice:-";
	      cin>>gc;
	      switch(gc)
	      {
	      case 1:cout<<"\nIts-Iron";
       cout<<"\nAtomic number- 26";
       cout<<"\nAtomic weight-55";
       cout<<"\nSymbol-Fe";
       cout<<"\nDate discovered-prehistoric";
       break;
       case 2:cout<<"\nIts-Ruthenium";
       cout<<"\nAtomic number-44";
       cout<<"\nAtomic weight-101";
       cout<<"\nSymbol-Ru";
       cout<<"\nDate discovered-1827";
       break;
       case 3:cout<<"\nIts Osmium";
       cout<<"\nAtomic number-76";
       cout<<"\nAtomic weight- 190";
       cout<<"\nSymbol-Os";
       cout<<"\nDate discovered-1804";
       break;
       case 4:cout<<"\nIts Hassium";
       cout<<"\nAtomic number-108";
       cout<<"\nAtomic weight- 263";
       cout<<"\nSymbol-Hs";
       cout<<"\nDate discovered-1984";
       break;
       default:cout<<"\nplease enter a correct choice";
       }
       break;
       case 9:cout<<"\ngroup 9:-1.|co|   ";
	      cout<<"\n         2.|rh| ";
	      cout<<"\n         3.|Ir| ";
	      cout<<"\n         4.|mt|   ";
	      cout<<"\n          ";
	      cout<<"\nenter your choice:-";
	      cin>>gc;
	      switch(gc)
	      {
	      case 1:cout<<"\nIts-cobalt";
       cout<<"\nAtomic number-27";
       cout<<"\nAtomic weight-58";
       cout<<"\nSymbol-Co";
       cout<<"\nDate discovered-1730";
       break;
       case 2:cout<<"\nIts-Rhodium";
       cout<<"\nAtomic number-45";
       cout<<"\nAtomic weight-103";
       cout<<"\nSymbol-Rh";
       cout<<"\nDate discovered-1804";
       break;
       case 3:cout<<"\nIts Iridium";
       cout<<"\nAtomic number-77";
       cout<<"\nAtomic weight-192";
       cout<<"\nSymbol-Ir";
       cout<<"\nDate discovered-1804";
       break;
       case 4:cout<<"\nIts Meitnerium";
       cout<<"\nAtomic number-109";
       cout<<"\nAtomic weight-268";
       cout<<"\nSymbol-Mt";
       cout<<"\nDate discovered-1982";
       break;
       default:cout<<"\nplease enter the correct choice";
       }
       break;
       case 10:cout<<"\ngroup 10:-1.|ni|         ";
	       cout<<"\n          2.|pd| ";
	       cout<<"\n          3.|pt|";
	       cout<<"\n          4.|ds| ";
	       cout<<"\n         ";
	       cout<<"\n enter your choice:- ";
	       cin>>gc;
	       switch(gc)
	       {
	       case 1:cout<<"\nIts-Nickel";
       cout<<"\nAtomic number-28";
       cout<<"\nAtomic weight-59";
       cout<<"\nSymbol-Ni";
       cout<<"\nDate discovered-1751";
       break;
       case 2:cout<<"\nIts-palladium";
       cout<<"\nAtomic number- 46";
       cout<<"\nAtomic weight-106";
       cout<<"\nSymbol-Pd";
       cout<<"\nDate discovered-1804";
       break;
       case 3:cout<<"\nIts Platinum";
       cout<<"\nAtomic number- 78";
       cout<<"\nAtomic weight-195";
       cout<<"\nSymbol-Pt";
       cout<<"\nDate discovered-1557";
       break;
       case 4:cout<<"\nIts Darmstadtium";
       cout<<"\nAtomic number-110";
       cout<<"\nAtomic weight-271";
       cout<<"\nSymbol- Ds";
       cout<<"\nDate discovered-1994";
       break;
       default:cout<<"\n please enter a correct choice";
       }
       break;
       case 11:cout<<"\ngroup 11:-1.|cu|          ";
	       cout<<"\n          2.|ag|  ";
	       cout<<"\n          3.|au|";
	       cout<<"\n          4.|rg|";
	       cout<<"\n          ";
	       cout<<"\n          ";
	       cout<<"\n enter your choice:-";
	       cin>>gc;
	       switch(gc)
	       {
	       case 1:cout<<"\nIts-copper";
       cout<<"\nAtomic number-29";
       cout<<"\nAtomic weight-63";
       cout<<"\nSymbol-Cu";
       cout<<"\nDate discovered-prehistoric";
       break;
       case 2:cout<<"\nIts-Silver";
       cout<<"\nAtomic number-47";
       cout<<"\nAtomic weight-108";
       cout<<"\nSymbol-Ag";
       cout<<"\nDate discovered-prehistoric";
       break;
       case 3:cout<<"\nIts Gold";
       cout<<"\nAtomic number-79";
       cout<<"\nAtomic weight-197";
       cout<<"\nSymbol-Au";
       cout<<"\nDate discovered- prehistoric";
       break;
       case 4:cout<<"\nIts Roentgenium";
       cout<<"\nAtomic number-111";
       cout<<"\nAtomic weight-272";
       cout<<"\nSymbol-Rg";
       cout<<"\nDate discovered-1994";
       break;
       default:cout<<"\n please enter the correct choice";
       }
       break;
       case 12:cout<<"\ngroup 12:-1.|zn |      ";
	       cout<<"\n          2.|cd |   ";
	       cout<<"\n          3.|hg |    ";
	       cout<<"\n          4.|uub|    ";
	       cout<<"\n               ";
	       cout<<"\n               ";
	       cout<<"\nenter your choice:-";
	       cin>>gc;
	       switch(gc)
	       {
	       case 1:cout<<"\nIts-Zinc";
       cout<<"\nAtomic number-30";
       cout<<"\nAtomic weight-65";
       cout<<"\nSymbol-Zn";
       cout<<"\nDate discovered-prehistoric";
       break;
       case 2:cout<<"\nIts-Cadmium";
       cout<<"\nAtomic number-48";
       cout<<"\nAtomic weight-112";
       cout<<"\nSymbol-Cd";
       cout<<"\nDate discovered-1817";
       break;
       case 3:cout<<"\nIts Mercury ";
       cout<<"\nAtomic number-80";
       cout<<"\nAtomic weight-200";
       cout<<"\nSymbol-Hg";
       cout<<"\nDate discovered-prehistoric";
       break;
       case 4:cout<<"\nIts Ununbium";
       cout<<"\nAtomic number-112";
       cout<<"\nAtomic weight-277";
       cout<<"\nSymbol-Uub";
       cout<<"\nDate discovered-1996";
       break;
       default:cout<<"\n please enter the correct choice";
       }
       break;
       case 13:cout<<"\ngroup 13:-1.| B |                   ";
	       cout<<"\n          2.|Al |        ";
	       cout<<"\n          3.|Ga |         ";
	       cout<<"\n          4.|In |         ";
	       cout<<"\n          5.|tl |         ";
	       cout<<"\n          6.|uut|         ";
	       cout<<"\n                   ";
	       cout<<"\n                   ";
	       cout<<"\n enter your choice:-";
	       cin>>gc;
	       switch(gc)
	       {
	       case 1:cout<<"\nIts -Boron";
       cout<<"\nAtomic number-5";
       cout<<"\nAtomic weight-10";
       cout<<"\nSymbol-B";
       cout<<"\nDate discovered-1808";
       break;
       case 2:cout<<"\nIts-Aluminium";
       cout<<"\nAtomic number-13";
       cout<<"\nAtomic weight-27";
       cout<<"\nSymbol-Al";
       cout<<"\nDate discovered-1824";
       break;
       case 3:cout<<"\nIts-Gallium";
       cout<<"\nAtomic number-31";
       cout<<"\nAtomic weight-69";
       cout<<"\nSymbol-Ga";
       cout<<"\nDate discovered-1875";
       break;
       case 4:cout<<"\nIts-indium";
       cout<<"\nAtomic number-49";
       cout<<"\nAtomic weight-115";
       cout<<"\nSymbol-In";
       cout<<"\nDate discovered-1863";
       break;
       case 5:cout<<"\nIts Thallium";
       cout<<"\nAtomic number-81";
       cout<<"\nAtomic weight-204";
       cout<<"\nSymbol-Tl";
       cout<<"\nDate discovered-1861";
       break;
       case 6:cout<<"\nIts Ununtrium";
       cout<<"\nAtomic number-113";
       cout<<"\nAtomic weight-284";
       cout<<"\nSymbol-Uut";
       cout<<"\nDate discovered-2003";
       break;
       default:cout<<"\n please!enter the correct choice";
       }
       break;
       case 14:cout<<"\ngroup 14:-1.| c |                 ";
	       cout<<"\n          2.|si |       ";
	       cout<<"\n          3.|Ge |       ";
	       cout<<"\n          4.|sn |      ";
	       cout<<"\n          5.|pb |       ";
	       cout<<"\n          6.|uuq|       ";
	       cout<<"\n                 ";
	       cout<<"\n                 ";
	       cout<<"\n enter your choice:-";
	       cin>>gc;
	       switch(gc)
	       {
	       case 1:cout<<"\nIts-Carbon";
       cout<<"\nAtomic number-6";
       cout<<"\nAtomic weight-12";
       cout<<"\nSymbol-C";
       cout<<"\nDate discovered-prehistoric";
       break;
       case 2:cout<<"\nIts-Silicon";
       cout<<"\nAtomic number-14";
       cout<<"\nAtomic weight-28";
       cout<<"\nSymbol-Si";
       cout<<"\nDate discovered-1832";
       break;
       case 3:cout<<"\nItsGermanium";
       cout<<"\nAtomic number-32";
       cout<<"\nAtomic weight-72";
       cout<<"\nSymbol-Ge";
       cout<<"\nDate discovered-1886";
       break;
       case 4:cout<<"\nIts-Tin";
       cout<<"\nAtomic number-50";
       cout<<"\nAtomic weight-119";
       cout<<"\nSymbol-Sn";
       cout<<"\nDate discovered-prehistoric";
       break;
       case 5:cout<<"\nIts Lead";
       cout<<"\nAtomic number-82";
       cout<<"\nAtomic weight-207";
       cout<<"\nSymbol- pb";
       cout<<"\nDate discovered-prehistoric";
       break;
       case 6:cout<<"\nIts Ununquadium";
       cout<<"\nAtomic number-114";
       cout<<"\nAtomic weight-285";
       cout<<"\nSymbol-uuq";
       cout<<"\nDate discovered-1998";
       break;
       default:cout<<"\n please!enter the correct choice";
       }
       break;
       case 15:cout<<"\ngroup 15:-1.| N |                      ";
	       cout<<"\n          2.| P |            ";
	       cout<<"\n          3.|As |           ";
	       cout<<"\n          4.|sb |            ";
	       cout<<"\n          5.|bi |            ";
	       cout<<"\n          6.|uup|            ";
	       cout<<"\n                      ";
	       cout<<"\n                      ";
	       cout<<"\n enter your choice:-";
	       cin>>gc;
	       switch(gc)
	       {
	       case 1:cout<<"\nIts-Nitrogen";
       cout<<"\nAtomic number-7";
       cout<<"\nAtomic weight-14";
       cout<<"\nSymbol-N";
       cout<<"\nDate discovered-1772";
       break;
       case 2:cout<<"\nIts-Phosphorus";
       cout<<"\nAtomic number-15";
       cout<<"\nAtomic weight-31";
       cout<<"\nSymbol-P";
       cout<<"\nDate discovered-1674";
       break;
       case 3:cout<<"\nIts-Arsenic";
       cout<<"\nAtomic number-33";
       cout<<"\nAtomic weight-75";
       cout<<"\nSymbol-As";
       cout<<"\nDate discovered-prehistoric";
       break;
       case 4:cout<<"\nIts Antinomy ";
       cout<<"\nAtomic number-51";
       cout<<"\nAtomic weight-121";
       cout<<"\nSymbol-Sb";
       cout<<"\nDate discovered-prehistoric";
       break;
       case 5:cout<<"\nItsBismuth ";
       cout<<"\nAtomic number-83";
       cout<<"\nAtomic weight-208";
       cout<<"\nSymbol- Bi";
       cout<<"\nDate discovered-prehistoric";
       break;
       case 6:cout<<"\nIts Ununpentium";
       cout<<"\nAtomic number-115";
       cout<<"\nAtomic weight-288";
       cout<<"\nSymbol-Uup";
       cout<<"\nDate discovered-2003";
       break;
       default:cout<<"\n please!enter the correct choice";
       }
       break ;
       case 16:cout<<"\ngroup 16:-1.| o |                           ";
	       cout<<"\n          2.| s |                 ";
	       cout<<"\n          3.|se |                 ";
	       cout<<"\n          4.|te |                ";
	       cout<<"\n          5.|po |                 ";
	       cout<<"\n          6.|uuh|                ";
	       cout<<"\n                           ";
	       cout<<"\n                           ";
	       cout<<"\n enter your choice:-";
	       cin>>gc;
	       switch(gc)
	       {
	       case 1:cout<<"\nIts-Oxygen";
       cout<<"\nAtomic number-8";
       cout<<"\nAtomic weight-16";
       cout<<"\nSymbol-O";
       cout<<"\nDate discovered-  1774";
       break;
       case 2:cout<<"\nIts-sulphur";
       cout<<"\nAtomic number-16";
       cout<<"\nAtomic weight-32";
       cout<<"\nSymbol-S";
       cout<<"\nDate discovered-prehistoric";
       break;
       case 3:cout<<"\nIts-Selenium";
       cout<<"\nAtomic number-34";
       cout<<"\nAtomic weight-78";
       cout<<"\nSymbol-Se";
       cout<<"\nDate discovered-1817";
       break;
       case 4:cout<<"\nIts Tellurium";
       cout<<"\nAtomic number-52";
       cout<<"\nAtomic weight-127";
       cout<<"\nSymbol-Te";
       cout<<"\nDate discovered-1782";
       break;
       case 5:cout<<"\nIts Polonium";
       cout<<"\nAtomic number-84";
       cout<<"\nAtomic weight-209";
       cout<<"\nSymbol-Po";
       cout<<"\nDate discovered-1898";
       break;
       case 6:cout<<"\nIts Ununhexium";
		cout<<"\nAtomic number-116";
		cout<<"\nAtomic weight-292";
		cout<<"\nSymbol-Uuh";
		cout<<"\nDate discovered-2000";
		break;
		default:cout<<"\n please!enter the correct choice";
		}
		break;
		case 17:cout<<"\ngroup 17:-1.| f|                         ";
			cout<<"\n          2.|cl|               ";
			cout<<"\n          3.|br|               ";
			cout<<"\n          4.|I |               ";
			cout<<"\n          5.|At|               ";
			cout<<"\n                         ";
			cout<<"\n                         ";
			cout<<"\n                         ";
			cout<<"\n enter your choice:-";
			cin>>gc;
			switch(gc)
			{
			case 1:cout<<"\nIts-Fluorine";
       cout<<"\nAtomic number-9";
       cout<<"\nAtomic weight-19";
       cout<<"\nSymbol-F";
       cout<<"\nDate discovered-1772";
       break;
       case 2:cout<<"\nIts-Chlorine";
       cout<<"\nAtomic number-17";
       cout<<"\nAtomic weight-35";
       cout<<"\nSymbol-Cl";
       cout<<"\nDate discovered-1774";
       break;
       case 3:cout<<"\nIts-Bromine";
       cout<<"\nAtomic number-35";
       cout<<"\nAtomic weight-79";
       cout<<"\nSymbol-Br";
       cout<<"\nDate discovered-1826";
       break;
       case 4:cout<<"\nIts Iodine";
       cout<<"\nAtomic number- 53";
       cout<<"\nAtomic weight-128";
       cout<<"\nSymbol-I";
       cout<<"\nDate discovered-1811";
       break;
       case 5:cout<<"\nItsAstatine ";
       cout<<"\nAtomic number-85";
       cout<<"\nAtomic weight-210";
       cout<<"\nSymbol-At";
       cout<<"\nDate discovered-1940";
       break;
       default:cout<<"\n please!enter the correct choice";
       }
       break;
       case 18:cout<<"\ngroup 18:-1.|he|                            ";
	       cout<<"\n          2.|ne|                  ";
	       cout<<"\n          3.|Ar|                  ";
	       cout<<"\n          4.|kr|                  ";
	       cout<<"\n          5.|xe|                  ";
	       cout<<"\n          6.|Rn|                  ";
	       cout<<"\n                            ";
	       cout<<"\n                            ";
	       cout<<"\n enter your choice:-";
	       cin>>gc;
	       switch(gc)
	       {
	       case 1:cout<<"\nIts-Helium";
       cout<<"\nAtomic number-2";
       cout<<"\nAtomic weight-4";
       cout<<"\nSymbol-He";
       cout<<"\nDate discovered-1866";
       break;
       case 2:cout<<"\nIts-Neon";
       cout<<"\nAtomic number-10";
       cout<<"\nAtomic weight-20";
       cout<<"\nSymbol-N";
       cout<<"\nDate discovered-1898";
       break;
       case 3:cout<<"\nIts-Argon";
       cout<<"\nAtomic number-18";
       cout<<"\nAtomic weight-39";
       cout<<"\nSymbol-Ar";
       cout<<"\nDate discovered-1894";
       break;
       case 4:cout<<"\nIts-krypton";
       cout<<"\nAtomic number-36";
       cout<<"\nAtomic weight-83";
       cout<<"\nSymbol-kr";
       cout<<"\nDate discovered-1898";
       break;
       case 5:cout<<"\nIts Xenon";
       cout<<"\nAtomic number-54";
       cout<<"\nAtomic weight-131";
       cout<<"\nSymbol-Xe";
       cout<<"\nDate discovered-1898";
       break;
       case 6:cout<<"\nIts Radon";
       cout<<"\nAtomic number-86";
       cout<<"\nAtomic weight-222";
       cout<<"\nSymbol-Rn";
       cout<<"\nDate discovered-1900";
       break;
       default:cout<<"\n please!enter the correct choice";
	  }
       break;
       }
       }cout<<"\n  ";
       cout<<"\n  ";
       cout<<"\n  ";
       cout<<"\nwant to search more result(y/n):-";
       cin>>ch;
       }while(ch=='y'||ch=='Y');
	} clrscr();
	cout<<"\nWants to enter the Main Menu(y/n):-";
	cin>>op;
	}while(op=='y'||op=='Y');
	getch();
	}
