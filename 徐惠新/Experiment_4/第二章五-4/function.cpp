float checkAgeScore(int age, float score)
{

	if (age > 25 || age < 16)
		throw age;               //年龄不合适，抛出
	if (score < 0 || score>5)
		throw score;           //分数不合适，抛出
	return 20 * score;
}