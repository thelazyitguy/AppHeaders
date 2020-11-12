//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "INSPersistentStore-Protocol.h"

@class INSPersistentStoreStack, NSString;
@protocol INSLogger;

@interface INSPersistentStoreImplementation : NSObject <INSPersistentStore>
{
    INSPersistentStoreStack *_stack;
    id <INSLogger> _logger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <INSLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) INSPersistentStoreStack *stack; // @synthesize stack=_stack;
- (unsigned long long)countMessagesInContext:(id)arg1 predicate:(id)arg2;
- (id)installIdWithContext:(id)arg1 predicate:(id)arg2;
- (id)sequenceNumbersMatchingPredicate:(id)arg1 limit:(unsigned long long)arg2 context:(id)arg3;
- (id)messagesMatchingPredicate:(id)arg1 sortDescriptor:(id)arg2 limit:(unsigned long long)arg3 context:(id)arg4;
- (id)fetchInstallIdEntityWithContext:(id)arg1;
- (id)fetchSequenceNumberEntitiesWithSequenceIds:(id)arg1;
- (id)fetchFirstMessageEntitiesWithSequenceNumbers:(id)arg1;
- (id)incrementMessageNumberOnPrivateMOC;
- (void)deleteInstallIdEntityOnPrivateMOC;
- (id)getInstallIdEntityProxyOnPrivateMOC;
- (_Bool)isCurrentlyOnPrivateMOCDispatchQueue;
- (void)performBlockOnPrivateMOCQueue:(CDUnknownBlockType)arg1;
- (id)getEventSenderStatsNodesOnPrivateMOCWithSequenceIds:(id)arg1;
- (id)getInstallIdOnPrivateMOC;
- (id)persistEventEnvelopeOnPrivateMOC:(id)arg1 owner:(id)arg2 authenticated:(_Bool)arg3;
- (id)fetchMessagesOnPrivateMOCWithPredicate:(id)arg1;
- (id)persistNonAuthenticatedEventEnvelopeOnPrivateMOC:(id)arg1;
- (id)persistAuthenticatedEventEnvelopeOnPrivateMOC:(id)arg1 owner:(id)arg2;
- (id)getNonAuthenticatedMessagesOnPrivateMOC;
- (id)getAuthenticatedMessagesOnPrivateMOCWithOwner:(id)arg1;
- (id)getAllMessagesOnPrivateMOC;
- (_Bool)doesContainMessageOnPrivateMOCWithId:(id)arg1;
- (void)deleteMessageOnPrivateMOCWithId:(id)arg1;
- (unsigned long long)getMessageCountOnPrivateMOC;
- (void)saveOnPrivateMOC;
- (id)incrementSequenceNumberOnPrivateMOCWithEventName:(id)arg1 sequenceId:(id)arg2;
- (id)initWithPersistentStoreStack:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
