//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaIoInputStream.h"

@class IOSByteArray, JavaNioByteBuffer;
@protocol JavaNioChannelsAsynchronousByteChannel;

@interface JavaNioChannelsChannels_2 : JavaIoInputStream
{
    id <JavaNioChannelsAsynchronousByteChannel> val$ch_;
    JavaNioByteBuffer *bb_;
    IOSByteArray *bs_;
    IOSByteArray *b1_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)close;
- (int)readWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)read;
- (id)initWithJavaNioChannelsAsynchronousByteChannel:(id)arg1;

@end
