//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SubscribedViewController.h"

@class CMRSelectMapAreaViewModel, CMRSelectMapAreaViewState;

@interface _TtC5aspen27CleanRoomListViewController : SubscribedViewController
{
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: viewState
    // Error parsing type: , name: viewModelScopeId
    // Error parsing type: , name: scrollingEnabled
    // Error parsing type: , name: headerView
    // Error parsing type: , name: listView
    // Error parsing type: , name: identifierToIndexMapping
    // Error parsing type: , name: onCleanButtonEnabledToggle
    // Error parsing type: , name: onLoading
    // Error parsing type: , name: onHeightConstraintUpdated
    // Error parsing type: , name: onSelectionChanged
    // Error parsing type: , name: onShowRoomAndZoneWarning
    // Error parsing type: , name: onFloorsLoaded
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, copy) CDUnknownBlockType onFloorsLoaded;
@property(nonatomic, copy) CDUnknownBlockType onShowRoomAndZoneWarning;
@property(nonatomic, copy) CDUnknownBlockType onSelectionChanged;
@property(nonatomic, copy) CDUnknownBlockType onHeightConstraintUpdated;
@property(nonatomic, copy) CDUnknownBlockType onLoading;
@property(nonatomic, copy) CDUnknownBlockType onCleanButtonEnabledToggle;
- (void)handleHeaderTap;
- (void)creationUnsubscribe;
- (void)creationSubscribe;
- (_Bool)shouldManageSubscription;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithScrollingEnabled:(_Bool)arg1 viewModelScopeId:(id)arg2;
@property(nonatomic, retain) CMRSelectMapAreaViewState *viewState; // @synthesize viewState;
@property(nonatomic, readonly) CMRSelectMapAreaViewModel *viewModel; // @synthesize viewModel;

@end
