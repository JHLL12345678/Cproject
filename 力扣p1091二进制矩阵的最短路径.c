//#include <stdio.h>
//#include <stdlib.h>
//
//int shortestPathBinaryMatrix(int** grid, int gridSize, int* gridColSize)
//{
//    int dx[] = { 1,1,1,0,0,-1,-1,-1 };
//    int dy[] = { 0,1,-1,1,-1,1,-1,0 };
//    int dist[150][150];
//    int n = gridSize;//行数
//    struct mode
//    {
//        int x, y;
//    }q[150 * 150];
//    if (grid[0][0] == 1)
//        return -1;
//    if (grid[0][0] == 0 && n == 1)
//        return 1;
//    memset(dist, -1, sizeof(dist));
//    int h = 0, tl = 1;
//    q[tl].x = 0;
//    q[tl].y = 0;
//    dist[0][0] = 0;
//    while (h < tl)
//    {
//        h++;
//        int x = q[h].x;
//        int y = q[h].y;
//        for (int i = 0; i < 8; i++)
//        {
//            int nx = x + dx[i];
//            int ny = y + dy[i];
//            if (nx >= 0 && nx < n && ny < n && ny >= 0 && dist[nx][ny] == -1 && grid[nx][ny] == 0)
//            {
//                q[++tl].x = nx;
//                q[tl].y = ny;
//                dist[nx][ny] = dist[x][y] + 1;
//                if (nx == n - 1 && ny == n - 1)
//                    return dist[nx][ny] + 1;
//            }
//        }
//    }
//    return -1;
//}
//int main() 
//{
//    int raw[3][3] = { {0,0,0},{1,1,0},{1,1,0} };
//    int* rows[3];
//    for (int i = 0; i < 3; i++) rows[i] = raw[i];   // 每行首地址
//    int cols[3] = { 3, 3, 3 };
//    printf("%d", shortestPathBinaryMatrix(rows, 3, cols));
//}