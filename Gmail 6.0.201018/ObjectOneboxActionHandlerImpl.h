//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTCmlObjectOneboxActionHandler-Protocol.h"

@class GBTNugget, GBTSmartMailInteractionForwarder, NSString;

@interface ObjectOneboxActionHandlerImpl : NSObject <JBTCmlObjectOneboxActionHandler>
{
    GBTSmartMailInteractionForwarder *_forwarder;
    GBTNugget *_nugget;
}

- (void).cxx_destruct;
- (void)configureRenderResult:(id)arg1;
- (void)handleSmartMailActionWithNSString:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withJavaUtilList:(id)arg4;
- (void)openEmailWithNSString:(id)arg1 withInt:(int)arg2 withJavaUtilList:(id)arg3;
- (id)initWithGBTSmartMailInteractionForwarder:(id)arg1 nugget:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

