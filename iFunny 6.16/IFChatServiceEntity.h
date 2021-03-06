//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFChatMessageEntity-Protocol.h>

@class NSArray, NSDate, NSString;
@protocol IFChatUserEntity;

@interface IFChatServiceEntity : NSObject <IFChatMessageEntity>
{
    NSDate *_messageDate;
}

- (void).cxx_destruct;
@property(readonly) NSDate *messageDate; // @synthesize messageDate=_messageDate;
- (void)setShouldCutNonIFunnyURL:(_Bool)arg1;
@property(readonly) NSString *contentURL;
@property(readonly) struct CGSize thumbSize;
@property(readonly) NSString *thumbURL;
- (id)uniqueIdentifier;
- (id)type;
@property(readonly) _Bool isDeliveryError;
- (_Bool)isOutgoing;
@property(readonly) NSObject<IFChatUserEntity> *user;
@property(readonly) NSArray *users;
@property(readonly) NSString *chatID;
@property(readonly) NSString *messageID;
@property(readonly) NSString *avatarUrl;
@property(readonly) NSString *text;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) long long messageId;
@property(readonly) Class superclass;

@end

