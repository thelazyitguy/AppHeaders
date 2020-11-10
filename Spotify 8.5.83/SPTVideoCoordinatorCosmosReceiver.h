//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SPTVideoPreferredSubtitleMessageFactory, SPTVideoStartCommandFactory;
@protocol SPTResolver, SPTVideoCoordinatorCosmosReceiverDelegate;

@interface SPTVideoCoordinatorCosmosReceiver : NSObject
{
    _Bool _subscribed;
    id <SPTVideoCoordinatorCosmosReceiverDelegate> _delegate;
    id <SPTResolver> _resolver;
    SPTVideoStartCommandFactory *_startCommandFactory;
    SPTVideoPreferredSubtitleMessageFactory *_preferredSubtitleMessageFactory;
    NSMutableDictionary *_handlers;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isSubscribed) _Bool subscribed; // @synthesize subscribed=_subscribed;
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(retain, nonatomic) SPTVideoPreferredSubtitleMessageFactory *preferredSubtitleMessageFactory; // @synthesize preferredSubtitleMessageFactory=_preferredSubtitleMessageFactory;
@property(retain, nonatomic) SPTVideoStartCommandFactory *startCommandFactory; // @synthesize startCommandFactory=_startCommandFactory;
@property(retain, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
@property(nonatomic) __weak id <SPTVideoCoordinatorCosmosReceiverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleConfig:(id)arg1;
- (void)handleCommandWithPayload:(id)arg1;
- (void)addHandlerForCommand:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)addHandlersForPlayerCommands;
- (void)addHandlerForSubscribedCommand;
- (void)unsubscribe;
- (void)subscribe;
- (void)dealloc;
- (id)initWithResolver:(id)arg1 startCommandFactory:(id)arg2 preferredSubtitleMessageFactory:(id)arg3;

@end

