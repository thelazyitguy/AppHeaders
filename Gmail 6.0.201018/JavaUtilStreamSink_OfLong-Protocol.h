//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"
#import "JavaUtilFunctionLongConsumer-Protocol.h"
#import "JavaUtilStreamSink-Protocol.h"

@class JavaLangLong;

@protocol JavaUtilStreamSink_OfLong <JavaUtilStreamSink, JavaUtilFunctionLongConsumer, JavaObject>
- (void)acceptWithId:(JavaLangLong *)arg1;
- (void)acceptWithLong:(long long)arg1;
@end

