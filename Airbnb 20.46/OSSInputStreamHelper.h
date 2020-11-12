//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSInputStream;
@protocol OS_dispatch_semaphore;

@interface OSSInputStreamHelper : NSObject
{
    NSInputStream *_inputStream;
    double _startTime;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    unsigned long long _crc64;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long crc64; // @synthesize crc64=_crc64;
- (void)syncReadBuffers;
- (id)initWithURL:(id)arg1;
- (id)initWithFileAtPath:(id)arg1;

@end
