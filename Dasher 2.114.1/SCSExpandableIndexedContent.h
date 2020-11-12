//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ServiceCore/SCSIndexedContentList-Protocol.h>
#import <ServiceCore/SCSIndexedContentListDelegate-Protocol.h>

@class NSArray, NSIndexSet, NSString;
@protocol SCSContentDelegate, SCSIndexedContentList, SCSIndexedContentListDelegate;

@interface SCSExpandableIndexedContent : NSObject <SCSIndexedContentListDelegate, SCSIndexedContentList>
{
    _Bool _didSendBeginUpdates;
    _Bool _deferDelegateUpdateCalls;
    NSObject<SCSIndexedContentListDelegate> *_delegate;
    NSString *_name;
    NSIndexSet *_expandedIndexes;
    NSObject<SCSIndexedContentList> *_content;
}

@property(retain, nonatomic) NSObject<SCSIndexedContentList> *content; // @synthesize content=_content;
@property(copy, nonatomic) NSIndexSet *expandedIndexes; // @synthesize expandedIndexes=_expandedIndexes;
@property(nonatomic, getter=shouldDeferDelegateUpdateCalls) _Bool deferDelegateUpdateCalls; // @synthesize deferDelegateUpdateCalls=_deferDelegateUpdateCalls;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak NSObject<SCSContentDelegate> *delegate;
- (void).cxx_destruct;
- (void)contentList:(id)arg1 indexedContent:(id)arg2 atSection:(unsigned long long)arg3 didReceiveError:(id)arg4;
- (void)contentList:(id)arg1 indexedContentDidLoadContent:(id)arg2 atSection:(unsigned long long)arg3;
- (void)contentList:(id)arg1 indexedContentWillLoadContent:(id)arg2 atSection:(unsigned long long)arg3;
- (void)contentList:(id)arg1 indexedContent:(id)arg2 atSection:(unsigned long long)arg3 didReloadItemsAtIndexes:(id)arg4;
- (void)contentList:(id)arg1 indexedContent:(id)arg2 atSection:(unsigned long long)arg3 didDeleteItemsAtIndexes:(id)arg4;
- (void)contentList:(id)arg1 indexedContent:(id)arg2 atSection:(unsigned long long)arg3 didInsertItemsAtIndexes:(id)arg4;
- (void)contentList:(id)arg1 didRemoveIndexedContent:(id)arg2 fromSection:(unsigned long long)arg3;
- (void)contentList:(id)arg1 didReplaceIndexedContent:(id)arg2 withLoadableContent:(id)arg3 atSection:(unsigned long long)arg4;
- (void)contentList:(id)arg1 didMoveIndexedContent:(id)arg2 fromSection:(unsigned long long)arg3 toSection:(unsigned long long)arg4;
- (void)contentList:(id)arg1 didAddIndexedContent:(id)arg2 atSection:(unsigned long long)arg3;
- (void)contentList:(id)arg1 didReloadIndexedContent:(id)arg2 atSection:(unsigned long long)arg3;
- (void)contentList:(id)arg1 didLoadAllContentWithErrors:(id)arg2;
- (void)contentDidEndUpdates:(id)arg1;
- (void)contentWillBeginUpdates:(id)arg1;
- (void)content:(id)arg1 didReceiveError:(id)arg2;
- (void)contentDidLoadContent:(id)arg1;
- (void)contentWillLoadContent:(id)arg1;
- (void)sendBeginUpdatesIfNeeded;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (unsigned long long)indexOfNestedContentWithName:(id)arg1;
- (unsigned long long)indexOfNestedContent:(id)arg1;
- (id)nestedContentWithName:(id)arg1;
- (void)loadContent:(CDUnknownBlockType)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)dataForItemAtIndexPath:(id)arg1;
- (id)indexedContentAtSection:(unsigned long long)arg1;
- (id)removeIndexedContentAtIndex:(unsigned long long)arg1;
- (_Bool)moveIndexedContentFromSection:(unsigned long long)arg1 toSection:(unsigned long long)arg2;
- (_Bool)replaceIndexedContentAtSection:(unsigned long long)arg1 withContent:(id)arg2;
- (_Bool)insertIndexedContent:(id)arg1 atSection:(unsigned long long)arg2;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic) NSArray *indexedContentList;
- (void)dealloc;
- (id)initWithContent:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
