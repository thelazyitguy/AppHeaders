//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JSLMutableValue-Protocol.h"
#import "JavaIoSerializable-Protocol.h"

@class NSString;
@protocol AddOnsCmlListenableMutableValue_JsListener, AddOnsCmlListenableMutableValue_Listener, JSLMutableValue;

@interface AddOnsCmlListenableMutableValue : NSObject <JSLMutableValue, JavaIoSerializable>
{
    id <JSLMutableValue> mutableValue_;
    id <AddOnsCmlListenableMutableValue_Listener> listener_;
    id <AddOnsCmlListenableMutableValue_JsListener> jsListener_;
}

- (void)dealloc;
- (void)setValueWithId:(id)arg1;
- (id)getValue;
- (void)setJsListenerWithAddOnsCmlListenableMutableValue_JsListener:(id)arg1;
- (void)setListenerWithAddOnsCmlListenableMutableValue_Listener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
