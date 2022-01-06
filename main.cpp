#include <bits/stdc++.h>

using namespace std;

vector <pair<string, string>> flex(0);

void error(int string_num) {
    cout << "ERROR in string " << string_num << endl;
}

bool main_check(int i_beg, int i_end) {

    return true;
}

bool while_check(int i_beg, int i_end) {

}

bool for_check(int i_beg, int i_end) {

}

bool if_check(int i_beg, int i_end) {

}

bool expression_check(int i_beg, int i_end);

bool prior_check13(int i_beg, int i_end){
    if(i_end - i_beg == -1){
        return false;
    }
    if(flex[i_beg].second == "const"){
        return true;
    }else if(flex[i_beg].second == "("){
        if(flex[i_end].second == ")"){
            ++i_beg;
            --i_end;
            if(expression_check(i_beg, i_end)){
                return true;
            }else{
                return false;
            }
        }else{
            return false;
        }
    }else if(flex[i_beg].second == "name"){
        ++i_beg;
        if(i_beg<i_end){
            if(flex[i_beg].second == "[" && flex[i_end].second == "]"){
                ++i_beg;
                --i_end;
                if(expression_check(i_beg, i_end)){
                    return true;
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }else{
            return true;
        }
    }else{
        return false;
    }
    return true;
}

bool prior_check12(int i_beg, int i_end){
    if(i_end - i_beg == -1){
        return false;
    }
    if(flex[i_beg].second == "sign12"){
        ++i_beg;
        if(prior_check13(i_beg, i_end)){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }
}

bool prior_check11(int i_beg, int i_end){
    if(i_end - i_beg == -1){
        return false;
    }
    for (; i_beg <= i_end; ++i_beg) {
        int j = i_beg;
        while (flex[j].second != "sign11" && j != i_end) {
            ++j;
        }
        if(flex[j].second == "sign11"){
            --j;
        }
        if (!prior_check12(i_beg, j)) {
            return false;
        }
        i_beg = j+1;
    }
    return true;
}

bool prior_check10(int i_beg, int i_end){
    if(i_end - i_beg == -1){
        return false;
    }
    for (; i_beg <= i_end; ++i_beg) {
        int j = i_beg;
        while (flex[j].second != "sign10" && j != i_end) {
            ++j;
        }
        if(flex[j].second == "sign10"){
            --j;
        }
        if (!prior_check11(i_beg, j)) {
            return false;
        }
        i_beg = j+1;
    }
    return true;
}

bool prior_check9(int i_beg, int i_end){
    if(i_end - i_beg == -1){
        return false;
    }
    for (; i_beg <= i_end; ++i_beg) {
        int j = i_beg;
        while (flex[j].second != "sign9" && j != i_end) {
            ++j;
        }
        if(flex[j].second == "sign9"){
            --j;
        }
        if (!prior_check10(i_beg, j)) {
            return false;
        }
        i_beg = j+1;
    }
    return true;
}

bool prior_check8(int i_beg, int i_end){
    if(i_end - i_beg == -1){
        return false;
    }
    for (; i_beg <= i_end; ++i_beg) {
        int j = i_beg;
        while (flex[j].second != "sign8" && j != i_end) {
            ++j;
        }
        if(flex[j].second == "sign8"){
            --j;
        }
        if (!prior_check9(i_beg, j)) {
            return false;
        }
        i_beg = j+1;
    }
    return true;
}

bool prior_check7(int i_beg, int i_end){
    if(i_end - i_beg == -1){
        return false;
    }
    for (; i_beg <= i_end; ++i_beg) {
        int j = i_beg;
        while (flex[j].second != "sign7" && j != i_end) {
            ++j;
        }
        if(flex[j].second == "sign7"){
            --j;
        }
        if (!prior_check8(i_beg, j)) {
            return false;
        }
        i_beg = j+1;
    }
    return true;
}

bool prior_check6(int i_beg, int i_end){
    if(i_end - i_beg == -1){
        return false;
    }
    for (; i_beg <= i_end; ++i_beg) {
        int j = i_beg;
        while (flex[j].second != "sign6" && j != i_end) {
            ++j;
        }
        if(flex[j].second == "sign6"){
            --j;
        }
        if (!prior_check7(i_beg, j)) {
            return false;
        }
        i_beg = j+1;
    }
    return true;
}

bool prior_check5(int i_beg, int i_end){
    if(i_end - i_beg == -1){
        return false;
    }
    for (; i_beg <= i_end; ++i_beg) {
        int j = i_beg;
        while (flex[j].second != "sign5" && j != i_end) {
            ++j;
        }
        if(flex[j].second == "sign5"){
            --j;
        }
        if (!prior_check6(i_beg, j)) {
            return false;
        }
        i_beg = j+1;
    }
    return true;
}

bool prior_check4(int i_beg, int i_end){
    if(i_end - i_beg == -1){
        return false;
    }
    for (; i_beg <= i_end; ++i_beg) {
        int j = i_beg;
        while (flex[j].second != "sign4" && j != i_end) {
            ++j;
        }
        if(flex[j].second == "sign4"){
            --j;
        }
        if (!prior_check5(i_beg, j)) {
            return false;
        }
        i_beg = j+1;
    }
    return true;
}

bool prior_check3(int i_beg, int i_end){
    if(i_end - i_beg == -1){
        return false;
    }
    for (; i_beg <= i_end; ++i_beg) {
        int j = i_beg;
        while (flex[j].second != "sign3" && j != i_end) {
            ++j;
        }
        if(flex[j].second == "sign3"){
            --j;
        }
        if (!prior_check4(i_beg, j)) {
            return false;
        }
        i_beg = j+1;
    }
    return true;
}

bool prior_check2(int i_beg, int i_end){
    if(i_end - i_beg == -1){
        return false;
    }
    for (; i_beg <= i_end; ++i_beg) {
        int j = i_beg;
        while (flex[j].second != "sign2" && j != i_end) {
            ++j;
        }
        if(flex[j].second == "sign2"){
            --j;
        }
        if (!prior_check3(i_beg, j)) {
            return false;
        }
        i_beg = j+1;
    }
    return true;
}

bool naznachaemoe(int i_beg, int i_end){
    int j = i_beg;
    if(flex[j].second != "name"){
        return false;
    }
    ++j;
    if(j<=i_end){
        if(flex[j].second != "[" || flex[i_end].second != "]"){
            return false;
        }else{
            ++j;
            --i_end;
            if(expression_check(j, i_end)){
                return true;
            }else{
                return false;
            }
        }
    }else{
        return true;
    }
    return true;
}

bool expression_check(int i_beg, int i_end) {
    int j = i_beg;
    while(flex[j].second != "sign1" && j != i_end){
        ++j;
    }
    if(j == i_end){
        if(prior_check2(i_beg, i_end)){
            return true;
        }else {
            return false;
        }
    }else if(flex[j].second == "sign1"){
        if(!naznachaemoe(i_beg, j - 1)){
            return false;
        }
        if(!expression_check(j + 1, i_end)){
            return false;
        }
        return true;
    }else {
        return false;
    }
    return true;
}

bool section_check(int i_beg, int i_end) {
    if (i_end - i_beg == 1) {
        if (flex[i_beg].second != "name") {
            return false;
        }
    } else if (i_end - i_beg == 2) {
        return false;
    } else if (i_end - i_beg == 3) {
        if (flex[i_beg].second == "name" && flex[i_beg + 1].second == "=" &&
                (flex[i_beg + 2].second == "name" || flex[i_beg + 2].second == "const")) {
            return true;
        } else {
            return false;
        }
    } else if (i_end - i_beg >= 4) {
        if (flex[i_beg].second == "name" && flex[i_beg + 1].second == "["
                && flex[i_beg + 2].second == "const" && flex[i_beg + 3].second == "]") {
            return true;
        } else {
            if (flex[i_beg].second == "name" && flex[i_beg + 1].second == "=") {
                if (expression_check(i_beg + 2, i_end)) {
                    return true;
                } else {
                    return false;
                }
            }
        }
    } else {
        return false;
    }
    return true;
}

bool opisanie_check(int i_beg, int i_end) {
    ++i_beg;
    for (; i_beg <= i_end; ++i_beg) {
        int j = i_beg;
        while (flex[j].second != "," && flex[j].second != ";") {
            ++j;
        }
        if (!section_check(i_beg, j)) {
            return false;
        }
        i_beg = j;
    }
    return true;
}

int main() {
    ifstream in;
    ifstream in_syst;
    ofstream out;
    ofstream lexout;

    in.open("/home/maxec/qt_projects/lexical_parsing/input");
    in_syst.open("/home/maxec/qt_projects/lexical_parsing/system_words");
    out.open("/home/maxec/qt_projects/lexical_parsing/output");
    lexout.open("/home/maxec/qt_projects/lexical_parsing/lexematica");

    vector <pair<string, string>> syst_words(0);
    string cur_string;
    string cur_def;
    while (in_syst >> cur_string >> cur_def) {
        syst_words.push_back(make_pair(cur_string, cur_def));
    }
    string lexema;
    char cur, next;
    in.get(cur);
    int string_num = 1;
    while (in.get(next)) {
        lexema = "";
        if (cur == ' ') {
            cur = next;
            continue;
        } else if (cur == '\n') {
            ++string_num;
            cur = next;
            continue;
        } else if (cur >= '0' && cur <= '9') {
            lexema += cur;
            while (next >= '0' && next <= '9') {
                cur = next;
                in.get(next);
                lexema += cur;
            }
            cur = next;
            out << lexema << " 3 number" << endl;

            flex.push_back(make_pair(lexema, "const"));

            lexout << "const" << endl;
            continue;
        } else if ((cur >= 'a' && cur <= 'z') || (cur >= 'A' && cur <= 'Z') || cur == '_') {
            lexema += cur;
            while ((next >= 'a' && next <= 'z') || (next >= 'A' && next <= 'Z') || next == '_' || (next >= '0' && next <= '9')) {
                cur = next;
                in.get(next);
                lexema += cur;
            }
            cur = next;
            bool yes = false;
            for (size_t _ = 0; _ < syst_words.size(); ++_) {
                if (syst_words[_].first == lexema) {
                    out << lexema << " 1 " << syst_words[_].second << endl;
                    if (syst_words[_].second == "logic") {
                        lexout << "const" << endl;

                        flex.push_back(make_pair(lexema, "const"));

                    } else {
                        lexout << syst_words[_].second << endl;

                        flex.push_back(make_pair(lexema, syst_words[_].second));

                    }
                    yes = true;
                    break;
                }
            }
            if (!yes) {
                out << lexema << " 2 name" << endl;
                lexout << "name" << endl;

                flex.push_back(make_pair(lexema, "identifier"));

            }
        } else if (cur == '"') {
            cur = next;
            bool yes = false;
            while (in.get(next)) {
                if (cur == '"') {
                    out << lexema << " 3 text" << endl;
                    lexout << "const" << endl;

                    flex.push_back(make_pair(lexema, "const"));

                    cur = next;
                    yes = true;
                    break;
                }
                lexema += cur;
                cur = next;
            }
            if (!yes) {
                out << lexema << " 3 text" << endl;
                lexout << "const" << endl;

                flex.push_back(make_pair(lexema, "const"));

            }
        } else if(cur == '(' || cur == ')' || cur == ',' || cur == ';' || cur == '{' || cur == '}'){
            out << cur << " " << 5 << "\n";
            lexout << cur << endl;

            string cur_ = "";
            cur_ += cur;
            flex.push_back(make_pair(cur_, cur_));

            cur = next;
        } else if (cur == '+') {
            if(next == '+'){
                out << cur << next << " " << 4 << " " << "sign12" << "\n";
                lexout << "sign12" << endl;

                flex.push_back(make_pair("++", "sign12"));

                in.get(cur);
            }else if(next == '='){
                out << cur << next << " " << 4 << " " << "sign1" << "\n";
                lexout << "sign1" << endl;

                flex.push_back(make_pair("+=", "sign1"));

                in.get(cur);
            }else{
                out << cur << " " << 4 << " " << "sign10" << " " << "sign12" << "\n";
                lexout << "sign10 sign 12" << endl;

                flex.push_back(make_pair("+", "sign10 sign12"));

                cur = next;
            }
        } else if (cur == '-') {
            if(next == '-'){
                out << cur << next << " " << 4 << " " << "sign12" << "\n";
                lexout << "sign12" << endl;

                flex.push_back(make_pair("--", "sign12"));

                in.get(cur);
            }else if(next == '='){
                out << cur << next << " " << 4 << " " << "sign1" <<  "\n";
                lexout << "sign1" << endl;

                flex.push_back(make_pair("-=", "sign1"));

                in.get(cur);
            }else{
                out << cur << " " << 4 << " " << "sign10" << " " << "sign12" << "\n";
                lexout << "sign10 sign12" << endl;

                flex.push_back(make_pair("-", "sign10 sign12"));

                cur = next;
            }
        }  else if (cur == '*') {
            if(next == '='){
                out << cur << next << " " << 4 << " " << "sign1" << "\n";
                lexout << "sign1" << endl;

                flex.push_back(make_pair("*=", "sign1"));

                in.get(cur);
            }else{
                out << cur << " " << 4 << " " << "sign11" << "\n";
                lexout << "sign11" << endl;

                flex.push_back(make_pair("*", "sign11"));

                cur = next;
            }
        }  else if (cur == '/') {
            if(next == '='){
                out << cur << next << " " << 4 << " " << "sign1" << "\n";
                lexout << "sign1" << endl;

                flex.push_back(make_pair("/=", "sign1"));

                in.get(cur);
            }else{
                out << cur << " " << 4 << " " << "sign11" << "\n";
                lexout << "sign11" << endl;

                flex.push_back(make_pair("/", "sign11"));

                cur = next;
            }
        }  else if (cur == '%') {
            if(next == '='){
                out << cur << next << " " << 4 << " " << "sign1" <<  "\n";
                lexout << "sign1" << endl;

                flex.push_back(make_pair("%=", "sign1"));

                in.get(cur);
            }else{
                out << cur << " " << 4 << " " << "sign11" <<  "\n";
                lexout << "sign11" << endl;

                flex.push_back(make_pair("%", "sign11"));

                cur = next;
            }
        }  else if (cur == '!') {
            if(next == '='){
                out << cur << next << " " << 4 << " " << "sign7" <<   "\n";
                lexout << "sign7" << endl;

                flex.push_back(make_pair("!=", "sign7"));

                in.get(cur);
            }else{
                out << cur << " " << 4 << " " << "sign12" <<   "\n";
                lexout << "sign12" << endl;

                flex.push_back(make_pair("!", "sign12"));

                cur = next;
            }
        }  else if (cur == '&') {
            if(next == '='){
                out << cur << next << " " << 4 << " " << "sign1" << "\n";
                lexout << "sign1" << endl;

                flex.push_back(make_pair("&=", "sign1"));

                in.get(cur);
            }else if(next == '&'){
                out << cur << next << " " << 4 << " " << "sign3" << "\n";
                lexout << "sign3" << endl;

                flex.push_back(make_pair("&&", "sign3"));

                in.get(cur);
            }else{
                out << cur << " " << 4 << " " << "sign6" << "\n";
                lexout << "sign6" << endl;

                flex.push_back(make_pair("&", "sign6"));

                cur = next;
            }
        } else if (cur == '|') {
            if(next == '='){
                out << cur << next << " " << 4 << " " << "sign1" << "\n";
                lexout << "sign1" << endl;
                flex.push_back(make_pair("|=", "sign1"));
                in.get(cur);
            }else if(next == '|'){
                out << cur << next << " " << 4 << " " << "sign2" << "\n";
                lexout << "sign2" << endl;
                flex.push_back(make_pair("||", "sign2"));
                in.get(cur);
            }else{
                out << cur << " " << 4 << " " << "sign4" << "\n";
                lexout << "sign4" << endl;
                flex.push_back(make_pair("|", "sign4"));
                cur = next;
            }
        }  else if (cur == '=') {
            if(next == '='){
                out << cur << next << " " << 4 << " " << "sign7" << "\n";
                lexout << "sign7" << endl;
                flex.push_back(make_pair("==", "sign7"));
                in.get(cur);
            }else{
                out << cur << " " << 4 << " " << "sign1" << "\n";
                lexout << "sign1" << endl;
                flex.push_back(make_pair("=", "sign1"));
                cur = next;
            }
        } else if (cur == '^') {
            if(next == '='){
                out << cur << next << " " << 4 << " " << "sign1" << "\n";
                lexout << "sign1" << endl;
                flex.push_back(make_pair("^=", "sign1"));
                in.get(cur);
            }else{
                out << cur << " " << 4 << " " << "sign5" << "\n";
                lexout << "sign5" << endl;
                flex.push_back(make_pair("^", "sign5"));
                cur = next;
            }
        } else if(cur == '[' || cur == ']'){
            out << cur << " " << 4 << "\n";
            lexout << cur;

            string cur_ = "";
            cur_ += cur;
            flex.push_back(make_pair(cur_, cur_));

            cur = next;
        } else if(cur == '~'){
            out << cur << " " << 4 << " " << "sign12" << "\n";
            lexout << "sign12" << endl;

            flex.push_back(make_pair("~", "sign12"));

            cur = next;
        } else if(cur == '>'){
            if(next == '>'){
                out << cur << next << " " << 4 << " " << "sign9" << "\n";
                lexout << "sign9" << endl;

                flex.push_back(make_pair(">>", "sign9"));

                in.get(cur);
            }else if(next == '='){
                out << cur << next << " " << 4 << " " << "sign8" << "\n";
                lexout << "sign8" << endl;
                flex.push_back(make_pair(">=", "sign8"));
                in.get(cur);
            }else{
                out << cur << " " << 4 << " " << "sign8" << "\n";
                lexout << "sign8" << endl;
                flex.push_back(make_pair(">", "sign8"));
                cur = next;
            }
        } else if(cur == '<'){
            if(next == '<'){
                out << cur << next << " " << 4 << " " << "sign9" << "\n";
                lexout << "sign9" << endl;
                flex.push_back(make_pair("<<", "sign9"));
                in.get(cur);
            }else if(next == '='){
                out << cur << next << " " << 4 << " " << "sign8" << "\n";
                lexout << "sign8" << endl;
                flex.push_back(make_pair("<=", "sign8"));
                in.get(cur);
            }else{
                out << cur << " " << 4 << " " << "sign8" << "\n";
                lexout << "sign8" << endl;
                flex.push_back(make_pair("<", "sign8"));
                cur = next;
            }
        } else {
            out << cur << " 6" << endl;
            lexout << "BREAD" << endl;
            error(string_num);
            string cur_ = "";
            cur_ += cur;
            flex.push_back(make_pair(cur_, "6"));
            cur = next;
            continue;
        }
    }

    /*for (size_t i = 0; i < flex.size(); ++i) {
        cout << flex[i].first << " " << flex[i].second << endl;
    }*/

    for (size_t i = 0; i < flex.size(); ++i) {
        if (flex[i].second == "type") {
            if (flex[i + 1].second == "main" && flex[i].first == "int" && flex[i + 2].second == "(" && flex[i + 3].second == ")" &&
                    flex[i + 4].second == "{") {
                if (main_check(i + 5, flex.size() - 2)) {
                    cout << "OK" << endl;
                    break;
                } else {
                    cout << "NOT OK" << endl;
                    break;
                }
            } else {
                int j = i;
                while (flex[j].second != ";") {
                    ++j;
                }
                if (!opisanie_check(i, j)) {
                    cout << "NOT OK" << endl;
                    break;
                }
                i = j;
            }
        } else if (flex[i].second != ";") {
            cout << "NOT OK" << endl;
            break;
        }
    }

    return 0;
}
