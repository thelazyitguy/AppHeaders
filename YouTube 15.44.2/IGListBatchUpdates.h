//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableIndexSet;

@interface IGListBatchUpdates : NSObject
{
    NSMutableIndexSet *_sectionReloads;
    NSMutableArray *_itemInserts;
    NSMutableArray *_itemDeletes;
    NSMutableArray *_itemReloads;
    NSMutableArray *_itemMoves;
    NSMutableArray *_itemUpdateBlocks;
    NSMutableArray *_itemCompletionBlocks;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *itemCompletionBlocks; // @synthesize itemCompletionBlocks=_itemCompletionBlocks;
@property(readonly, nonatomic) NSMutableArray *itemUpdateBlocks; // @synthesize itemUpdateBlocks=_itemUpdateBlocks;
@property(readonly, nonatomic) NSMutableArray *itemMoves; // @synthesize itemMoves=_itemMoves;
@property(readonly, nonatomic) NSMutableArray *itemReloads; // @synthesize itemReloads=_itemReloads;
@property(readonly, nonatomic) NSMutableArray *itemDeletes; // @synthesize itemDeletes=_itemDeletes;
@property(readonly, nonatomic) NSMutableArray *itemInserts; // @synthesize itemInserts=_itemInserts;
@property(readonly, nonatomic) NSMutableIndexSet *sectionReloads; // @synthesize sectionReloads=_sectionReloads;
- (_Bool)hasChanges;
- (id)init;

@end

