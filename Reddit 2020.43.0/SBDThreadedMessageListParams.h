//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SBDThreadedMessageListParams : NSObject
{
    _Bool _isInclusive;
    _Bool _reverse;
    _Bool _includeMetaArray;
    _Bool _includeReactions;
    _Bool _includeParentMessageText;
    long long _previousResultSize;
    long long _nextResultSize;
    long long _messageType;
    NSString *_customType;
    NSArray *_senderUserIds;
}

@property _Bool includeParentMessageText; // @synthesize includeParentMessageText=_includeParentMessageText;
@property _Bool includeReactions; // @synthesize includeReactions=_includeReactions;
@property _Bool includeMetaArray; // @synthesize includeMetaArray=_includeMetaArray;
@property(retain) NSArray *senderUserIds; // @synthesize senderUserIds=_senderUserIds;
@property(retain) NSString *customType; // @synthesize customType=_customType;
@property long long messageType; // @synthesize messageType=_messageType;
@property _Bool reverse; // @synthesize reverse=_reverse;
@property _Bool isInclusive; // @synthesize isInclusive=_isInclusive;
@property long long nextResultSize; // @synthesize nextResultSize=_nextResultSize;
@property long long previousResultSize; // @synthesize previousResultSize=_previousResultSize;
- (void).cxx_destruct;

@end

