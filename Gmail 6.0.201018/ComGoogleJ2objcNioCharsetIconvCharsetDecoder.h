//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaNioCharsetCharsetDecoder.h"

@interface ComGoogleJ2objcNioCharsetIconvCharsetDecoder : JavaNioCharsetCharsetDecoder
{
    long long iconvName_;
    long long iconvHandle_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)java_finalize;
- (id)decodeLoopWithJavaNioByteBuffer:(id)arg1 withJavaNioCharBuffer:(id)arg2;
- (void)implReset;
- (id)initWithJavaNioCharsetCharset:(id)arg1 withFloat:(float)arg2 withFloat:(float)arg3 withLong:(long long)arg4;

@end
