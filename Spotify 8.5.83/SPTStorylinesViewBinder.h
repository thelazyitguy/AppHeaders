//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTStorylinesViewModelDelegate-Protocol.h"

@class NSString, SPTStorylinesFailedView, SPTStorylinesLoadingView, SPTStorylinesOfflineView, SPTStorylinesView, SPTStorylinesViewModel;

@interface SPTStorylinesViewBinder : NSObject <SPTStorylinesViewModelDelegate>
{
    SPTStorylinesViewModel *_viewModel;
    SPTStorylinesView *_storylinesView;
    SPTStorylinesLoadingView *_loadingView;
    SPTStorylinesFailedView *_failedView;
    SPTStorylinesOfflineView *_offlineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTStorylinesOfflineView *offlineView; // @synthesize offlineView=_offlineView;
@property(retain, nonatomic) SPTStorylinesFailedView *failedView; // @synthesize failedView=_failedView;
@property(retain, nonatomic) SPTStorylinesLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) SPTStorylinesView *storylinesView; // @synthesize storylinesView=_storylinesView;
@property(retain, nonatomic) SPTStorylinesViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)performUIUpdatesWithBlock:(CDUnknownBlockType)arg1 withDuration:(double)arg2;
- (void)currentImageDidChange:(id)arg1 atCardIndex:(unsigned long long)arg2;
- (void)autoplayTriggeredDidChange:(_Bool)arg1;
- (void)stateDidChange:(id)arg1 oldState:(id)arg2;
- (id)initWithViewModel:(id)arg1 storylinesView:(id)arg2 loadingView:(id)arg3 failedView:(id)arg4 offlineView:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

