//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SendBirdSDK/SBDBaseMessage.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, SBDSender;

@interface SBDUserMessage : SBDBaseMessage
{
    _Bool _isBlocked;
    NSString *_message;
    SBDSender *_sender;
    NSString *_requestId;
    NSDictionary *_translations;
    unsigned long long _sendingStatus;
    unsigned long long _errorCode;
    NSMutableArray *_mutableRequestedMentionUserIds;
}

@property(retain, nonatomic) NSMutableArray *mutableRequestedMentionUserIds; // @synthesize mutableRequestedMentionUserIds=_mutableRequestedMentionUserIds;
@property _Bool isBlocked; // @synthesize isBlocked=_isBlocked;
@property(nonatomic) unsigned long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned long long sendingStatus; // @synthesize sendingStatus=_sendingStatus;
@property(retain, nonatomic) NSDictionary *translations; // @synthesize translations=_translations;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic, getter=sender) SBDSender *sender; // @synthesize sender=_sender;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)copyWithFailedState;
- (id)description;
- (id)valueForUndefinedKey:(id)arg1;
- (void)resetErrorCode;
@property(readonly, nonatomic, getter=getRequestState) unsigned long long requestState;
- (_Bool)isResendable;
- (_Bool)isEqualToMessage:(id)arg1;
- (id)targetLanguages;
- (id)_toDictionary;
- (id)serialize;
@property(readonly, nonatomic) NSArray *requestedMentionUserIds;
- (void)setRequestedMentionUserIds:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
