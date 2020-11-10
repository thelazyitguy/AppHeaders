//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTBaseInnerTubeViewController.h>

#import <Module_Framework/YTCollectionViewScrollObserverResponderProvider-Protocol.h>
#import <Module_Framework/YTRendererController-Protocol.h>

@class NSHashTable, NSString;
@protocol YTCollectionViewScrollObserverResponderProvider, YTResponder;

@interface YTCommentRepliesEngagementPanelContentViewController : YTBaseInnerTubeViewController <YTCollectionViewScrollObserverResponderProvider, YTRendererController>
{
    NSHashTable *_scrollObservers;
    id <YTCollectionViewScrollObserverResponderProvider> _scrollObserverResponderProvider;
    id <YTResponder> _parentResponder;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)didLoadWithResponse:(id)arg1;
- (void)loadWithResponse:(id)arg1;
- (void)didAddResponseViewController;
- (void)loadWithModel:(id)arg1;
- (void)removeScrollObserver:(id)arg1;
- (void)addScrollObserver:(id)arg1;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

