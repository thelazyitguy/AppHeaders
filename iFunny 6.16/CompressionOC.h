//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CompressionOC : NSObject
{
    struct ZSTD_CCtx_s *cStream;
    char *outputData;
    unsigned long long outputSize;
    _Bool _inProgress;
}

@property _Bool inProgress; // @synthesize inProgress=_inProgress;
- (void)dealloc;
- (id)processData:(id)arg1 andFinalize:(_Bool)arg2 withErrorCode:(unsigned long long *)arg3;
- (_Bool)start:(int)arg1;
- (id)init;

@end
