struct unicode_range_table {
  long first;
  long last;
};

static inline bool unicode_range_bsearch(const struct unicode_range_table *table, int top, int c) {
  int mid, bot;

  if (c < table[0].first) {
    return false;
  }

  bot = 0;
  while (top >= bot) {
    mid = (bot + top) / 2;

    if (table[mid].last < c) {
      bot = mid + 1;
    } else if (table[mid].first > c) {
      top = mid - 1;
    } else {
      return true;
    }
  }

  return false;
}
