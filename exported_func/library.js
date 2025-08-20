mergeInto(LibraryManager.library, {
  curTime: function() {
    return Math.floor(Date.now() / 1000);
  },
  
  logProgress: function(progress) {
    console.log("Progress: " + (progress * 100).toFixed(1) + "%");
  }
});