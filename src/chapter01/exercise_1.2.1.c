/*
第1讲讨论：分析“二分法”

    查找算法中的“二分法”是这样定义的：

    给定N个从小到大排好序的整数序列List[]，以及某待查找整数X，我们的目标是找到X在List中的下标。即若有List[i]=X，则返回i；否则返回-1表示没有找到。

    二分法是先找到序列的中点List[M]，与X进行比较，若相等则返回中点下标；否则，若List[M]>X，则在左边的子系列中查找X；若List[M]<X，则在右边的子系列中查找X。

    试写出算法的伪码描述，并分析最坏、最好情况下的时间、空间复杂度。

    int bf(list[m], v) {
    	//初始开始点
    	int start = 0;
    	//初始结束点
    	int stop = m - 1
    	//当开始点i不在结束点之前，
    	while (start <= stop) {
    		//获取中点
    		int mid = (start + stop) / 2
    		if (list[mid] > v) {
    			// 如果mid下标元素大于给定元素，则向小端查找
    			//开始点不变，结束点变为mid - 1
    			stop = mid - 1;
    		} else if (list[mid]  < v) {
    			//如果mid下标元素小于给定元素v, 则向大端查找
    			//开始点为mid + 1, 结束点不变
    			start = mid + 1;
    		} else {
    			//mid下标元素等于给定元素
    			//mid即元素下标
    			return mid;
    		}

    	}
    	//直至开始点与结束点相同，但仍未找到下标元素 与给定元素相等
    	//返回-1表示未在这个list中找到这个元素
    	return -1;
    }

    无论何种情况，空间复杂度与list元素个数正相关
    最好情况为第一次就找到这个元素
    最差情况为找完整个列表才找到或没找到这个元素  log2N
    created at 2014-12-26 22:31:08
	*/
