//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaUtilStreamSink-Protocol.h"

@class NSString;

@interface JavaUtilStreamMatchOps_BooleanTerminalSink : NSObject <JavaUtilStreamSink>
{
    _Bool stop_;
    _Bool value_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)andThenWithJavaUtilFunctionConsumer:(id)arg1;
- (void)acceptWithDouble:(double)arg1;
- (void)acceptWithLong:(long long)arg1;
- (void)acceptWithInt:(int)arg1;
- (void)end;
- (void)beginWithLong:(long long)arg1;
- (_Bool)cancellationRequested;
- (_Bool)getAndClearState;
- (id)initWithJavaUtilStreamMatchOps_MatchKind:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
