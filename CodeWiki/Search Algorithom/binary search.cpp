//easy if decule a global array;
//time complexity -> O(log2(n));
int BinarySrc(ll low, ll high, ll key)
{
    ll index;
    while(low<=high)
    {
       ll mid = low + (high-low)/2; //if work with indx;
       //int 
        if(arr[mid]<key)
        {
            low = mid+1;
        }
        else if(arr[mid]>key)
        {
            high = mid-1;
        }
        else
        {
             index = mid;
             high = mid-1;
            
        } 
    }
    //index = -1; 
    if(arr[index]==key)return index;
    else return -1;
}