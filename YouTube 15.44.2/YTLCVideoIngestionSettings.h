//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCopying-Protocol.h>

@interface YTLCVideoIngestionSettings : NSObject <NSCopying>
{
    int _bitrate;
    int _ITag;
    int _framesPerSecond;
    struct CGSize _videoSize;
}

@property(nonatomic) int framesPerSecond; // @synthesize framesPerSecond=_framesPerSecond;
@property(nonatomic) int ITag; // @synthesize ITag=_ITag;
@property(nonatomic) int bitrate; // @synthesize bitrate=_bitrate;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithVideoSize:(struct CGSize)arg1 bitrate:(int)arg2 ITag:(int)arg3 framesPerSecond:(int)arg4;

@end

