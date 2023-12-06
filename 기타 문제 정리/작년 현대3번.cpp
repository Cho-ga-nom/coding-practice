//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <string>
//#include <cstring>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//// ½ÃÁ¡, ½Â°´ ÀÎ¿ø¼ö
//char* solution(char*param0, int param1) {
//	string time = param0;
//	char* answer = param0;
//	int year = stoi(time.substr(0, 4));
//	int month = stoi(time.substr(4, 2));
//	vector<pair<string, string>> models;
//
//	if (
//		(year == 1968 && month >= 1) ||
//		(year > 1968 && year < 1980) ||
//		(year == 1980 && month <= 4)
//		) {
//		if (param1 <= 5)
//			models.push_back(make_pair("Cortina*", "(Sedan)"));
//	}
//
//	if (
//		(year == 1975 && month >= 12) ||
//		(year > 1975 && year < 1982) ||
//		(year == 1982 && month <= 1)
//		) {
//		if (param1 <= 5)
//			models.push_back(make_pair("Pony*", "(Sedan)"));
//	}
//
//	if (
//		(year == 1977 && month >= 2) ||
//		(year > 1977 && year < 2004) ||
//		(year == 2004 && month <= 5)
//		) {
//		if (param1 <= 3)
//			models.push_back(make_pair("Porter*", "(Truck)"));
//	}
//
//	if (
//		(year == 1986 && month >= 7) ||
//		(year > 1986 && year < 2023) ||
//		(year == 2023 && month <= 5)
//		) {
//		if (param1 <= 5)
//			models.push_back(make_pair("Grandeur", "(Sedan)"));
//	}
//
//	if (
//		(year == 1990 && month >= 10) ||
//		(year > 1990 && year < 1995) ||
//		(year == 1995 && month <= 12)
//		) {
//		if (param1 <= 5)
//			models.push_back(make_pair("Elantra*", "(Sedan)"));
//	}
//
//	if (
//		(year == 1994 && month >= 6) ||
//		(year > 1994 && year < 2023) ||
//		(year == 2023 && month <= 5)
//		) {
//		if (param1 <= 30)
//			models.push_back(make_pair("Aerotown", "(Bus)"));
//	}
//
//	if (
//		(year == 1999 && month >= 4) ||
//		(year > 1999 && year < 2009) ||
//		(year == 2009 && month <= 12)
//		) {
//		if (param1 <= 5)
//			models.push_back(make_pair("Equus*", "(Sedan)"));
//	}
//
//	if (
//		(year == 2000 && month >= 6) ||
//		(year > 2000 && year < 2023) ||
//		(year == 2023 && month <= 5)
//		) {
//		if (param1 <= 7)
//			models.push_back(make_pair("SantaFe", "(RV)"));
//	}
//
//	if (
//		(year == 2001 && month >= 9) ||
//		(year > 2001 && year < 2008) ||
//		(year == 2008 && month <= 12)
//		) {
//		if (param1 <= 2)
//			models.push_back(make_pair("Tuscani*", "(Coupe)"));
//	}
//
//	if (
//		(year == 2006 && month >= 12) ||
//		(year > 2006 && year < 2023) ||
//		(year == 2023 && month <= 5)
//		) {
//		if (param1 <= 45)
//			models.push_back(make_pair("Universe", "(Bus)"));
//	}
//
//	if (models.size() == 0) {
//		strcpy(answer, "!");
//		return answer;
//	}
//
//	sort(models.begin(), models.end());
//	string result = "";
//	for (int i = 0; i < models.size(); i++) {
//		if(i == models.size() - 1)
//			result += models[i].first + models[i].second;
//		else
//			result += models[i].first + models[i].second + ",";
//	}
//
//	strcpy(answer, result.c_str());
//	return answer;
//}
//
//int main() {
//	char input[100];
//	cin.getline(input, 100);
//
//	string str = input;
//	int idx = str.find(',');
//
//	string temp = str.substr(0, idx);
//	char time[100];
//	strcpy(time, temp.c_str());
//	int passenger = stoi(str.substr(idx + 1, temp.length() - idx - 1));
//	
//	char* answer = solution(time, passenger);
//	cout << answer << endl;
//
//	return 0;
//}