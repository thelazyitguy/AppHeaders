//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SunNioChInterruptible-Protocol.h"

@class JavaNioChannelsSpiAbstractInterruptibleChannel, NSString;

@interface JavaNioChannelsSpiAbstractInterruptibleChannel_Interruptor : NSObject <SunNioChInterruptible>
{
    JavaNioChannelsSpiAbstractInterruptibleChannel *this$0_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void).cxx_destruct;
- (void)__javaClone:(id)arg1;
- (void)interruptWithJavaLangThread:(id)arg1;
- (id)initWithJavaNioChannelsSpiAbstractInterruptibleChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

