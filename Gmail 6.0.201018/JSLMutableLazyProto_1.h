//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JSLImmutableLazyProto_FieldNumberIterator-Protocol.h"

@class JSLMutableLazyProto, NSString;

@interface JSLMutableLazyProto_1 : NSObject <JSLImmutableLazyProto_FieldNumberIterator>
{
    JSLMutableLazyProto *this$0_;
    int nextIndex_;
}

- (void)dealloc;
- (_Bool)hasNext;
- (int)next;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

