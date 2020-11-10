//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, SPTInAppMessageEngine, SPTInAppMessageNetworkClient, SPTInAppMessageSDKMessageController, SPTInAppMessageSDKMessagePreviewController, SPTInAppMessageSDKTriggerListController;
@protocol SPTInAppMessageDataLoader, SPTInAppMessageLogger, SPTInAppMessageRequester, SPTInAppMessageSDKMessagePreviewReceiver, SPTInAppMessageSDKMessageReceiver, SPTInAppMessageSDKTriggerListObserver;

@interface SPTInAppMessageManager : NSObject
{
    _Bool _messagePreviewControllerObservingNetworkClient;
    id <SPTInAppMessageDataLoader> _dataLoader;
    id <SPTInAppMessageLogger> _logger;
    id <SPTInAppMessageRequester> _messageRequester;
    id <SPTInAppMessageSDKMessageReceiver> _messageReceiver;
    id <SPTInAppMessageSDKMessagePreviewReceiver> _messagePreviewReceiver;
    SPTInAppMessageNetworkClient *_networkClient;
    SPTInAppMessageEngine *_engine;
    SPTInAppMessageSDKTriggerListController *_triggerListController;
    SPTInAppMessageSDKMessageController *_messageController;
    SPTInAppMessageSDKMessagePreviewController *_messagePreviewController;
    NSDictionary *_actionHandlers;
    NSArray *_supportedFormats;
    NSArray *_supportedActions;
    NSArray *_supportedTriggerTypes;
    id <SPTInAppMessageSDKTriggerListObserver> _triggerListObserver;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTInAppMessageSDKTriggerListObserver> triggerListObserver; // @synthesize triggerListObserver=_triggerListObserver;
@property(nonatomic) _Bool messagePreviewControllerObservingNetworkClient; // @synthesize messagePreviewControllerObservingNetworkClient=_messagePreviewControllerObservingNetworkClient;
@property(readonly, copy, nonatomic) NSArray *supportedTriggerTypes; // @synthesize supportedTriggerTypes=_supportedTriggerTypes;
@property(readonly, copy, nonatomic) NSArray *supportedActions; // @synthesize supportedActions=_supportedActions;
@property(readonly, copy, nonatomic) NSArray *supportedFormats; // @synthesize supportedFormats=_supportedFormats;
@property(readonly, copy, nonatomic) NSDictionary *actionHandlers; // @synthesize actionHandlers=_actionHandlers;
@property(retain, nonatomic) SPTInAppMessageSDKMessagePreviewController *messagePreviewController; // @synthesize messagePreviewController=_messagePreviewController;
@property(retain, nonatomic) SPTInAppMessageSDKMessageController *messageController; // @synthesize messageController=_messageController;
@property(retain, nonatomic) SPTInAppMessageSDKTriggerListController *triggerListController; // @synthesize triggerListController=_triggerListController;
@property(retain, nonatomic) SPTInAppMessageEngine *engine; // @synthesize engine=_engine;
@property(retain, nonatomic) SPTInAppMessageNetworkClient *networkClient; // @synthesize networkClient=_networkClient;
@property(retain, nonatomic) id <SPTInAppMessageSDKMessagePreviewReceiver> messagePreviewReceiver; // @synthesize messagePreviewReceiver=_messagePreviewReceiver;
@property(retain, nonatomic) id <SPTInAppMessageSDKMessageReceiver> messageReceiver; // @synthesize messageReceiver=_messageReceiver;
@property(readonly, nonatomic) id <SPTInAppMessageRequester> messageRequester; // @synthesize messageRequester=_messageRequester;
@property(readonly, nonatomic) id <SPTInAppMessageLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTInAppMessageDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
- (void)startTriggerEngine;
- (id)createMessagePreviewController;
- (id)createMessageController;
- (id)createTriggerListController;
- (id)createNetworkClient;
- (id)createSDKEngine;
- (id)provideMessageRequester;
- (void)dealloc;
- (id)initWithDataLoader:(id)arg1 logger:(id)arg2 supportedFormats:(id)arg3 supportedTriggerTypes:(id)arg4 actionHandlers:(id)arg5 messageReceiver:(id)arg6 messagePreviewReceiver:(id)arg7 triggerListObserver:(id)arg8;

@end

