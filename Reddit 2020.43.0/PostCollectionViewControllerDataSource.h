//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASCollectionDataSource-Protocol.h"

@class NSString, PostCollectionNode, PostCollectionPresenter;
@protocol PostCollectionNodeDelegate;

@interface PostCollectionViewControllerDataSource : NSObject <ASCollectionDataSource>
{
    PostCollectionNode *_headerNode;
    PostCollectionPresenter *_presenter;
    id <PostCollectionNodeDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PostCollectionNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PostCollectionPresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) PostCollectionNode *headerNode; // @synthesize headerNode=_headerNode;
- (id)collectionNode:(id)arg1 supplementaryElementKindsInSection:(long long)arg2;
- (CDUnknownBlockType)collectionNode:(id)arg1 nodeBlockForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CDUnknownBlockType)collectionNode:(id)arg1 nodeBlockForItemAtIndexPath:(id)arg2;
- (long long)collectionNode:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionNode:(id)arg1;
- (id)initWithPresenter:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

