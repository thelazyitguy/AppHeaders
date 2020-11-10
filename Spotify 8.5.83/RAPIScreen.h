//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDViewDelegate-Protocol.h"

@class IDView, NSString, RAPIContext, RAPIScreenConfig;

@interface RAPIScreen : NSObject <IDViewDelegate>
{
    _Bool _updateScreenQueued;
    _Bool _visible;
    _Bool _blockInvalidateScreen;
    _Bool _screenVisibleAndHasBeenFocused;
    RAPIContext *_rapiContext;
    IDView *_idViewBase;
    long long _screenIndex;
    RAPIScreenConfig *_rapiScreenConfig;
    long long _contentState;
}

- (void).cxx_destruct;
@property _Bool screenVisibleAndHasBeenFocused; // @synthesize screenVisibleAndHasBeenFocused=_screenVisibleAndHasBeenFocused;
@property _Bool blockInvalidateScreen; // @synthesize blockInvalidateScreen=_blockInvalidateScreen;
@property _Bool visible; // @synthesize visible=_visible;
@property _Bool updateScreenQueued; // @synthesize updateScreenQueued=_updateScreenQueued;
@property long long contentState; // @synthesize contentState=_contentState;
@property(retain) RAPIScreenConfig *rapiScreenConfig; // @synthesize rapiScreenConfig=_rapiScreenConfig;
@property long long screenIndex; // @synthesize screenIndex=_screenIndex;
@property(retain) IDView *idViewBase; // @synthesize idViewBase=_idViewBase;
@property(retain) RAPIContext *rapiContext; // @synthesize rapiContext=_rapiContext;
@property(readonly, copy) NSString *description;
- (void)setCheckmarkPosition:(long long)arg1 forGroup:(long long)arg2;
- (void)onDisconnectedFromHeadunit;
- (void)onConnectedToHeadunit;
- (void)updateFocus;
- (void)clearScreenContent;
- (_Bool)canProvideDataImmediately;
- (void)showErrorMessage:(id)arg1;
- (void)showLoadingMessage;
- (void)updateScreenContent;
- (void)onViewDisappeared;
- (void)onViewAppeared;
- (void)onFocusLost;
- (void)onFocusGained:(long long)arg1;
- (id)getScreenDelegate;
- (void)delegate_onScreenAppearedTriggeredByScreen:(long long)arg1 andGroup:(long long)arg2 andItem:(long long)arg3;
- (void)delegate_onFocused:(long long)arg1;
- (void)delegate_onScreenChangedFrom:(long long)arg1 to:(long long)arg2 withClickedItemIndex:(long long)arg3 andGroupIndex:(long long)arg4;
- (id)delegate_getTitleForScreen:(long long)arg1;
- (void)updateScreen;
- (void)invalidateScreenWithErrorMessage:(id)arg1;
- (void)viewDidDisappear:(id)arg1;
- (void)handleViewDidAppear:(_Bool)arg1;
- (void)viewDidAppear:(id)arg1;
- (void)viewDidLoseFocus:(id)arg1;
- (void)viewDidBecomeFocused:(id)arg1;
- (id)initWithView:(id)arg1 andContext:(id)arg2 andScreenConfig:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

