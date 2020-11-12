//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNStreamBehavior-Protocol.h"

@class DYNLocalLinkChangeDetector, DYNPostboxContent, NSString;
@protocol DYNStream, GIPAccountID;

@interface DYNPostboxLinksBehavior : NSObject <DYNStreamBehavior>
{
    id <DYNStream> _stream;
    id <GIPAccountID> _accountID;
    _Bool _fetchingAnnotations;
    _Bool _fetchAnnotationsAgainWhenDone;
    DYNLocalLinkChangeDetector *_linkChangeDetector;
    DYNPostboxContent *_currentPostboxContent;
}

- (void).cxx_destruct;
- (_Bool)isTextTooLongForAnnotationsRequest:(id)arg1;
- (void)fetchPreviewAnnotationsForStreamState:(id)arg1;
- (void)finalizeWithStreamState:(id)arg1;
- (void)handleEventsInStream:(id)arg1 withState:(id)arg2 oldState:(id)arg3;
- (void)initializeWithStream:(id)arg1 state:(id)arg2;
- (id)initWithAccountID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
