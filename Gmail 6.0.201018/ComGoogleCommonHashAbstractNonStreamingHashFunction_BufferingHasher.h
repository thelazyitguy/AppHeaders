//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonHashAbstractHasher.h"

@class ComGoogleCommonHashAbstractNonStreamingHashFunction, ComGoogleCommonHashAbstractNonStreamingHashFunction_ExposedByteArrayOutputStream;

@interface ComGoogleCommonHashAbstractNonStreamingHashFunction_BufferingHasher : ComGoogleCommonHashAbstractHasher
{
    ComGoogleCommonHashAbstractNonStreamingHashFunction *this$0_;
    ComGoogleCommonHashAbstractNonStreamingHashFunction_ExposedByteArrayOutputStream *stream_;
}

- (void)dealloc;
- (id)hash__;
- (id)putBytesWithJavaNioByteBuffer:(id)arg1;
- (id)putBytesWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)putByteWithByte:(BOOL)arg1;

@end
