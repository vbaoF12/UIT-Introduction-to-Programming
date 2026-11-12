if ((gender == 'M' || gender == 'm') && age >= 21){
        cout << "1";
    }
    else if ((gender == 'M' || gender == 'm') && age < 21){
        cout << "3";
    }
    else if ((gender == 'F' || gender == 'f') && age >= 21){
        cout << "2";
    }
    else if ((gender == 'F' || gender == 'f') && age < 21){
        cout << "4";
}
    else{
        cout << "I do not know why";
        }