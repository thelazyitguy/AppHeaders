//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilSpliterators_AbstractSpliterator.h"

@protocol JavaUtilFunctionBiFunction, JavaUtilIterator;

@interface ComGoogleCommonCollectStreams_1 : JavaUtilSpliterators_AbstractSpliterator
{
    id <JavaUtilIterator> val$itrA_;
    id <JavaUtilIterator> val$itrB_;
    id <JavaUtilFunctionBiFunction> val$function_;
}

- (void)dealloc;
- (_Bool)tryAdvanceWithJavaUtilFunctionConsumer:(id)arg1;

@end
