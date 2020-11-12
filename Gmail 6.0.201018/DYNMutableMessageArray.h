//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol DYNMessage;

@interface DYNMutableMessageArray : NSObject
{
    NSMutableArray *_messages;
}

- (void).cxx_destruct;
- (unsigned long long)indexOfLastSentMessage;
- (void)updateMessage:(id)arg1 withOldIndex:(unsigned long long)arg2;
- (void)addMessage:(id)arg1;
- (unsigned long long)indexOfMessageWithMessageID:(id)arg1;
- (unsigned long long)indexOfMessage:(id)arg1;
@property(readonly, nonatomic) id <DYNMessage> lastSentMessage;
- (id)messageWithMessageID:(id)arg1;
- (void)addMessageUnlessAlreadyPresent:(id)arg1;
- (_Bool)containsMessageWithID:(id)arg1;
- (_Bool)removeMessageWithID:(id)arg1;
- (void)updateOrAddMessage:(id)arg1;
- (void)appendMessages:(id)arg1;
- (void)prependMessages:(id)arg1;
- (unsigned long long)insertionIndexForMessage:(id)arg1;
@property(readonly, nonatomic) NSArray *messages;
- (id)initWithMessages:(id)arg1;

@end
