//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC4Argo28PrequerySearchListController.h"

@interface _TtC4Argo28PrequerySearchListController (Argo)
+ (void)fetchPreQueryDataWith:(id)arg1 isPrefetch:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didTapRowWithViewModel:(id)arg1;
- (void)didTapAccessoryButtonWithViewModel:(id)arg1;
- (void)didScrollEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)didScrollEndDecelerating:(id)arg1;
- (double)minimumLineSpacingForSection:(long long)arg1;
- (struct UIEdgeInsets)insetsForSection:(long long)arg1;
- (id)modelForIndexPath:(id)arg1 forKind:(id)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (struct CGSize)sizeForModel:(id)arg1 forIndexPath:(id)arg2 forKind:(id)arg3 withCellManager:(id)arg4 shouldCacheSizeResult:(_Bool *)arg5;
- (id)dequeueCellForModel:(id)arg1 forIndexPath:(id)arg2 forKind:(id)arg3 withCellManager:(id)arg4;
- (id)configureCellWithViewModel:(id)arg1 withModel:(id)arg2 forIndexPath:(id)arg3 forKind:(id)arg4 withCellManager:(id)arg5 shouldCacheResult:(_Bool *)arg6;
- (void)logEndShowingPrequery;
- (void)logBeginShowingPrequery;
@end

