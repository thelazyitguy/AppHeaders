//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

@interface PostCommentCache : NSObject
{
    NSCache *_commentCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSCache *commentCache; // @synthesize commentCache=_commentCache;
- (id)commentTreeNodesForPostId:(id)arg1 withCommentSort:(unsigned long long)arg2;
- (void)storeCommentTreeNodes:(id)arg1 withCommentSort:(unsigned long long)arg2 forPostId:(id)arg3;
- (id)init;

@end
