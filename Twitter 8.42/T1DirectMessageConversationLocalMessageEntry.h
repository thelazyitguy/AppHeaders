//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TFNDirectMessageConversationEntryIdentifier;
@protocol TFNDirectMessageConversation;

@interface T1DirectMessageConversationLocalMessageEntry : NSObject
{
    // Error parsing type: , name: message
    // Error parsing type: , name: sortKey
    // Error parsing type: , name: identifier
    // Error parsing type: , name: conversation
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithConversation:(id)arg1 message:(id)arg2;
@property(nonatomic) __weak id <TFNDirectMessageConversation> conversation; // @synthesize conversation;
@property(nonatomic, readonly) TFNDirectMessageConversationEntryIdentifier *identifier; // @synthesize identifier;
@property(nonatomic) CDStruct_778018ce sortKey; // @synthesize sortKey;
@property(nonatomic, readonly) NSString *message;

@end

