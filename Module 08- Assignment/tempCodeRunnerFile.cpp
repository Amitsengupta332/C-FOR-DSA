int main()
{
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++)
    {
        string s, x;
        cin >> s >> x;

        string result = replaceSubString(s, x);
        cout << result << endl;
        /* code */
    }

    return 0;
}