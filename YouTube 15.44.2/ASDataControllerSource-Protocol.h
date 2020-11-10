//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class ASCellNode, ASCollectionElement, ASDataController, NSArray, NSIndexPath, NSIndexSet, NSString, _ASHierarchyChangeSet;
@protocol ASSectionContext;

@protocol ASDataControllerSource <NSObject>
- (struct CGRect)dataControllerFrameForDebugging:(ASDataController *)arg1;
- (_Bool)dataControllerShouldSerializeNodeCreation:(ASDataController *)arg1;
- (_Bool)dataController:(ASDataController *)arg1 shouldEagerlyLayoutNode:(ASCellNode *)arg2;
- (_Bool)dataController:(ASDataController *)arg1 shouldSynchronouslyProcessChangeSet:(_ASHierarchyChangeSet *)arg2;
- (id)dataController:(ASDataController *)arg1 nodeModelForItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)dataController:(ASDataController *)arg1 presentedSizeForElement:(ASCollectionElement *)arg2 matchesSize:(struct CGSize)arg3;
- (unsigned long long)numberOfSectionsInDataController:(ASDataController *)arg1;
- (unsigned long long)dataController:(ASDataController *)arg1 rowsInSection:(unsigned long long)arg2;
- (ASCellNode * (^)(void))dataController:(ASDataController *)arg1 nodeBlockAtIndexPath:(NSIndexPath *)arg2 shouldAsyncLayout:(_Bool *)arg3;

@optional
- (id <ASSectionContext>)dataController:(ASDataController *)arg1 contextForSection:(long long)arg2;
- (CDStruct_42a63532)dataController:(ASDataController *)arg1 constrainedSizeForSupplementaryNodeOfKind:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (ASCellNode * (^)(void))dataController:(ASDataController *)arg1 supplementaryNodeBlockOfKind:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3 shouldAsyncLayout:(_Bool *)arg4;
- (unsigned long long)dataController:(ASDataController *)arg1 supplementaryNodesOfKind:(NSString *)arg2 inSection:(unsigned long long)arg3;
- (NSArray *)dataController:(ASDataController *)arg1 supplementaryNodeKindsInSections:(NSIndexSet *)arg2;
- (CDStruct_42a63532)dataController:(ASDataController *)arg1 constrainedSizeForNodeAtIndexPath:(NSIndexPath *)arg2;
@end

