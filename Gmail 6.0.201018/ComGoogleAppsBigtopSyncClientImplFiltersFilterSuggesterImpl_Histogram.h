//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JavaUtilLinkedHashMap;

@interface ComGoogleAppsBigtopSyncClientImplFiltersFilterSuggesterImpl_Histogram : NSObject
{
    JavaUtilLinkedHashMap *countByKey_;
    int totalNumberOfOccurrences_;
}

- (void)dealloc;
- (int)getTotalNumberOfOccurrences;
- (id)mode;
- (_Bool)incrementOccurrenceForKeyWithNSString:(id)arg1;
- (id)allEntries;

@end
