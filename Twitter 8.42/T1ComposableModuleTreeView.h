//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/TFNComposableViewHost-Protocol.h>

@class NSString, T1BadgedAvatarView, T1ComposableModuleTreeViewLayoutState, T1TombstoneView, TFNComposableViewSet;
@protocol TFNTwitterConversationTreeContextProvider;

@interface T1ComposableModuleTreeView : UIView <TFNComposableViewHost>
{
    TFNComposableViewSet *_viewSet;
    id <TFNTwitterConversationTreeContextProvider> _viewModel;
    T1BadgedAvatarView *_avatarView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) T1BadgedAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) id <TFNTwitterConversationTreeContextProvider> viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) TFNComposableViewSet *viewSet; // @synthesize viewSet=_viewSet;
- (id)_t1_updateLayoutState;
- (void)layoutSubviews;
@property(retain, nonatomic) T1ComposableModuleTreeViewLayoutState *layoutState;
@property(readonly, nonatomic) T1TombstoneView *tombstoneView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
