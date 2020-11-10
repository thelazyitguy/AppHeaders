//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GRWMessagingCacheDelegate-Protocol.h>
#import <Module_Framework/GRWMessagingDisplayQueueDelegate-Protocol.h>

@class GRWCappedMessageEvaluator, GRWDeviceState, GRWMessagingCache, GRWMessagingDisplayPresentationController, GRWMessagingDisplayQueue, GRWMessagingEvaluator, GRWMessagingEventCounter, GRWMessagingImpressionCounter, GRWMessagingTransformer, GRWUserAccounts, NSString;
@protocol GRWMessagingDelegate;

@interface GRWMessaging : NSObject <GRWMessagingDisplayQueueDelegate, GRWMessagingCacheDelegate>
{
    id <GRWMessagingDelegate> _delegate;
    CDUnknownBlockType _permissionForMessageBlock;
    CDUnknownBlockType _completionBlock;
    GRWUserAccounts *_userAccounts;
    GRWMessagingCache *_messageCache;
    GRWCappedMessageEvaluator *_cappedMessageEvaluator;
    GRWMessagingEventCounter *_eventCounter;
    GRWMessagingEvaluator *_evaluator;
    GRWMessagingDisplayQueue *_displayQueue;
    GRWMessagingImpressionCounter *_impressionCounter;
    GRWDeviceState *_deviceState;
    GRWMessagingDisplayPresentationController *_presentationController;
    GRWMessagingTransformer *_transformer;
}

+ (void)viewDidAppear;
+ (void)requestPermissionType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)dismissVisibleMessages;
+ (id)transformer;
+ (id)delegate;
+ (void)setDelegate:(id)arg1;
+ (void)listenForMessages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)setupWithAPIKey:(id)arg1 userAccounts:(id)arg2 deviceState:(id)arg3;
+ (id)operationQueue;
+ (id)sharedInstance;
+ (void)initialize;
+ (id)eventSignaturesForTargets:(id)arg1;
+ (id)eventSignaturesForTrigger:(id)arg1;
+ (void)runEventLogJanitor;
+ (void)clearLoggingData;
+ (void)fetchMessagesFromServerWithCompletion:(CDUnknownBlockType)arg1;
+ (_Bool)purgeMessagingCache;
- (void).cxx_destruct;
@property(retain, nonatomic) GRWMessagingTransformer *transformer; // @synthesize transformer=_transformer;
@property(retain, nonatomic) GRWMessagingDisplayPresentationController *presentationController; // @synthesize presentationController=_presentationController;
@property(retain, nonatomic) GRWDeviceState *deviceState; // @synthesize deviceState=_deviceState;
@property(retain, nonatomic) GRWMessagingImpressionCounter *impressionCounter; // @synthesize impressionCounter=_impressionCounter;
@property(retain, nonatomic) GRWMessagingDisplayQueue *displayQueue; // @synthesize displayQueue=_displayQueue;
@property(retain, nonatomic) GRWMessagingEvaluator *evaluator; // @synthesize evaluator=_evaluator;
@property(retain, nonatomic) GRWMessagingEventCounter *eventCounter; // @synthesize eventCounter=_eventCounter;
@property(retain, nonatomic) GRWCappedMessageEvaluator *cappedMessageEvaluator; // @synthesize cappedMessageEvaluator=_cappedMessageEvaluator;
@property(retain, nonatomic) GRWMessagingCache *messageCache; // @synthesize messageCache=_messageCache;
@property(retain, nonatomic) GRWUserAccounts *userAccounts; // @synthesize userAccounts=_userAccounts;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType permissionForMessageBlock; // @synthesize permissionForMessageBlock=_permissionForMessageBlock;
@property(nonatomic) __weak id <GRWMessagingDelegate> delegate; // @synthesize delegate=_delegate;
- (id)clientPermissionAsString:(long long)arg1;
- (void)logUserAction:(long long)arg1 bundleIdentifier:(id)arg2 forMessage:(id)arg3;
- (void)messagingCacheDidUpdate:(id)arg1;
- (void)showNextQueuedMessageForUserID:(id)arg1;
- (_Bool)tryToDisplayMessage:(id)arg1 forUserID:(id)arg2 permissionHandler:(CDUnknownBlockType)arg3;
- (void)displayQueue:(id)arg1 didAddMessagesForUserID:(id)arg2;
- (void)nukeSetup;
- (void)setupWithAPIKey:(id)arg1 userAccounts:(id)arg2 deviceState:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

