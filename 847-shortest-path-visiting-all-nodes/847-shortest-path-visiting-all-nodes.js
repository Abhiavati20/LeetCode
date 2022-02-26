/**
 * @param {number[][]} graph
 * @return {number}
 */
var shortestPathLength = function(graph) {
  const dist = [];
  const q = [];
  for (let i=0; i<graph.length; i++) {
    const path = getPathWithVisitedNode(i);
    dist[path] = [];
    dist[path][i] = 0;
    q.push({path, currentNode: i});
  }
  
  while(q.length > 0) {
    const {path, currentNode} = q.shift();
    
    if (path === fullyVisitedPath(graph.length)) {
      return dist[path][currentNode];
    }
    
    for (let i=0; i<graph[currentNode].length; i++) {
      const neighbor = graph[currentNode][i];
      const nextPath = markNodeVisitedAndReturnNewPath(path, neighbor);
      
      if (dist[nextPath]?.[neighbor] === undefined) {
        if (dist[nextPath] === undefined) {
          dist[nextPath] = [];
        }
        dist[nextPath][neighbor] = dist[path][currentNode] + 1;
        q.push({path: nextPath, currentNode:neighbor});
      }
    }
  }
};

const markNodeVisitedAndReturnNewPath = (path, node) => {
  return (path | (1<<node))
}

const getPathWithVisitedNode = (node) => {
  return 1<<node;
}

const fullyVisitedPath = (maxNodes) => {
  return (1<<maxNodes) - 1;
}