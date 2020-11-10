//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GHKChatFetcher, GHKConfig, GHKReceiverConfig, GHKResumeChatButton, GHKSessionDataManager, NSTimer, SUPMetricsReporter;
@protocol GHKPIPDelegate;

@interface GHKPIP : NSObject
{
    _Bool _isCurrentUIPortrait;
    _Bool _resumeChatClicked;
    unsigned long long _chatState;
    id <GHKPIPDelegate> _delegate;
    GHKResumeChatButton *_resumeChatButton;
    GHKChatFetcher *_chatFetcher;
    GHKConfig *_config;
    SUPMetricsReporter *_metricsReporter;
    GHKReceiverConfig *_receiverConfig;
    GHKSessionDataManager *_sessionDataManager;
    NSTimer *_removePIPDelayTimer;
}

+ (id)objectionRequires;
- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *removePIPDelayTimer; // @synthesize removePIPDelayTimer=_removePIPDelayTimer;
@property(retain, nonatomic) GHKSessionDataManager *sessionDataManager; // @synthesize sessionDataManager=_sessionDataManager;
@property(retain, nonatomic) GHKReceiverConfig *receiverConfig; // @synthesize receiverConfig=_receiverConfig;
@property(retain, nonatomic) SUPMetricsReporter *metricsReporter; // @synthesize metricsReporter=_metricsReporter;
@property(retain, nonatomic) GHKConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) GHKChatFetcher *chatFetcher; // @synthesize chatFetcher=_chatFetcher;
@property(retain, nonatomic) GHKResumeChatButton *resumeChatButton; // @synthesize resumeChatButton=_resumeChatButton;
@property(nonatomic) __weak id <GHKPIPDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onChatStateChangedNotification:(id)arg1;
- (void)retrieveAndUpdateUnreadMessagesForConversation:(id)arg1 lastSeenEventID:(unsigned long long)arg2;
- (void)statusBarOrientationChanged:(id)arg1;
- (void)onConversationEventNotification:(id)arg1;
- (void)transitionToActiveChatState;
- (void)onButtonUp;
- (void)onButtonDrag:(id)arg1 withEvent:(id)arg2;
- (void)onButtonDown:(id)arg1 withEvent:(id)arg2;
- (void)handleChatEnded;
- (void)removeResumeChatComponent;
- (void)showResumeChatComponent;
- (id)init;

@end

