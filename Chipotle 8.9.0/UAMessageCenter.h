//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Airship/UAComponent.h>

#import <Airship/UAPushableComponent-Protocol.h>

@class UADefaultMessageCenterUI, UAInboxMessageList, UAUser;
@protocol UAMessageCenterDisplayDelegate;

@interface UAMessageCenter : UAComponent <UAPushableComponent>
{
    id <UAMessageCenterDisplayDelegate> _displayDelegate;
    UADefaultMessageCenterUI *_defaultUI;
    UAInboxMessageList *_messageList;
    UAUser *_user;
}

+ (id)messageCenterWithDataStore:(id)arg1 user:(id)arg2 messageList:(id)arg3 defaultUI:(id)arg4 notificationCenter:(id)arg5;
+ (id)messageCenterWithDataStore:(id)arg1 config:(id)arg2 channel:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UAUser *user; // @synthesize user=_user;
@property(retain, nonatomic) UAInboxMessageList *messageList; // @synthesize messageList=_messageList;
@property(retain, nonatomic) UADefaultMessageCenterUI *defaultUI; // @synthesize defaultUI=_defaultUI;
@property(nonatomic) __weak id <UAMessageCenterDisplayDelegate> displayDelegate; // @synthesize displayDelegate=_displayDelegate;
- (void)receivedRemoteNotification:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)onComponentEnableChange;
- (void)userCreated;
- (void)applicationDidTransitionToForeground;
- (void)dismiss;
- (void)dismiss:(_Bool)arg1;
- (void)displayMessageForID:(id)arg1;
- (void)displayMessageForID:(id)arg1 animated:(_Bool)arg2;
- (void)display;
- (void)display:(_Bool)arg1;
- (id)initWithDataStore:(id)arg1 user:(id)arg2 messageList:(id)arg3 defaultUI:(id)arg4 notificationCenter:(id)arg5;

@end
