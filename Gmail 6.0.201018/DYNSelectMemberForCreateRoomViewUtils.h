//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYNActivityIndicatorWrapperView, UIBarButtonItem;
@protocol DYNAlertManagerService, DYNColorSchemeService, DYNExperimentsService, DYNSelectMemberForCreateRoomViewUtilsDelegate, DYNSharedLayerService;

@interface DYNSelectMemberForCreateRoomViewUtils : NSObject
{
    DYNActivityIndicatorWrapperView *_activityIndicatorWrapperView;
    UIBarButtonItem *_doneBarButtonItem;
    UIBarButtonItem *_overflowBarButtonItem;
    UIBarButtonItem *_skipBarButtonItem;
    id <DYNSharedLayerService> _sharedLayerService;
    id <DYNAlertManagerService> _alertManagerService;
    id <DYNColorSchemeService> _colorSchemeService;
    id <DYNExperimentsService> _experimentsService;
    id <DYNSelectMemberForCreateRoomViewUtilsDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <DYNSelectMemberForCreateRoomViewUtilsDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapDoneButton;
- (void)didTapOverflowButton;
- (void)showAlertWithMessage:(id)arg1;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2 okButtonTitle:(id)arg3 okBlock:(CDUnknownBlockType)arg4;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2 okBlock:(CDUnknownBlockType)arg3;
- (void)showAlertForCreateDMFailure;
- (void)showAlertForCreateRoomFailureWithError:(id)arg1 roomTitle:(id)arg2;
- (void)showAlertForAddMemberFailureWithError:(id)arg1;
- (id)loadingBarButtonItem;
- (void)hideLoading;
- (void)showLoading;
- (void)setRightBarButtonsEnabled:(_Bool)arg1;
- (void)setRightBarButtonWithNavigationItem:(id)arg1 hasSelectedMembers:(_Bool)arg2 allowEmptySelectedMembers:(_Bool)arg3;
- (void)setUpDoneButtonIfNecessary;
- (void)setUpOverflowButton;
- (void)setUpSkipButton;
- (void)setUpRightBarButtons;
- (id)initWithAccountID:(id)arg1;

@end

