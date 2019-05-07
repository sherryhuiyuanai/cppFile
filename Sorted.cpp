int compare(const char str1[], const char str2[]) {
	int i1 = 0;
	int i2 = 0;
	int cap1 = 0;
	int cap2 = 0;
	int rec1 = 0;
	int rec2 = 0;
	int spc1 = 0;
	int spc2 = 0;
	if (str1[0] >= '0' && str1[0] <= '9'){ 
		return -2;
	}
	if (str2[0] >= '0' && str2[0] <= '9') {
		return -2;
	}

	while (str1[i1] != 0 && str2[i2] != 0) {
		if (str1[i1] != ' ' && str1[i1] != '-' && str1[i1] != '\''&& (str1[i1] <65 ||(str1[i1] > 90 && str1[i1]<97) ||str1[i1] > 122)) {
			return -2;
		}
		if (str2[i2] != ' ' && str2[i2] != '-' && str2[i2] != '\'' && (str2[i2] < 65 || (str2[i2] > 90 && str2[i2] < 97) || str2[i2] > 122)) {
			return -2;
		}
		if (str1[i1] < str2[i2]) {
			if (str1[i1] == ' ' || str1[i1] == '-' || str1[i1] == '\'') {
				if (str2[i2] == ' ' || str2[i2] == '-' || str2[i2] == '\'') {
					return -1;
				}
				rec1 = i1;
				i1++;
				spc1++;
				continue;
			}
			if (str1[i1] >= 'A' && str1[i1] <= 'Z') {
				if (str2[i2] >= 'A' && str2[i2] <= 'Z') {
					return -1;
				}
				else if (str1[i1] + 32 == str2[i2]) {
					i1++;
					i2++;
					cap1++;
					continue;
				}
				else if (str1[i1] + 32 < str2[i2]) {
					return -1;
				}
				else {
					return 1;
				}
			}
			return -1;
		}
		if (str1[i1] > str2[i2]) {
			if (str2[i2] == ' ' || str2[i2] == '-' || str2[i2] == '\'') {
				if (str1[i1] == ' ' || str1[i1] == '-' || str1[i1] == '\'') {
					return 1;
				}
				rec2 = i2;
				i2++;
				spc2++;
				continue;
			}
			if (str2[i2] >= 'A' && str2[i2] <= 'Z') {
				if (str1[i1] >= 'A' && str1[i1] <= 'Z') {
					return 1;
				}
				else if (str2[i2] + 32 == str1[i1]) {
					i1++;
					i2++;
					cap2++;
					continue;
				}
				else if (str2[i2] + 32 < str1[i1]) {
					return 1;
				}
				else {
					return -1;
				}
			}
			return 1;
		}
		i1++;
		i2++;
	}
	if (str1[i1] == 0 && str2[i2] == 0) {
		if (spc1 > spc2) {
			return -1;
		}
		if (spc1 < spc2) {
			return 1;
		}
		if (cap1 > cap2) {
			return 1;
		}
		if (cap1 < cap2) {
			return -1;
		}
		if (rec1 < rec2) {
			return -1;
		}
		if (rec1 > rec2) {
			return 1;
		}
		return 0;
	}
	else if (str1[i1] == 0 && str2[i2] != 0) {
		return -1;
	}
	else if (str1[i1] != 0 && str2[i2] == 0) {
		return 1;
	}
	return 1;
}



int isSorted(const char* const names[]) {
	enum sortType { START, ASCENDING, DESCENDING, UNKNOWN, UNSORTED, DONE, SORTTYPE };
	sortType s = START;
	int i = 0;
	const char* first;
	const char* second;
	if (names[0] == 0 || names[1] == 0) {
		return 0;
	}
	while (names[i+1] != 0) {
		first = names[i];
		second = names[i + 1];
		if (first == 0 || second == 0) {
			return -1;
		}
		switch (s) {
		case START:
			if (compare(first,second) == 0) {
				s = UNKNOWN;
				i++;
			}
			else if (compare(first, second) == -1) {
				s = ASCENDING;
				i++;
			}
			else if (compare(first, second) == 1) {
				s = DESCENDING;
				i++;
			}
			else {
				return -1;
			}
			break;
		case ASCENDING:
			if (compare(first, second) == 1) {
				s = UNSORTED;
			}
			else{
				i++;
			}
			break;
		case DESCENDING:
			if (compare(first, second) == -1) {
				s = UNSORTED;
			}
			else {
				i++;
			}
			break;
		case UNKNOWN:
			if (compare(first, second) == 0) {
				s = UNKNOWN;
				i++;
			}
			else if (compare(first, second) == -1) {
				s = ASCENDING;
				i++;
			}
			else if (compare(first, second) == 1) {
				s = DESCENDING;
				i++;
			}
			else {
				return -1;
			}
			break;
		case UNSORTED:
			return i + 2;
			break;
		case DONE:
			break;
		case SORTTYPE:
			break;
		default:
			return -1;
			break;
		}
	}
	return 0;
}


