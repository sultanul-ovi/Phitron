class HashTable{
    constructor(size=20){
        this.buckets =  new Array(size)
        this.size = size
    }

    hash(key){
        return key.toString().length % this.size;
    }
    
    // Insert
    setItem(key,value){
        let index = this.hash(key);

        if(!this.buckets[index]){
            this.buckets[index] = [];
        }

        this.buckets[index].push([key,value])
        return index
    }

}

const hashTable = new HashTable();


hashTable.setItem("222","Ovi");
hashTable.setItem("321","Lami");
hashTable.setItem("432","Oishee");
hashTable.setItem("1232","Himel");
hashTable.setItem("314112","Ahnaf");



console.log(hashTable.buckets);