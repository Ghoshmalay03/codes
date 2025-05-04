import random

class EightPuxxle:
    def __init__(self, intial_state):
        self.initial_state=initial_state
        self.goal_state=[[1,2,3], [4,5,6], [7,8,0]]

    def find_blank(self, state):
        for i in range(3):
            for j in range(3):
                if state[i][j]==0:
                    return i, j
                
    def generate_neighbour(self, state):
        neighbours=[]
        x, y=self.find_blank(state)
        moves=[(0,1), (0,-1), (1,0), (-1,0)]

        for dx, dy in moves:
            new_x, new_y = x+dx, y+dy
            if 0<=new_x<3 and 0<=new_y<3:
                new_state=[row[:] for row in state]
                new_state[x][y], new_state[new_x][new_y]=new_state[new_x][new_y], new_state[x][y]
                neighbours.append(new_state)
                return neighbours
            
    def heuristic(self, state):
        misplaced=sum(1 for i in range(3) for j in range(3) if state[i][j] != 0 and state[i][j] != self.goal_state[i][j])
        return misplaced
    
    def hill_climbing(self, state):
        current_state = self.initial_state
        while True:
            neighbours=self.generate_neighbour(current_state)
            best_neighbour=min(neighbours, key=self.heuristic, default=None)

            if best_neighbour is None or self.heuristic(best_neighbour)>=self.heuristic(current_state):
                return current_state
            current_state=best_neighbour
            
initial_state=[[1, 2, 3], [0, 4, 5], [7, 5, 8]]

eight_puzzle=EightPuzzle(initial_state)
solution=eight_puzzle.hill_climbing()
print("Final State after Hill Climbing: ")
for row in solution:
    print(row)