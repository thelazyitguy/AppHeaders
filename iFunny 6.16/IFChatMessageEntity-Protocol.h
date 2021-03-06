//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NOCChatItem-Protocol.h>

@class NSArray, NSDate, NSObject, NSString;
@protocol IFChatUserEntity;

@protocol IFChatMessageEntity <NOCChatItem>
@property(readonly) struct CGSize thumbSize;
@property(readonly) NSString *thumbURL;
@property(readonly) NSString *contentURL;
@property(readonly) _Bool isDeliveryError;
@property(readonly) NSArray *users;
@property(readonly) NSObject<IFChatUserEntity> *user;
@property(readonly) NSString *chatID;
@property(readonly) NSString *messageID;
@property(readonly) NSDate *messageDate;
@property(readonly) NSString *avatarUrl;
@property(readonly) NSString *text;
- (void)setShouldCutNonIFunnyURL:(_Bool)arg1;

@optional
@property(readonly) long long messageId;
@end

