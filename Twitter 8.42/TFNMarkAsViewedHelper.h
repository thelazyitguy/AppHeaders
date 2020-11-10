//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFNUI/TFNCellVisibilityListener-Protocol.h>
#import <TFNUI/TFNViewControllerEventObserver-Protocol.h>
#import <TFNUI/UIScrollViewDelegate-Protocol.h>

@class NSString, TFNDataViewController, TFSTimer;
@protocol TFNMarkAsViewedDelegate;

@interface TFNMarkAsViewedHelper : NSObject <TFNViewControllerEventObserver, UIScrollViewDelegate, TFNCellVisibilityListener>
{
    TFSTimer *_timer;
    TFNDataViewController *_dataViewController;
    id <TFNMarkAsViewedDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TFNMarkAsViewedDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak TFNDataViewController *dataViewController; // @synthesize dataViewController=_dataViewController;
- (id)_filterVisibleCells:(id)arg1;
- (void)_markAsViewed;
- (void)_cancelScheduledMarkAsViewed;
- (void)_scheduleMarkAsViewed;
- (void)cellWillDisplay:(id)arg1 inDataViewController:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)viewControllerViewWillFullyDisappear:(id)arg1;
- (void)viewControllerViewDidFullyAppear:(id)arg1;
- (void)didEndScrolling;
- (void)willBeginDragging;
- (void)dealloc;
- (id)initWithDataViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

