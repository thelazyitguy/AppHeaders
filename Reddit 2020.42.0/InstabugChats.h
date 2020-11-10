//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Instabug/InstabugFrameworks-Protocol.h>

@class IBGOperation, NSString;

@interface InstabugChats : NSObject <InstabugFrameworks>
{
    IBGOperation *_initializationOperation;
}

+ (void)destroy;
+ (void)setOnNewMessageHandler:(CDUnknownBlockType)arg1;
+ (void)setChatNotificationEnabled:(_Bool)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) IBGOperation *initializationOperation; // @synthesize initializationOperation=_initializationOperation;
- (void).cxx_destruct;
- (id)initializationOperations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
