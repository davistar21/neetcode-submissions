class Solution {
    /**
     * @param {string} s
     * @param {string} t
     * @return {boolean}
     */
    isAnagram(s: string, t: string): boolean {
        if (s.length !== t.length) return false;
        let sMap = new Map<string, number>();
      
        // =   
        let n = s.length;
        for (let i = 0; i < n; i++) {
            let ch = s[i];
            sMap.set(ch, (sMap.get(ch) || 0) + 1);
        }
        console.log(sMap)
        for (let i = 0; i < n; i++) {
            let ch = t[i];
            if (sMap.has(ch)) {
                const sCh = sMap.get(ch)!
                sMap.set(ch, sCh - 1);
                if (sMap.get(ch) == 0) {
                    sMap.delete(ch);
                }
            } else return false;
        }
        console.log(sMap.size, sMap)
        if (sMap.size == 0) return true;
    }
}
