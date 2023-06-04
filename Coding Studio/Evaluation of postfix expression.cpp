int gcdExtended(int a, int b, int *x, int *y) {
  if (a == 0) {
    *x = 0;
    *y = 1;
    return b;
  }

  int x1, y1;
  int gcd = gcdExtended(b % a, a, &x1, &y1);

  *x = y1 - (b / a) * x1;
  *y = x1;

  return gcd;
}

int modInverse(int b, int m) {
  int x, y;
  int g = gcdExtended(b, m, &x, &y);

  if (g != 1) {
    return -1;
  }
  return (x % m + m) % m;
}

int evaluatePostfix(string &exp) {
  stack<int> st;

  for (int i = 0; i < exp.length(); i++) {
    if (isspace(exp[i])) {
      continue;
    }

    if (isdigit(exp[i])) {
      int num = 0;

      while (isdigit(exp[i])) {
        num = num * 10 + (exp[i] - '0');
        i++;
      }
      i--;
      st.push(num);
    } else {
      long long num1 = st.top();
      st.pop();
      long long num2 = st.top();
      st.pop();

      switch (exp[i]) {
        case '+':
          st.push((num2 + num1) % 1000000007);
          break;
        case '-':
          st.push((num2 - num1 + 1000000007) % 1000000007);
          break;
        case '*':
          st.push((num2 * num1) % 1000000007);
          break;
        case '/':
          num2 %= 1000000007;
          long long inv = modInverse(num1, 1000000007);
          st.push((num2 * inv) % 1000000007);
          break;
      }
    }
  }

  return st.top();
}
