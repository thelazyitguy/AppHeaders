//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface YTUploadFetcherProgress : NSObject
{
    NSMutableArray *_progressUpdateDates;
    NSMutableArray *_progressUpdateBytes;
    unsigned long long _bytesSent;
    unsigned long long _expectedBytes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long expectedBytes; // @synthesize expectedBytes=_expectedBytes;
@property(readonly, nonatomic) unsigned long long bytesSent; // @synthesize bytesSent=_bytesSent;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long bytesRemaining;
- (double)timeRemaining;
- (float)progress;
- (void)updateProgressWithBytesSent:(unsigned long long)arg1 expectedBytes:(unsigned long long)arg2 timestamp:(id)arg3;
- (id)init;

@end
