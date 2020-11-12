//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol RCHAccountIDConverter, RCHInterstitialWebviewControllerProtocol, RCHPolledNotificationsHelperDelegate;

@interface RCHPolledNotificationsHelper : NSObject
{
    id <RCHInterstitialWebviewControllerProtocol> _interstitialWebviewController;
    id <RCHAccountIDConverter> _accountIDConverter;
    id <RCHPolledNotificationsHelperDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <RCHPolledNotificationsHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <RCHAccountIDConverter> accountIDConverter; // @synthesize accountIDConverter=_accountIDConverter;
@property(readonly, nonatomic) id <RCHInterstitialWebviewControllerProtocol> interstitialWebviewController; // @synthesize interstitialWebviewController=_interstitialWebviewController;
- (void)invokeOnMainThreadWithBlock:(CDUnknownBlockType)arg1;
- (void)showNotification:(id)arg1 gaiaAccountID:(id)arg2 URL:(id)arg3 fetchingError:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)handleNotification:(id)arg1 gaiaAccountID:(id)arg2 fetchingError:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)handleNotifications:(id)arg1 notificationIdentifiersToGaiaIDs:(id)arg2 currentIndex:(unsigned long long)arg3 fetchingError:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)sortedNotificationsFromNotifications:(id)arg1;
- (id)notificationIdentifiersToGaiaIDsForNotifications:(id)arg1;
- (void)handleRemoteNotifications:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithInterstitialWebviewController:(id)arg1 accountIDConverter:(id)arg2 delegate:(id)arg3;

@end
