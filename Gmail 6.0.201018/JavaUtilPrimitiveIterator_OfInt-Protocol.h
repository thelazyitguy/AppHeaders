//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"
#import "JavaUtilPrimitiveIterator-Protocol.h"

@class JavaLangInteger;
@protocol JavaUtilFunctionConsumer, JavaUtilFunctionIntConsumer;

@protocol JavaUtilPrimitiveIterator_OfInt <JavaUtilPrimitiveIterator, JavaObject>
- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id <JavaUtilFunctionConsumer>)arg1;
- (JavaLangInteger *)next;
- (void)forEachRemainingWithId:(id <JavaUtilFunctionIntConsumer>)arg1;
- (int)nextInt;
@end
