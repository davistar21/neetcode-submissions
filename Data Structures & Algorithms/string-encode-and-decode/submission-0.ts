class Solution {
    /**
     * @param {string[]} strs
     * @returns {string}
     */
    encode(strs: string[]): string {
        let encoded = ""
        for (let i = 0; i < strs.length; i++) {
            encoded += strs[i].length + "#" + strs[i]
        }
        return encoded
    }

    /**
     * @param {string} str
     * @returns {string[]}
     */
    decode(str: string): string[] {
        let decoded = [];
        let i = 0;
        while (i < str.length) {
            let j = i;
            while (str[j] !== "#") {
                j++;
            }
            let length = parseInt(str.slice(i, j));
            i = j + 1;
            decoded.push(str.slice(i, i + length));
            i += length;
        }
        return decoded;
    }
}
