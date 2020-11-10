//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath;
@protocol SPTCellImageLoadingContextCompatibleCell;

@interface SPTCellImageLoadingContext : NSObject
{
    id <SPTCellImageLoadingContextCompatibleCell> _cell;
    NSIndexPath *_indexPath;
    void *_context;
}

+ (id)contextForCell:(id)arg1 indexPath:(id)arg2 context:(void *)arg3;
+ (id)contextForCell:(id)arg1 indexPath:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) void *context; // @synthesize context=_context;
@property(copy, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak id <SPTCellImageLoadingContextCompatibleCell> cell; // @synthesize cell=_cell;
- (id)cellForUpdatingInCollectionView:(id)arg1;
- (void)setImage:(id)arg1 forCellInCollectionView:(id)arg2 animated:(_Bool)arg3;
- (void)setImage:(id)arg1 forCellInCollectionView:(id)arg2;
- (id)cellForUpdatingInTableView:(id)arg1;
- (void)setImage:(id)arg1 forCellInTableView:(id)arg2 animated:(_Bool)arg3;
- (void)setImage:(id)arg1 forCellInTableView:(id)arg2;

@end

