//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, PTVWeakSet;

@interface PTVChatTableModel : NSObject
{
    PTVWeakSet *_observers;
    NSMutableArray *_messages;
    _Bool _numberOfChatMessages;
    unsigned long long _numberOfUnreadMessages;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long numberOfUnreadMessages; // @synthesize numberOfUnreadMessages=_numberOfUnreadMessages;
@property(readonly, nonatomic) _Bool numberOfChatMessages; // @synthesize numberOfChatMessages=_numberOfChatMessages;
- (void)setNumberOfUnreadMessages:(unsigned long long)arg1;
- (void)updateNumberOfUnreadMessages;
- (_Bool)markMessagesReadAtOrBeforeIndex:(unsigned long long)arg1;
- (void)clearMessages;
- (void)reduceNumberOfMessagesTo:(unsigned long long)arg1;
- (void)replaceMessagesWithMessages:(id)arg1;
- (void)appendMessage:(id)arg1;
@property(readonly, nonatomic) NSArray *messages;
- (void)notifyWithBlock:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

@end

