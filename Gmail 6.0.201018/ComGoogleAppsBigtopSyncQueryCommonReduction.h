//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ComGoogleAppsBigtopSyncQueryNodesNode;

@interface ComGoogleAppsBigtopSyncQueryCommonReduction : NSObject
{
    id <ComGoogleAppsBigtopSyncQueryNodesNode> replacement_;
    int firstIndexOffset_;
    int lastIndexOffset_;
}

+ (void)initialize;
- (void)dealloc;
- (int)getLastIndexOffset;
- (int)getFirstIndexOffset;
- (id)getReplacement;
- (_Bool)hasReplacement;
- (_Bool)isNoOp;

@end
