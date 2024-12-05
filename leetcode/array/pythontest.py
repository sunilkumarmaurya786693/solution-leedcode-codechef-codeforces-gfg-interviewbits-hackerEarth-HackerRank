def getMinCost(pods, cost):
    n = len(pods)
    
    # Combine the pods and cost arrays to work with them together
    services = list(zip(pods, cost))
    
    # Sort by the number of pods
    services.sort()
    
    # Initialize total cost
    total_cost = 0
    
    # Initialize the minimum number of pods needed (must be greater than the previous one)
    min_pods_needed = services[0][0]
    
    for i in range(n):
        pods_count, pod_cost = services[i]
        
        # If the current pod count is less than the required distinct count, increment it
        if pods_count < min_pods_needed:
            increment = min_pods_needed - pods_count
            total_cost += increment * pod_cost
            pods_count = min_pods_needed
        
        # The next distinct pod count must be greater than the current one
        min_pods_needed = pods_count + 1
    
    return total_cost

# Example Usage
pods = [5, 2, 2, 3]
cost = [7, 8, 6, 9]

print(getMinCost(pods, cost))