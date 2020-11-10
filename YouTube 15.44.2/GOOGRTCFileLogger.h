//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GOOGRTCFileLogger : NSObject
{
    _Bool _hasStarted;
    NSString *_dirPath;
    unsigned long long _maxFileSize;
    struct unique_ptr<rtc::FileRotatingLogSink, std::__1::default_delete<rtc::FileRotatingLogSink>> _logSink;
    _Bool _shouldDisableBuffering;
    unsigned long long _severity;
    unsigned long long _rotationType;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldDisableBuffering; // @synthesize shouldDisableBuffering=_shouldDisableBuffering;
@property(readonly, nonatomic) unsigned long long rotationType; // @synthesize rotationType=_rotationType;
@property(nonatomic) unsigned long long severity; // @synthesize severity=_severity;
- (int)rtcSeverity;
- (id)logData;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithDirPath:(id)arg1 maxFileSize:(unsigned long long)arg2 rotationType:(unsigned long long)arg3;
- (id)initWithDirPath:(id)arg1 maxFileSize:(unsigned long long)arg2;
- (id)init;

@end

