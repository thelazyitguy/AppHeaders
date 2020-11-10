//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/PTVCameraPreviewGuestCallViewController.h>

#import <PeriscopeSDK/PTVGuestCallButtonWithSubtitleTableViewCellDelegate-Protocol.h>

@class NSString, PTVGuestCallerController;
@protocol PTVHangUpGuestCallViewControllerDelegate;

@interface PTVHangUpGuestCallViewController : PTVCameraPreviewGuestCallViewController <PTVGuestCallButtonWithSubtitleTableViewCellDelegate>
{
    PTVHangUpGuestCallViewController *_weakSelf;
    id <PTVHangUpGuestCallViewControllerDelegate> _delegate;
    PTVGuestCallerController *_guestCallerController;
    NSString *_previousScreen;
    _Bool _didCompleteHangUp;
}

+ (id)HangUpSubtitle:(_Bool)arg1;
+ (id)HangUpButtonTitle;
- (void).cxx_destruct;
- (id)initWithGuestCallerController:(id)arg1 sharedVideoPreviewView:(id)arg2 loggedInUser:(id)arg3 watcher:(id)arg4 delegate:(id)arg5 previousScreen:(id)arg6;
- (void)guestCallButtonWithSubtitleTableViewCell:(id)arg1 didSelectButton:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

