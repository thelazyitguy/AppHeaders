//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class GTEPresentationTasksModel, GTETasksCollectionViewDragDropper, NSString;

@protocol GTETasksCollectionViewDragDropperDelegate
- (void)dragDropperDidEndInteraction:(GTETasksCollectionViewDragDropper *)arg1;
- (GTEPresentationTasksModel *)dragDropperWillEndInteraction:(GTETasksCollectionViewDragDropper *)arg1 movedTaskWithID:(NSString *)arg2 belowTaskWithID:(NSString *)arg3 asSubtask:(_Bool)arg4;
- (void)dragDropper:(GTETasksCollectionViewDragDropper *)arg1 isUpdatingTasksCollectionViewWithNewPresentationModel:(GTEPresentationTasksModel *)arg2;
- (GTEPresentationTasksModel *)dragDropperWillBeginInteraction:(GTETasksCollectionViewDragDropper *)arg1;
- (_Bool)dragDropper:(GTETasksCollectionViewDragDropper *)arg1 shouldBeginInteractionInSection:(long long)arg2;
@end
