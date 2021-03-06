//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNDMSupplementalRenderDelegate-Protocol.h"
#import "DYNStreamBehavior-Protocol.h"

@class DYNFailedMessagesBarView, NSString;
@protocol DYNStream, GIPAccountID;

@interface DYNFailedMessageHidingBehavior : NSObject <DYNStreamBehavior, DYNDMSupplementalRenderDelegate>
{
    id <GIPAccountID> _accountID;
    _Bool _shouldHideFailedMessages;
    unsigned long long _numberOfHiddenMessages;
    DYNFailedMessagesBarView *_failedMessagesBar;
    id <DYNStream> _stream;
}

- (void).cxx_destruct;
- (void)didTapExpandButton;
- (id)nonFailedMessageFilteringPredicate;
- (id)modelAfterRemovingObjectsFromModel:(id)arg1 withState:(id)arg2;
- (id)modelAfterProcessingObjectsInModel:(id)arg1 withState:(id)arg2;
- (id)modelAfterInsertingObjectsIntoModel:(id)arg1 withState:(id)arg2;
- (void)createAndAddFailedMessagesBarToStream:(id)arg1;
- (void)handleEventsInStream:(id)arg1 withState:(id)arg2 oldState:(id)arg3;
- (void)finalizeWithStreamState:(id)arg1;
- (void)initializeWithStream:(id)arg1 state:(id)arg2;
- (id)initWithAccountID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

