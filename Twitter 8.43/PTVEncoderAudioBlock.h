//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface PTVEncoderAudioBlock : NSObject
{
    char *_data;
    unsigned long long _length;
    struct opaqueCMSampleBuffer *_sample;
    double _pts;
    NSData *_dataObject;
}

- (void).cxx_destruct;
@property(retain) NSData *dataObject; // @synthesize dataObject=_dataObject;
@property double pts; // @synthesize pts=_pts;
@property(readonly) struct opaqueCMSampleBuffer *sample; // @synthesize sample=_sample;
@property unsigned long long length; // @synthesize length=_length;
@property char *data; // @synthesize data=_data;
- (id)initWithData:(char *)arg1 Length:(unsigned long long)arg2 SampleBuffer:(struct opaqueCMSampleBuffer *)arg3 Pts:(double)arg4 DataObject:(id)arg5;
- (void)clearAndReleaseSample;
- (void)dealloc;

@end

