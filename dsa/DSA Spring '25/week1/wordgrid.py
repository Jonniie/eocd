class WordFinder:
    def set_grid(self, grid):
        self.grid = grid

    def count(self, word):
        arr = self.grid
        rword = word[::-1]
        count = 0

        rows = len(arr)
        if rows == 0:
            return 0
        cols = len(arr[0])

        # Horizontal Traversal
        for i in range(rows):
            curr = arr[i]
            for j in range(len(arr[i]) - len(word) + 1):
                nw = curr[j:j+len(word)]
                if nw == word or nw == rword:
                    count += 1

        if len(word) == 1:
            return count

        # Vertical Traversal
        for i in range(cols):
            curr = ""
            for j in range(rows):
                nw = arr[j][i]
                curr += nw

            for j in range(len(curr) - len(word) + 1):
                nw = curr[j:j+len(word)]
                if nw == word or nw == rword:
                    count += 1
            curr = ""

        # Diagonal Traversal (top-left to bottom-right)
        for i in range(rows - len(word) + 1):
            for j in range(cols - len(word) + 1):
                diagonal = ""
                for k in range(len(word)):
                    diagonal += arr[i + k][j + k]
                if diagonal == word or diagonal == rword:
                    count += 1

        # Diagonal Traversal (top-right to bottom-left)
        for i in range(rows - len(word) + 1):
            for j in range(len(word) - 1, cols):
                diagonal = ""
                for k in range(len(word)):
                    diagonal += arr[i + k][j - k]
                if diagonal == word or diagonal == rword:
                    count += 1

        return count

                
if __name__ == "__main__":
    grid = ["TIRATIRA",
            "IRATIRAT",
            "RATIRATI",
            "ATIRATIR"]

    finder = WordFinder()
    finder.set_grid(grid)

    print(finder.count("TIRA")) # 7 
    print(finder.count("TA")) # 13
    print(finder.count("RITARI")) # 3
    print(finder.count("A")) # 8
    print(finder.count("AA")) # 6
    print(finder.count("RAITA")) # 0     