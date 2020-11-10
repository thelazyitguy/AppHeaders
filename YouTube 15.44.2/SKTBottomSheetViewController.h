//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GOOBottomSheetController.h>

#import <Module_Framework/SKTShareSheet-Protocol.h>

@class NSString, UIViewController;
@protocol SKTShareSheet><GOOBottomSheetControllerDelegate, SKTShareSheetDelegate;

@interface SKTBottomSheetViewController : GOOBottomSheetController <SKTShareSheet>
{
}

- (id)closeSendKitSessionWithActionType:(unsigned long long)arg1;
- (void)cleanSelection;
@property(nonatomic) __weak id <SKTShareSheetDelegate> shareSheetDelegate;
- (void)removeSelectedContact:(id)arg1;
- (void)hideBottomSheetForFullScreenDismiss;
- (void)dismissFromPresentingViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)modalPresentationStyle;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1 displayOptions:(id)arg2 contactsDataManager:(id)arg3 advancedTransitionsService:(id)arg4 analyticsProvider:(id)arg5;

// Remaining properties
@property(readonly, nonatomic) UIViewController<SKTShareSheet><GOOBottomSheetControllerDelegate> *contentViewController; // @dynamic contentViewController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

